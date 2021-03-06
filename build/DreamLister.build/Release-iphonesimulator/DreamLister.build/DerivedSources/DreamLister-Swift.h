// Generated by Apple Swift version 3.0.1 (swiftlang-800.0.58.6 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import CoreData;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;
@class NSPersistentContainer;

SWIFT_CLASS("_TtC11DreamLister11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
@property (nonatomic, strong) NSPersistentContainer * _Nonnull persistentContainer;
- (void)saveContext;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIColor;
@class UIFont;
@class NSCoder;

SWIFT_CLASS("_TtC11DreamLister15CustomTextField")
@interface CustomTextField : UITextField
@property (nonatomic, strong) UIColor * _Nonnull tintCol;
@property (nonatomic, strong) UIColor * _Nonnull fontCol;
@property (nonatomic, strong) UIColor * _Nonnull shadowCol;
@property (nonatomic, strong) UIFont * _Nullable textFont;
- (void)drawRect:(CGRect)rect;
- (CGRect)textRectForBounds:(CGRect)bounds;
- (CGRect)editingRectForBounds:(CGRect)bounds;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS_NAMED("Image")
@interface Image : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class Store;
@class NSSet;

@interface Image (SWIFT_EXTENSION(DreamLister))
- (void)addToStoreObject:(Store * _Nonnull)value;
- (void)removeToStoreObject:(Store * _Nonnull)value;
- (void)addToStore:(NSSet * _Nonnull)values;
- (void)removeToStore:(NSSet * _Nonnull)values;
@end

@class NSObject;
@class Item;

@interface Image (SWIFT_EXTENSION(DreamLister))
@property (nonatomic, strong) NSObject * _Nullable image;
@property (nonatomic, strong) Item * _Nullable toItem;
@property (nonatomic, strong) NSSet * _Nullable toStore;
@end


SWIFT_CLASS_NAMED("Item")
@interface Item : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class NSDate;
@class ItemType;

@interface Item (SWIFT_EXTENSION(DreamLister))
@property (nonatomic, strong) NSDate * _Nullable created;
@property (nonatomic, copy) NSString * _Nullable details;
@property (nonatomic) double price;
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, strong) Image * _Nullable toImage;
@property (nonatomic, strong) ItemType * _Nullable toItemType;
@property (nonatomic, strong) Store * _Nullable toStore;
@end

@class UIImageView;
@class UILabel;

SWIFT_CLASS("_TtC11DreamLister8ItemCell")
@interface ItemCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified thumbNail;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified title;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified price;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified details;
- (void)configureCellWithItem:(Item * _Nonnull)item;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIPickerView;
@class NSBundle;

SWIFT_CLASS("_TtC11DreamLister25ItemDetailsViewController")
@interface ItemDetailsViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIPickerView * _Null_unspecified storePicker;
@property (nonatomic, weak) IBOutlet CustomTextField * _Null_unspecified titleField;
@property (nonatomic, weak) IBOutlet CustomTextField * _Null_unspecified priceField;
@property (nonatomic, weak) IBOutlet CustomTextField * _Null_unspecified detailsField;
@property (nonatomic, copy) NSArray<Store *> * _Nonnull stores;
- (void)viewDidLoad;
- (void)setUpStore;
- (void)getStores;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface ItemDetailsViewController (SWIFT_EXTENSION(DreamLister)) <UIPickerViewDelegate, UIPickerViewDataSource>
- (NSString * _Nullable)pickerView:(UIPickerView * _Nonnull)pickerView titleForRow:(NSInteger)row forComponent:(NSInteger)component;
- (NSInteger)pickerView:(UIPickerView * _Nonnull)pickerView numberOfRowsInComponent:(NSInteger)component;
- (NSInteger)numberOfComponentsInPickerView:(UIPickerView * _Nonnull)pickerView;
- (void)pickerView:(UIPickerView * _Nonnull)pickerView didSelectRow:(NSInteger)row inComponent:(NSInteger)component;
@end


SWIFT_CLASS_NAMED("ItemType")
@interface ItemType : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface ItemType (SWIFT_EXTENSION(DreamLister))
@property (nonatomic, copy) NSString * _Nullable type;
@property (nonatomic, strong) Item * _Nullable toItem;
@end


SWIFT_CLASS_NAMED("Store")
@interface Store : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface Store (SWIFT_EXTENSION(DreamLister))
- (void)addToItemObject:(Item * _Nonnull)value;
- (void)removeToItemObject:(Item * _Nonnull)value;
- (void)addToItem:(NSSet * _Nonnull)values;
- (void)removeToItem:(NSSet * _Nonnull)values;
@end


@interface Store (SWIFT_EXTENSION(DreamLister))
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, strong) Image * _Nullable toImage;
@property (nonatomic, strong) NSSet * _Nullable toItem;
@end


@interface UIColor (SWIFT_EXTENSION(DreamLister))
- (nonnull instancetype)initWithRed:(NSInteger)red green:(NSInteger)green blue:(NSInteger)blue;
/**
  Initializes and sets color by hex value
*/
- (nonnull instancetype)initWithNetHex:(NSInteger)netHex;
@end


@interface UIView (SWIFT_EXTENSION(DreamLister))
@property (nonatomic) BOOL materialDesign;
@end

@class UITableView;
@class UISegmentedControl;

SWIFT_CLASS("_TtC11DreamLister14ViewController")
@interface ViewController : UIViewController
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified tableView;
@property (nonatomic, weak) IBOutlet UISegmentedControl * _Null_unspecified segment;
@property (nonatomic, strong) NSFetchedResultsController<Item *> * _Null_unspecified controller;
- (void)viewDidLoad;
- (void)generateTestData;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface ViewController (SWIFT_EXTENSION(DreamLister)) <NSFetchedResultsControllerDelegate>
- (void)attemptFetch;
- (void)controllerWillChangeContent:(NSFetchedResultsController<id <NSFetchRequestResult>> * _Nonnull)controller;
- (void)controllerDidChangeContent:(NSFetchedResultsController<id <NSFetchRequestResult>> * _Nonnull)controller;
- (void)controller:(NSFetchedResultsController<id <NSFetchRequestResult>> * _Nonnull)controller didChangeObject:(id _Nonnull)anObject atIndexPath:(NSIndexPath * _Nullable)indexPath forChangeType:(NSFetchedResultsChangeType)type newIndexPath:(NSIndexPath * _Nullable)newIndexPath;
@end

@class NSIndexPath;

@interface ViewController (SWIFT_EXTENSION(DreamLister)) <UITableViewDelegate, UITableViewDataSource>
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)configureCellWithCell:(ItemCell * _Nonnull)cell indexPath:(NSIndexPath * _Nonnull)indexPath;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

#pragma clang diagnostic pop
