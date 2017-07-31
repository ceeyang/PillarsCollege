// Generated by Apple Swift version 4.0 effective-3.2 (swiftlang-900.0.54.11 clang-900.0.31)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
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

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
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
# if __has_attribute(objc_subclassing_restricted)
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
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import ObjectiveC;
@import Foundation;
@import Dispatch;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("EZSwiftExtensions")
@class CALayer;
@class NSCoder;

/// Make sure you use  “[weak self] (sender) in” if you are using the keyword self inside the closure or there might be a memory leak
SWIFT_CLASS("_TtC17EZSwiftExtensions11BlockButton")
@interface BlockButton : UIButton
@property (nonatomic, strong) CALayer * _Nullable highlightLayer;
@property (nonatomic, copy) void (^ _Nullable action)(BlockButton * _Nonnull);
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithX:(CGFloat)x y:(CGFloat)y w:(CGFloat)w h:(CGFloat)h OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithX:(CGFloat)x y:(CGFloat)y w:(CGFloat)w h:(CGFloat)h action:(void (^ _Nullable)(BlockButton * _Nonnull))action OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithAction:(void (^ _Nonnull)(BlockButton * _Nonnull))action OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame action:(void (^ _Nonnull)(BlockButton * _Nonnull))action OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)addAction:(void (^ _Nonnull)(BlockButton * _Nonnull))action;
- (void)didPressed:(BlockButton * _Nonnull)sender;
- (void)highlight;
- (void)unhighlight;
@end


/// Make sure you use  “[weak self] (gesture) in” if you are using the keyword self inside the closure or there might be a memory leak
SWIFT_CLASS("_TtC17EZSwiftExtensions14BlockLongPress")
@interface BlockLongPress : UILongPressGestureRecognizer
- (nonnull instancetype)initWithTarget:(id _Nullable)target action:(SEL _Nullable)action OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithAction:(void (^ _Nullable)(UILongPressGestureRecognizer * _Nonnull))action;
- (void)didLongPressed:(UILongPressGestureRecognizer * _Nonnull)longPress;
@end


/// Make sure you use  “[weak self] (gesture) in” if you are using the keyword self inside the closure or there might be a memory leak
SWIFT_CLASS("_TtC17EZSwiftExtensions8BlockPan")
@interface BlockPan : UIPanGestureRecognizer
- (nonnull instancetype)initWithTarget:(id _Nullable)target action:(SEL _Nullable)action OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithAction:(void (^ _Nullable)(UIPanGestureRecognizer * _Nonnull))action;
- (void)didPan:(UIPanGestureRecognizer * _Nonnull)pan;
@end


/// Make sure you use  “[weak self] (gesture) in” if you are using the keyword self inside the closure or there might be a memory leak
SWIFT_CLASS("_TtC17EZSwiftExtensions10BlockPinch")
@interface BlockPinch : UIPinchGestureRecognizer
- (nonnull instancetype)initWithTarget:(id _Nullable)target action:(SEL _Nullable)action OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithAction:(void (^ _Nullable)(UIPinchGestureRecognizer * _Nonnull))action;
- (void)didPinch:(UIPinchGestureRecognizer * _Nonnull)pinch;
@end


/// Make sure you use  “[weak self] (gesture) in” if you are using the keyword self inside the closure or there might be a memory leak
SWIFT_CLASS("_TtC17EZSwiftExtensions10BlockSwipe")
@interface BlockSwipe : UISwipeGestureRecognizer
- (nonnull instancetype)initWithTarget:(id _Nullable)target action:(SEL _Nullable)action OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithDirection:(UISwipeGestureRecognizerDirection)direction fingerCount:(NSInteger)fingerCount action:(void (^ _Nullable)(UISwipeGestureRecognizer * _Nonnull))action;
- (void)didSwipe:(UISwipeGestureRecognizer * _Nonnull)swipe;
@end


/// Make sure you use  “[weak self] (gesture) in” if you are using the keyword self inside the closure or there might be a memory leak
SWIFT_CLASS("_TtC17EZSwiftExtensions8BlockTap")
@interface BlockTap : UITapGestureRecognizer
- (nonnull instancetype)initWithTarget:(id _Nullable)target action:(SEL _Nullable)action OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithTapCount:(NSInteger)tapCount fingerCount:(NSInteger)fingerCount action:(void (^ _Nullable)(UITapGestureRecognizer * _Nonnull))action;
- (void)didTap:(UITapGestureRecognizer * _Nonnull)tap;
@end


