//
//  ItemCell.swift
//  DreamLister
//
//  Created by Mark Rabins on 11/27/16.
//  Copyright © 2016 self.edu. All rights reserved.
//

import UIKit

class ItemCell: UITableViewCell
{
    
    @IBOutlet weak var thumbNail: UIImageView!
    @IBOutlet weak var title: UILabel!
    @IBOutlet weak var price: UILabel!
    @IBOutlet weak var details: UILabel!
    @IBOutlet weak var type: UILabel!
    
    
    func configureCell(item: Item)
    {
        title.text = item.title
        price.text = "$\(item.price)"
        details.text = item.details
        thumbNail.image = item.toImage?.image as? UIImage
        type.text = item.type
        
    }
}
