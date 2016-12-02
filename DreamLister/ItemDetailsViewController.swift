//
//  ItemDetailsViewController.swift
//  DreamLister
//
//  Created by Mark Rabins on 11/27/16.
//  Copyright © 2016 self.edu. All rights reserved.
//

import UIKit
import CoreData

class ItemDetailsViewController: UIViewController {

    @IBOutlet weak var storePicker: UIPickerView!
    @IBOutlet weak var titleField: CustomTextField!
    @IBOutlet weak var priceField: CustomTextField!
    @IBOutlet weak var detailsField: CustomTextField!
    
    var stores = [Store]()
    var itemToEdit: Item?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        if let topItem = self.navigationController?.navigationBar.topItem {
            topItem.backBarButtonItem = UIBarButtonItem(title: "", style: UIBarButtonItemStyle.plain, target: nil, action: nil)            
        }
        storePicker.dataSource = self
        storePicker.delegate = self
        getStores()
        setUpStore()
        
        if itemToEdit != nil {
            loadItemData()
        }
        
    }
    
    func setUpStore() {
//        let store = Store(context: context)
//        store.name = "Best Buy"
//        let store2 = Store(context: context)
//        store2.name = "Tesla Dealership"
//        let store3 = Store(context: context)
//        store3.name = "Frys Electronics"
//        let store4 = Store(context: context)
//        store4.name = "Target"
//        let store5 = Store(context: context)
//        store5.name = "Amazon"
//        let store6 = Store(context: context)
//        store6.name = "K Mart"
//        
//        ad.saveContext()
    }
    
    func getStores() {
        let fetchRequest: NSFetchRequest<Store> = Store.fetchRequest()
        
        do {
            self.stores = try context.fetch(fetchRequest)
            self.storePicker.reloadAllComponents()
        } catch {
            
            // TODO: Handle the error
        }
    }
    
    @IBAction func saveItemButtonPressed(sender: UIButton) {
        var item: Item!
        
        if itemToEdit == nil {
            item = Item(context: context)
        } else {
            item = itemToEdit
        }
        
        
        if let title = titleField.text {
            item.title = title
            titleField.resignFirstResponder()
        }
        
        if let price = priceField.text {
            item.price = (price as NSString).doubleValue
            priceField.resignFirstResponder()
        }
        
        if let details = detailsField.text {
            item.details = details
            detailsField.resignFirstResponder()
        }
        
        item.toStore = stores[storePicker.selectedRow(inComponent: 0)]
        storePicker.resignFirstResponder()
        ad.saveContext()
        
       _ = navigationController?.popViewController(animated: true)
        
    }
    
    func loadItemData() {
        if let item = itemToEdit {
            titleField.text = item.title
            priceField.text = "\(item.price)"
            detailsField.text = item.details
            
            
            if let store = item.toStore {
                
                var index = 0
                repeat {
                    let s = stores[index]
                    if s.name == store.name {
                        storePicker.selectRow(index, inComponent: 0, animated: true)
                        break
                    }
                    index += 1
                } while (index < stores.count)             }
        }
    }


}

extension ItemDetailsViewController: UIPickerViewDelegate,UIPickerViewDataSource {
    func pickerView(_ pickerView: UIPickerView, titleForRow row: Int, forComponent component: Int) -> String? {
        let store = stores[row]
        return store.name
    }
    
    func pickerView(_ pickerView: UIPickerView, numberOfRowsInComponent component: Int) -> Int {
        return stores.count
    }
    
    func numberOfComponents(in pickerView: UIPickerView) -> Int {
        return 1
    }
    
    func pickerView(_ pickerView: UIPickerView, didSelectRow row: Int, inComponent component: Int) {
        // TODO: Update when selected
    }
}