/// Make sure you use  <code>[weak self] (NSURLRequest) in</code> if you are using the keyword <code>self</code> inside the closure or there might be a memory leak
SWIFT_CLASS("_TtC17EZSwiftExtensions12BlockWebView")
@interface BlockWebView : UIWebView <UIWebViewDelegate>
@property (nonatomic, copy) void (^ _Nullable didStartLoad)(NSURLRequest * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable didFinishLoad)(NSURLRequest * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable didFailLoad)(NSURLRequest * _Nonnull, NSError * _Nonnull);
@property (nonatomic, copy) BOOL (^ _Nullable shouldStartLoadingRequest)(NSURLRequest * _Nonnull);
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)webViewDidStartLoad:(UIWebView * _Nonnull)webView;
- (void)webViewDidFinishLoad:(UIWebView * _Nonnull)webView;
- (void)webView:(UIWebView * _Nonnull)webView didFailLoadWithError:(NSError * _Nonnull)error;
- (BOOL)webView:(UIWebView * _Nonnull)webView shouldStartLoadWithRequest:(NSURLRequest * _Nonnull)request navigationType:(UIWebViewNavigationType)navigationType SWIFT_WARN_UNUSED_RESULT;
@end


@interface NSBundle (SWIFT_EXTENSION(EZSwiftExtensions))
+ (void)loadNib:(NSString * _Nonnull)name owner:(id _Null_unspecified)owner;
@end


@interface NSFileManager (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSE: Returns path of documents directory
@property (nonatomic, readonly, copy) NSString * _Nullable documentsDirectoryPath;
/// EZSE: Returns path of documents directory caches
@property (nonatomic, readonly, copy) NSString * _Nullable cachesDirectoryPath;
@end

@class UIColor;

@interface NSAttributedString (SWIFT_EXTENSION(EZSwiftExtensions))
- (NSAttributedString * _Nonnull)bold SWIFT_WARN_UNUSED_RESULT;
/// EZSE: Adds underline attribute to NSAttributedString and returns it
- (NSAttributedString * _Nonnull)underline SWIFT_WARN_UNUSED_RESULT;
/// EZSE: Adds italic attribute to NSAttributedString and returns it
- (NSAttributedString * _Nonnull)italic SWIFT_WARN_UNUSED_RESULT;
/// EZSE: Adds strikethrough attribute to NSAttributedString and returns it
- (NSAttributedString * _Nonnull)strikethrough SWIFT_WARN_UNUSED_RESULT;
/// EZSE: Adds color attribute to NSAttributedString and returns it
- (NSAttributedString * _Nonnull)color:(UIColor * _Nonnull)color SWIFT_WARN_UNUSED_RESULT;
@end


@interface NSDictionary<KeyType, ObjectType> (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSE: Unserialize JSON string into NSDictionary
- (nullable instancetype)initWithJson:(NSString * _Nonnull)json;
/// EZSE: Serialize NSDictionary into JSON string
- (NSString * _Nullable)formatJSON SWIFT_WARN_UNUSED_RESULT;
@end


@interface NSObject (SWIFT_EXTENSION(EZSwiftExtensions))
@property (nonatomic, readonly, copy) NSString * _Nonnull className;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull className;)
+ (NSString * _Nonnull)className SWIFT_WARN_UNUSED_RESULT;
@end


@interface NSTimer (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSE: Runs every x seconds, to cancel use: timer.invalidate()
+ (NSTimer * _Nonnull)runThisEveryWithSeconds:(NSTimeInterval)seconds handler:(void (^ _Nonnull)(NSTimer * _Nullable))handler SWIFT_WARN_UNUSED_RESULT;
/// EZSE: Run function after x seconds
+ (void)runThisAfterDelayWithSeconds:(double)seconds after:(void (^ _Nonnull)(void))after;
/// EZSwiftExtensions - dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0)
+ (void)runThisAfterDelayWithSeconds:(double)seconds queue:(dispatch_queue_t _Nonnull)queue after:(void (^ _Nonnull)(void))after;
@end


@interface UIAlertController (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSE: Easy way to present UIAlertController
- (void)show;
@end

@class UIViewController;

@interface UIApplication (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSE: Run a block in background after app resigns activity
- (void)runInBackground:(void (^ _Nonnull)(void))closure expirationHandler:(void (^ _Nullable)(void))expirationHandler;
/// EZSE: Get the top most view controller from the base view controller; default param is UIWindow’s rootViewController
+ (UIViewController * _Nullable)topViewController:(UIViewController * _Nullable)base SWIFT_WARN_UNUSED_RESULT;
@end




@interface UIButton (SWIFT_EXTENSION(EZSwiftExtensions))
- (nonnull instancetype)initWithX:(CGFloat)x y:(CGFloat)y w:(CGFloat)w h:(CGFloat)h target:(id _Nonnull)target action:(SEL _Nonnull)action;
/// EZSwiftExtensions
- (void)setBackgroundColor:(UIColor * _Nonnull)color forState:(UIControlState)forState;
@end


@interface UIColor (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSE: init method with RGB values from 0 to 255, instead of 0 to 1. With alpha(default:1)
- (nonnull instancetype)initWithR:(CGFloat)r g:(CGFloat)g b:(CGFloat)b a:(CGFloat)a;
/// EZSE: init method with hex string and alpha(default: 1)
- (nullable instancetype)initWithHexString:(NSString * _Nonnull)hexString alpha:(CGFloat)alpha;
/// EZSE: init method from Gray value and alpha(default:1)
- (nonnull instancetype)initWithGray:(CGFloat)gray alpha:(CGFloat)alpha;
/// EZSE: Red component of UIColor (get-only)
@property (nonatomic, readonly) NSInteger redComponent;
/// EZSE: Green component of UIColor (get-only)
@property (nonatomic, readonly) NSInteger greenComponent;
/// EZSE: blue component of UIColor (get-only)
@property (nonatomic, readonly) NSInteger blueComponent;
/// EZSE: Alpha of UIColor (get-only)
@property (nonatomic, readonly) CGFloat alpha;
/// EZSE: Returns random UIColor with random alpha(default: false)
+ (UIColor * _Nonnull)randomWithRandomAlpha:(BOOL)randomAlpha SWIFT_WARN_UNUSED_RESULT;
@end


@interface UIDevice (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSwiftExtensions
+ (NSString * _Nullable)idForVendor SWIFT_WARN_UNUSED_RESULT;
/// EZSwiftExtensions - Operating system name
+ (NSString * _Nonnull)systemName SWIFT_WARN_UNUSED_RESULT;
/// EZSwiftExtensions - Operating system version
+ (NSString * _Nonnull)systemVersion SWIFT_WARN_UNUSED_RESULT;
/// EZSwiftExtensions - Operating system version
+ (float)systemFloatVersion SWIFT_WARN_UNUSED_RESULT;
/// EZSwiftExtensions
+ (NSString * _Nonnull)deviceName SWIFT_WARN_UNUSED_RESULT;
/// EZSwiftExtensions
+ (NSString * _Nonnull)deviceLanguage SWIFT_WARN_UNUSED_RESULT;
/// EZSwiftExtensions
+ (NSString * _Nonnull)deviceModelReadable SWIFT_WARN_UNUSED_RESULT;
/// EZSE: Returns true if the device is iPhone //TODO: Add to readme
+ (BOOL)isPhone SWIFT_WARN_UNUSED_RESULT;
/// EZSE: Returns true if the device is iPad //TODO: Add to readme
+ (BOOL)isPad SWIFT_WARN_UNUSED_RESULT;
/// EZSwiftExtensions
+ (NSString * _Nonnull)deviceModel SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull CURRENT_VERSION;)
+ (NSString * _Nonnull)CURRENT_VERSION SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)IS_OS_5 SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)IS_OS_5_OR_LATER SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)IS_OS_5_OR_EARLIER SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)IS_OS_6 SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)IS_OS_6_OR_LATER SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)IS_OS_6_OR_EARLIER SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)IS_OS_7 SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)IS_OS_7_OR_LATER SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)IS_OS_7_OR_EARLIER SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)IS_OS_8 SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)IS_OS_8_OR_LATER SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)IS_OS_8_OR_EARLIER SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)IS_OS_9 SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)IS_OS_9_OR_LATER SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)IS_OS_9_OR_EARLIER SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)IS_OS_10 SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)IS_OS_10_OR_LATER SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)IS_OS_10_OR_EARLIER SWIFT_WARN_UNUSED_RESULT;
/// EZSwiftExtensions
+ (BOOL)isSystemVersionOver:(NSString * _Nonnull)requiredVersion SWIFT_WARN_UNUSED_RESULT;
@end


@interface UIFont (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSwiftExtensions
+ (UIFont * _Nonnull)AvenirNextDemiBoldWithSize:(CGFloat)size SWIFT_WARN_UNUSED_RESULT;
/// EZSwiftExtensions
+ (UIFont * _Nonnull)AvenirNextRegularWithSize:(CGFloat)size SWIFT_WARN_UNUSED_RESULT;
@end


@interface UIImage (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSE: Returns compressed image to rate from 0 to 1
- (NSData * _Nullable)compressImageWithRate:(CGFloat)rate SWIFT_WARN_UNUSED_RESULT;
/// EZSE: Returns Image size in Bytes
- (NSInteger)getSizeAsBytes SWIFT_WARN_UNUSED_RESULT;
/// EZSE: Returns Image size in Kylobites
- (NSInteger)getSizeAsKilobytes SWIFT_WARN_UNUSED_RESULT;
/// EZSE: scales image
+ (UIImage * _Nonnull)scaleToImage:(UIImage * _Nonnull)image w:(CGFloat)w h:(CGFloat)h SWIFT_WARN_UNUSED_RESULT;
/// EZSE Returns resized image with width. Might return low quality
- (UIImage * _Nonnull)resizeWithWidth:(CGFloat)width SWIFT_WARN_UNUSED_RESULT;
/// EZSE Returns resized image with height. Might return low quality
- (UIImage * _Nonnull)resizeWithHeight:(CGFloat)height SWIFT_WARN_UNUSED_RESULT;
/// EZSE:
- (CGFloat)aspectHeightForWidth:(CGFloat)width SWIFT_WARN_UNUSED_RESULT;
/// EZSE:
- (CGFloat)aspectWidthForHeight:(CGFloat)height SWIFT_WARN_UNUSED_RESULT;
/// EZSE: Returns cropped image from CGRect
- (UIImage * _Nullable)croppedImage:(CGRect)bound SWIFT_WARN_UNUSED_RESULT;
/// EZSE: Use current image for pattern of color
- (UIImage * _Nonnull)withColor:(UIColor * _Nonnull)tintColor SWIFT_WARN_UNUSED_RESULT;
/// EZSE: Returns the image associated with the URL
- (nullable instancetype)initWithUrlString:(NSString * _Nonnull)urlString;
/// EZSE: Returns an empty image //TODO: Add to readme
+ (UIImage * _Nonnull)blankImage SWIFT_WARN_UNUSED_RESULT;
@end


@interface UIImageView (SWIFT_EXTENSION(EZSwiftExtensions))
- (nonnull instancetype)initWithX:(CGFloat)x y:(CGFloat)y w:(CGFloat)w h:(CGFloat)h;
/// EZSwiftExtensions
- (nonnull instancetype)initWithX:(CGFloat)x y:(CGFloat)y w:(CGFloat)w h:(CGFloat)h imageName:(NSString * _Nonnull)imageName;
/// EZSwiftExtensions
- (nonnull instancetype)initWithX:(CGFloat)x y:(CGFloat)y imageName:(NSString * _Nonnull)imageName scaleToWidth:(CGFloat)scaleToWidth;
/// EZSwiftExtensions
- (nonnull instancetype)initWithX:(CGFloat)x y:(CGFloat)y w:(CGFloat)w h:(CGFloat)h image:(UIImage * _Nonnull)image;
/// EZSwiftExtensions
- (nonnull instancetype)initWithX:(CGFloat)x y:(CGFloat)y image:(UIImage * _Nonnull)image scaleToWidth:(CGFloat)scaleToWidth;
/// EZSwiftExtensions, scales this ImageView size to fit the given width
- (void)scaleImageFrameToWidthWithWidth:(CGFloat)width;
/// EZSwiftExtensions, scales this ImageView size to fit the given height
- (void)scaleImageFrameToHeightWithHeight:(CGFloat)height;
/// EZSwiftExtensions
- (void)roundSquareImage;
/// EZSE: Initializes an UIImage from URL and adds into current ImageView
- (void)imageWithUrl:(NSString * _Nonnull)url;
/// EZSE: Initializes an UIImage from URL and adds into current ImageView with placeholder
- (void)imageWithUrl:(NSString * _Nonnull)url placeholder:(UIImage * _Nonnull)placeholder;
/// EZSE: Initializes an UIImage from URL and adds into current ImageView with placeholder
- (void)imageWithUrl:(NSString * _Nonnull)url placeholderNamed:(NSString * _Nonnull)placeholderNamed;
/// EZSwiftExtensions
- (void)imageWithUrlWithUrl:(NSString * _Nonnull)url;
/// EZSwiftExtensions
- (void)imageWithUrlWithUrl:(NSString * _Nonnull)url placeholder:(UIImage * _Nonnull)placeholder;
/// EZSwiftExtensions
- (void)imageWithUrlWithUrl:(NSString * _Nonnull)url placeholderNamed:(NSString * _Nonnull)placeholderNamed;
@end


@interface UILabel (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSwiftExtensions: fontSize: 17
- (nonnull instancetype)initWithX:(CGFloat)x y:(CGFloat)y w:(CGFloat)w h:(CGFloat)h;
/// EZSwiftExtensions
- (nonnull instancetype)initWithX:(CGFloat)x y:(CGFloat)y w:(CGFloat)w h:(CGFloat)h fontSize:(CGFloat)fontSize;
/// EZSwiftExtensions
- (CGSize)getEstimatedSize:(CGFloat)width height:(CGFloat)height SWIFT_WARN_UNUSED_RESULT;
/// EZSwiftExtensions
- (CGFloat)getEstimatedHeight SWIFT_WARN_UNUSED_RESULT;
/// EZSwiftExtensions
- (CGFloat)getEstimatedWidth SWIFT_WARN_UNUSED_RESULT;
/// EZSwiftExtensions
- (void)fitHeight;
/// EZSwiftExtensions
- (void)fitWidth;
/// EZSwiftExtensions
- (void)fitSize;
/// EZSwiftExtensions (if duration set to 0 animate wont be)
- (void)setWithText:(NSString * _Nullable)_text duration:(NSTimeInterval)duration;
@end


@interface UISlider (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSE: Slider moving to value with animation duration
- (void)setValue:(float)value duration:(double)duration;
@end


@interface UIStackView (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSwiftExtensions: Convenience initializer in order to directly pass the distribution, alignment, axis and spacing of the stack view.
/// \param distribution the distribution of the stack view
///
/// \param alignment the alignment of the stack view
///
/// \param axis the axis (e.g. horizontal or vertical)
///
/// \param spacing spacing between subviews, default is 0
///
- (nonnull instancetype)initWithDistribution:(UIStackViewDistribution)distribution alignment:(UIStackViewAlignment)alignment axis:(UILayoutConstraintAxis)axis spacing:(CGFloat)spacing;
@end


@interface UIStoryboard (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSE: Get the application’s main storyboard
/// Usage: let storyboard = UIStoryboard.mainStoryboard
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UIStoryboard * _Nullable mainStoryboard;)
+ (UIStoryboard * _Nullable)mainStoryboard SWIFT_WARN_UNUSED_RESULT;
@end


@interface UISwitch (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSE: toggles Switch
- (void)toggle;
@end


@interface UITextField (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSwiftExtensions: Automatically sets these values: backgroundColor = clearColor, textColor = ThemeNicknameColor, clipsToBounds = true,
/// textAlignment = Left, userInteractionEnabled = true, editable = false, scrollEnabled = false, font = ThemeFontName, fontsize = 17
- (nonnull instancetype)initWithX:(CGFloat)x y:(CGFloat)y w:(CGFloat)w h:(CGFloat)h;
/// EZSwiftExtensions: Automatically sets these values: backgroundColor = clearColor, textColor = ThemeNicknameColor, clipsToBounds = true,
/// textAlignment = Left, userInteractionEnabled = true, editable = false, scrollEnabled = false, font = ThemeFontName
- (nonnull instancetype)initWithX:(CGFloat)x y:(CGFloat)y w:(CGFloat)w h:(CGFloat)h fontSize:(CGFloat)fontSize;
/// EZSE: Add left padding to the text in textfield
- (void)addLeftTextPadding:(CGFloat)blankSize;
/// EZSE: Add a image icon on the left side of the textfield
- (void)addLeftIcon:(UIImage * _Nullable)image frame:(CGRect)frame imageSize:(CGSize)imageSize;
@end


@interface UITextView (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSwiftExtensions: Automatically sets these values: backgroundColor = clearColor, textColor = ThemeNicknameColor, clipsToBounds = true,
/// textAlignment = Left, userInteractionEnabled = true, editable = false, scrollEnabled = false, font = ThemeFontName, fontsize = 17
- (nonnull instancetype)initWithX:(CGFloat)x y:(CGFloat)y w:(CGFloat)w h:(CGFloat)h;
/// EZSwiftExtensions: Automatically sets these values: backgroundColor = clearColor, textColor = ThemeNicknameColor, clipsToBounds = true,
/// textAlignment = Left, userInteractionEnabled = true, editable = false, scrollEnabled = false, font = ThemeFontName
- (nonnull instancetype)initWithX:(CGFloat)x y:(CGFloat)y w:(CGFloat)w h:(CGFloat)h fontSize:(CGFloat)fontSize;
/// EZSE: Automatically adds a toolbar with a done button to the top of the keyboard. Tapping the button will dismiss the keyboard.
- (void)addDoneButton:(UIBarStyle)barStyle title:(NSString * _Nullable)title;
@end


@interface UIView (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSE: Shakes the view for as many number of times as given in the argument.
- (void)shakeViewForTimes:(NSInteger)times;
@end




@interface UIView (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSwiftExtensions
- (UIImage * _Nonnull)toImage SWIFT_WARN_UNUSED_RESULT;
@end


@interface UIView (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSwiftExtensions
- (nonnull instancetype)initWithX:(CGFloat)x y:(CGFloat)y w:(CGFloat)w h:(CGFloat)h;
/// EZSwiftExtensions, puts padding around the view
- (nonnull instancetype)initWithSuperView:(UIView * _Nonnull)superView padding:(CGFloat)padding;
/// EZSwiftExtensions - Copies size of superview
- (nonnull instancetype)initWithSuperView:(UIView * _Nonnull)superView;
@end


@interface UIView (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSwiftExtensions [UIRectCorner.TopLeft, UIRectCorner.TopRight]
- (void)roundCorners:(UIRectCorner)corners radius:(CGFloat)radius;
/// EZSwiftExtensions - Remove all masking around UIView
- (void)nakedView;
@end




@interface UIView (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSwiftExtensions
- (void)setRotationX:(CGFloat)x;
/// EZSwiftExtensions
- (void)setRotationY:(CGFloat)y;
/// EZSwiftExtensions
- (void)setRotationZ:(CGFloat)z;
/// EZSwiftExtensions
- (void)setRotationWithX:(CGFloat)x y:(CGFloat)y z:(CGFloat)z;
/// EZSwiftExtensions
- (void)setScaleWithX:(CGFloat)x y:(CGFloat)y;
@end


@interface UIView (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSwiftExtensions
- (void)springWithAnimations:(void (^ _Nonnull)(void))animations completion:(void (^ _Nullable)(BOOL))completion;
/// EZSwiftExtensions
- (void)springWithDuration:(NSTimeInterval)duration animations:(void (^ _Nonnull)(void))animations completion:(void (^ _Nullable)(BOOL))completion;
/// EZSwiftExtensions
- (void)animateWithDuration:(NSTimeInterval)duration animations:(void (^ _Nonnull)(void))animations completion:(void (^ _Nullable)(BOOL))completion;
/// EZSwiftExtensions
- (void)animateWithAnimations:(void (^ _Nonnull)(void))animations completion:(void (^ _Nullable)(BOOL))completion;
/// EZSwiftExtensions
- (void)pop;
/// EZSwiftExtensions
- (void)popBig;
- (void)reversePop;
@end


@interface UIView (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSwiftExtensions
- (void)setCornerRadiusWithRadius:(CGFloat)radius;
/// EZSwiftExtensions
- (void)addBorderWithWidth:(CGFloat)width color:(UIColor * _Nonnull)color;
/// EZSwiftExtensions
- (void)addBorderTopWithSize:(CGFloat)size color:(UIColor * _Nonnull)color;
/// EZSwiftExtensions
- (void)addBorderTopWithPaddingWithSize:(CGFloat)size color:(UIColor * _Nonnull)color padding:(CGFloat)padding;
/// EZSwiftExtensions
- (void)addBorderBottomWithSize:(CGFloat)size color:(UIColor * _Nonnull)color;
/// EZSwiftExtensions
- (void)addBorderLeftWithSize:(CGFloat)size color:(UIColor * _Nonnull)color;
/// EZSwiftExtensions
- (void)addBorderRightWithSize:(CGFloat)size color:(UIColor * _Nonnull)color;
/// EZSwiftExtensions
- (void)drawCircleWithFillColor:(UIColor * _Nonnull)fillColor strokeColor:(UIColor * _Nonnull)strokeColor strokeWidth:(CGFloat)strokeWidth;
/// EZSwiftExtensions
- (void)drawStrokeWithWidth:(CGFloat)width color:(UIColor * _Nonnull)color;
@end


@interface UIView (SWIFT_EXTENSION(EZSwiftExtensions))
/// http://stackoverflow.com/questions/4660371/how-to-add-a-touch-event-to-a-uiview/32182866#32182866
/// EZSwiftExtensions
- (void)addTapGestureWithTapNumber:(NSInteger)tapNumber target:(id _Nonnull)target action:(SEL _Nonnull)action;
/// EZSwiftExtensions - Make sure you use  “[weak self] (gesture) in” if you are using the keyword self inside the closure or there might be a memory leak
- (void)addTapGestureWithTapNumber:(NSInteger)tapNumber action:(void (^ _Nullable)(UITapGestureRecognizer * _Nonnull))action;
/// EZSwiftExtensions
- (void)addSwipeGestureWithDirection:(UISwipeGestureRecognizerDirection)direction numberOfTouches:(NSInteger)numberOfTouches target:(id _Nonnull)target action:(SEL _Nonnull)action;
/// EZSwiftExtensions - Make sure you use  “[weak self] (gesture) in” if you are using the keyword self inside the closure or there might be a memory leak
- (void)addSwipeGestureWithDirection:(UISwipeGestureRecognizerDirection)direction numberOfTouches:(NSInteger)numberOfTouches action:(void (^ _Nullable)(UISwipeGestureRecognizer * _Nonnull))action;
/// EZSwiftExtensions
- (void)addPanGestureWithTarget:(id _Nonnull)target action:(SEL _Nonnull)action;
/// EZSwiftExtensions - Make sure you use  “[weak self] (gesture) in” if you are using the keyword self inside the closure or there might be a memory leak
- (void)addPanGestureWithAction:(void (^ _Nullable)(UIPanGestureRecognizer * _Nonnull))action;
/// EZSwiftExtensions
- (void)addPinchGestureWithTarget:(id _Nonnull)target action:(SEL _Nonnull)action;
/// EZSwiftExtensions - Make sure you use  “[weak self] (gesture) in” if you are using the keyword self inside the closure or there might be a memory leak
- (void)addPinchGestureWithAction:(void (^ _Nullable)(UIPinchGestureRecognizer * _Nonnull))action;
/// EZSwiftExtensions
- (void)addLongPressGestureWithTarget:(id _Nonnull)target action:(SEL _Nonnull)action;
/// EZSwiftExtensions - Make sure you use  “[weak self] (gesture) in” if you are using the keyword self inside the closure or there might be a memory leak
- (void)addLongPressGestureWithAction:(void (^ _Nullable)(UILongPressGestureRecognizer * _Nonnull))action;
@end


@interface UIView (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSwiftExtensions, add multiple subviews
- (void)addSubviews:(NSArray<UIView *> * _Nonnull)views;
/// EZSwiftExtensions, resizes this view so it fits the largest subview
- (void)resizeToFitSubviews;
/// EZSwiftExtensions, resizes this view so it fits the largest subview
- (void)resizeToFitSubviews:(NSArray<NSNumber *> * _Nonnull)tagsToIgnore;
/// EZSwiftExtensions
- (void)resizeToFitWidth;
/// EZSwiftExtensions
- (void)resizeToFitHeight;
/// EZSwiftExtensions
@property (nonatomic) CGFloat x;
/// EZSwiftExtensions
@property (nonatomic) CGFloat y;
/// EZSwiftExtensions
@property (nonatomic) CGFloat w;
/// EZSwiftExtensions
@property (nonatomic) CGFloat h;
/// EZSwiftExtensions
@property (nonatomic) CGFloat left;
/// EZSwiftExtensions
@property (nonatomic) CGFloat right;
/// EZSwiftExtensions
@property (nonatomic) CGFloat top;
/// EZSwiftExtensions
@property (nonatomic) CGFloat bottom;
/// EZSwiftExtensions
@property (nonatomic) CGPoint origin;
/// EZSwiftExtensions
@property (nonatomic) CGFloat centerX;
/// EZSwiftExtensions
@property (nonatomic) CGFloat centerY;
/// EZSwiftExtensions
@property (nonatomic) CGSize size;
/// EZSwiftExtensions
- (CGFloat)leftOffset:(CGFloat)offset SWIFT_WARN_UNUSED_RESULT;
/// EZSwiftExtensions
- (CGFloat)rightOffset:(CGFloat)offset SWIFT_WARN_UNUSED_RESULT;
/// EZSwiftExtensions
- (CGFloat)topOffset:(CGFloat)offset SWIFT_WARN_UNUSED_RESULT;
/// EZSwiftExtensions
- (CGFloat)bottomOffset:(CGFloat)offset SWIFT_WARN_UNUSED_RESULT;
/// EZSwiftExtensions
- (CGFloat)alignRight:(CGFloat)offset SWIFT_WARN_UNUSED_RESULT;
/// EZSwiftExtensions
- (CGFloat)reorderSubViews:(BOOL)reorder tagsToIgnore:(NSArray<NSNumber *> * _Nonnull)tagsToIgnore SWIFT_WARN_UNUSED_RESULT;
- (void)removeSubviews;
/// EZSE: Centers view in superview horizontally
- (void)centerXInSuperView;
/// EZSE: Centers view in superview vertically
- (void)centerYInSuperView;
/// EZSE: Centers view in superview horizontally & vertically
- (void)centerInSuperView;
@end

@class UINavigationBar;

@interface UIViewController (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSE: Adds an NotificationCenter with name and Selector
- (void)addNotificationObserver:(NSString * _Nonnull)name selector:(SEL _Nonnull)selector;
/// EZSE: Removes an NSNotificationCenter for name
- (void)removeNotificationObserver:(NSString * _Nonnull)name;
/// EZSE: Removes NotificationCenter’d observer
- (void)removeNotificationObserver;
/// EZSE: Adds a NotificationCenter Observer for keyboardWillShowNotification()
/// ⚠️ You also need to implement <code>keyboardWillShowNotification(_ notification: Notification)</code>
- (void)addKeyboardWillShowNotification;
/// EZSE:  Adds a NotificationCenter Observer for keyboardDidShowNotification()
/// ⚠️ You also need to implement <code>keyboardDidShowNotification(_ notification: Notification)</code>
- (void)addKeyboardDidShowNotification;
/// EZSE:  Adds a NotificationCenter Observer for keyboardWillHideNotification()
/// ⚠️ You also need to implement <code>keyboardWillHideNotification(_ notification: Notification)</code>
- (void)addKeyboardWillHideNotification;
/// EZSE:  Adds a NotificationCenter Observer for keyboardDidHideNotification()
/// ⚠️ You also need to implement <code>keyboardDidHideNotification(_ notification: Notification)</code>
- (void)addKeyboardDidHideNotification;
/// EZSE: Removes keyboardWillShowNotification()’s NotificationCenter Observer
- (void)removeKeyboardWillShowNotification;
/// EZSE: Removes keyboardDidShowNotification()’s NotificationCenter Observer
- (void)removeKeyboardDidShowNotification;
/// EZSE: Removes keyboardWillHideNotification()’s NotificationCenter Observer
- (void)removeKeyboardWillHideNotification;
/// EZSE: Removes keyboardDidHideNotification()’s NotificationCenter Observer
- (void)removeKeyboardDidHideNotification;
- (void)keyboardDidShowNotification:(NSNotification * _Nonnull)notification;
- (void)keyboardWillShowNotification:(NSNotification * _Nonnull)notification;
- (void)keyboardWillHideNotification:(NSNotification * _Nonnull)notification;
- (void)keyboardDidHideNotification:(NSNotification * _Nonnull)notification;
- (void)keyboardWillShowWithFrame:(CGRect)frame;
- (void)keyboardDidShowWithFrame:(CGRect)frame;
- (void)keyboardWillHideWithFrame:(CGRect)frame;
- (void)keyboardDidHideWithFrame:(CGRect)frame;
- (void)hideKeyboardWhenTappedAroundWithCancelTouches:(BOOL)cancelTouches;
- (void)dismissKeyboard;
/// EZSE: Returns maximum y of the ViewController
@property (nonatomic, readonly) CGFloat top;
/// EZSE: Returns minimum y of the ViewController
@property (nonatomic, readonly) CGFloat bottom;
/// EZSE: Returns Tab Bar’s height
@property (nonatomic, readonly) CGFloat tabBarHeight;
/// EZSE: Returns Navigation Bar’s height
@property (nonatomic, readonly) CGFloat navigationBarHeight;
/// EZSE: Returns Navigation Bar’s color
@property (nonatomic, strong) UIColor * _Nullable navigationBarColor;
/// EZSE: Returns current Navigation Bar
@property (nonatomic, readonly, strong) UINavigationBar * _Nullable navBar;
/// EZSwiftExtensions
@property (nonatomic, readonly) CGRect applicationFrame;
/// EZSE: Pushes a view controller onto the receiver’s stack and updates the display.
- (void)pushVC:(UIViewController * _Nonnull)vc;
/// EZSE: Pops the top view controller from the navigation stack and updates the display.
- (void)popVC;
/// EZSE: Hide or show navigation bar
@property (nonatomic) BOOL isNavBarHidden;
/// EZSE: Added extension for popToRootViewController
- (void)popToRootVC;
/// EZSE: Presents a view controller modally.
- (void)presentVC:(UIViewController * _Nonnull)vc;
/// EZSE: Dismisses the view controller that was presented modally by the view controller.
- (void)dismissVCWithCompletion:(void (^ _Nullable)(void))completion;
/// EZSE: Adds the specified view controller as a child of the current view controller.
- (void)addAsChildViewController:(UIViewController * _Nonnull)vc toView:(UIView * _Nonnull)toView;
/// EZSE: Adds image named: as a UIImageView in the Background
- (void)setBackgroundImage:(NSString * _Nonnull)named;
- (void)hideKeyboardWhenTappedAroundAndCancelsTouchesInView;
@end


@interface UIWindow (SWIFT_EXTENSION(EZSwiftExtensions))
/// EZSE: Creates and shows UIWindow. The size will show iPhone4 size until you add launch images with proper sizes. TODO: Add to readme
- (nonnull instancetype)initWithViewController:(UIViewController * _Nonnull)viewController backgroundColor:(UIColor * _Nonnull)backgroundColor;
@end


@interface NSUserDefaults (SWIFT_EXTENSION(EZSwiftExtensions))
- (id _Nullable)objectForKeyedSubscript:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (void)setObject:(id _Nullable)newValue forKeyedSubscript:(NSString * _Nonnull)key;
@end

SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop
