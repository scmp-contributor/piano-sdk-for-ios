// Generated by Apple Swift version 4.0.2 (swiftlang-900.0.69.2 clang-900.0.38)
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
@import ObjectiveC;
@import WebKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("PianoComposer")
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC13PianoComposer23BasePopupViewController")
@interface BasePopupViewController : UIViewController
- (void)viewDidLoad;
- (void)show;
- (void)close;
- (void)viewDidLayoutSubviews;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13PianoComposer12CustomParams")
@interface CustomParams : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13PianoComposer7DelayBy")
@interface DelayBy : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

typedef SWIFT_ENUM(NSInteger, DelayType) {
  DelayTypeTime = 0,
  DelayTypeScroll = 1,
};

typedef SWIFT_ENUM(NSInteger, DisplayMode) {
  DisplayModeInline = 0,
  DisplayModeModal = 1,
};


SWIFT_CLASS("_TtC13PianoComposer28ExperienceExecuteEventParams")
@interface ExperienceExecuteEventParams : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC13PianoComposer18FailureEventParams")
@interface FailureEventParams : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC13PianoComposer5Meter")
@interface Meter : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC13PianoComposer24PageViewMeterEventParams")
@interface PageViewMeterEventParams : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@protocol PianoComposerDelegate;

SWIFT_CLASS("_TtC13PianoComposer13PianoComposer")
@interface PianoComposer : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull tinypassUserProviderName;)
+ (NSString * _Nonnull)tinypassUserProviderName SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull janrainUserProviderName;)
+ (NSString * _Nonnull)janrainUserProviderName SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, weak) id <PianoComposerDelegate> _Nullable delegate;
@property (nonatomic, readonly, copy) NSString * _Nonnull aid;
@property (nonatomic, readonly) NSInteger protocolVersion;
@property (nonatomic, readonly, copy) NSString * _Nonnull submitType;
@property (nonatomic, copy) NSString * _Nonnull endpointUrl;
@property (nonatomic, copy) NSSet<NSString *> * _Nonnull tags;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nonnull customVariables;
@property (nonatomic, strong) CustomParams * _Nullable customParams;
@property (nonatomic, copy) NSString * _Nonnull url;
@property (nonatomic, copy) NSString * _Nonnull referrer;
@property (nonatomic, copy) NSString * _Nonnull zoneId;
@property (nonatomic) BOOL debug;
@property (nonatomic, copy) NSString * _Nonnull userToken;
@property (nonatomic, copy) NSString * _Nonnull contentCreated;
@property (nonatomic, copy) NSString * _Nonnull contentAuthor;
@property (nonatomic, copy) NSString * _Nonnull contentSection;
@property (nonatomic, copy) NSString * _Nonnull gaClientId;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithAid:(NSString * _Nonnull)aid endpointUrl:(NSString * _Nonnull)endpointUrl OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithAid:(NSString * _Nonnull)aid;
- (nonnull instancetype)initWithAid:(NSString * _Nonnull)aid sandbox:(BOOL)sandbox;
- (PianoComposer * _Nonnull)endpointUrlWithEndpointUrl:(NSString * _Nonnull)endpointUrl SWIFT_WARN_UNUSED_RESULT;
- (PianoComposer * _Nonnull)tagWithTag:(NSString * _Nonnull)tag SWIFT_WARN_UNUSED_RESULT;
- (PianoComposer * _Nonnull)tagsWithTagCollection:(NSArray<NSString *> * _Nonnull)tagCollection SWIFT_WARN_UNUSED_RESULT;
- (PianoComposer * _Nonnull)customVariableWithName:(NSString * _Nonnull)name value:(NSString * _Nonnull)value SWIFT_WARN_UNUSED_RESULT;
- (PianoComposer * _Nonnull)clearCustomVariables SWIFT_WARN_UNUSED_RESULT;
- (PianoComposer * _Nonnull)customParamsWithCustomParams:(CustomParams * _Nonnull)customParams SWIFT_WARN_UNUSED_RESULT;
- (PianoComposer * _Nonnull)urlWithUrl:(NSString * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
- (PianoComposer * _Nonnull)userTokenWithUserToken:(NSString * _Nonnull)userToken SWIFT_WARN_UNUSED_RESULT;
- (PianoComposer * _Nonnull)referrerWithReferrer:(NSString * _Nonnull)referrer SWIFT_WARN_UNUSED_RESULT;
- (PianoComposer * _Nonnull)zoneIdWithZoneId:(NSString * _Nonnull)zoneId SWIFT_WARN_UNUSED_RESULT;
- (PianoComposer * _Nonnull)debugWithDebug:(BOOL)debug SWIFT_WARN_UNUSED_RESULT;
- (PianoComposer * _Nonnull)contentCreatedWithContentCreated:(NSString * _Nonnull)contentCreated SWIFT_WARN_UNUSED_RESULT;
- (PianoComposer * _Nonnull)contentAuthorWithContentAuthor:(NSString * _Nonnull)contentAuthor SWIFT_WARN_UNUSED_RESULT;
- (PianoComposer * _Nonnull)contentSectionWithContentSection:(NSString * _Nonnull)contentSection SWIFT_WARN_UNUSED_RESULT;
- (PianoComposer * _Nonnull)delegateWithDelegate:(id <PianoComposerDelegate> _Nullable)delegate SWIFT_WARN_UNUSED_RESULT;
- (PianoComposer * _Nonnull)gaClientIdWithGaClientId:(NSString * _Nonnull)gaClientId SWIFT_WARN_UNUSED_RESULT;
/// Start experiences executing
- (PianoComposer * _Nonnull)execute;
@end

@class XpEvent;
@class ShowLoginEventParams;
@class ShowTemplateEventParams;

SWIFT_PROTOCOL("_TtP13PianoComposer21PianoComposerDelegate_")
@protocol PianoComposerDelegate
@optional
/// Show login event
- (void)showLoginWithComposer:(PianoComposer * _Nonnull)composer event:(XpEvent * _Nonnull)event params:(ShowLoginEventParams * _Nullable)params;
/// Show template event
- (void)showTemplateWithComposer:(PianoComposer * _Nonnull)composer event:(XpEvent * _Nonnull)event params:(ShowTemplateEventParams * _Nullable)params;
/// Non site action event
- (void)nonSiteWithComposer:(PianoComposer * _Nonnull)composer event:(XpEvent * _Nonnull)event;
/// User segment true event
- (void)userSegmentTrueWithComposer:(PianoComposer * _Nonnull)composer event:(XpEvent * _Nonnull)event;
/// User segment false event
- (void)userSegmentFalseWithComposer:(PianoComposer * _Nonnull)composer event:(XpEvent * _Nonnull)event;
/// Meter active event
- (void)meterActiveWithComposer:(PianoComposer * _Nonnull)composer event:(XpEvent * _Nonnull)event params:(PageViewMeterEventParams * _Nullable)params;
/// Meter expired event
- (void)meterExpiredWithComposer:(PianoComposer * _Nonnull)composer event:(XpEvent * _Nonnull)event params:(PageViewMeterEventParams * _Nullable)params;
/// Exeperience execution failed
- (void)experienceExecutionFailedWithComposer:(PianoComposer * _Nonnull)composer event:(XpEvent * _Nonnull)event params:(FailureEventParams * _Nullable)params;
/// Exeperience execute event
- (void)experienceExecuteWithComposer:(PianoComposer * _Nonnull)composer event:(XpEvent * _Nonnull)event params:(ExperienceExecuteEventParams * _Nullable)params;
@required
/// Event fired by composer when async task was completed and all experience event fired
- (void)composerExecutionCompletedWithComposer:(PianoComposer * _Nonnull)composer;
@end

@protocol PianoShowTemplateDelegate;

SWIFT_CLASS("_TtC13PianoComposer27PianoShowTemplateController")
@interface PianoShowTemplateController : NSObject
@property (nonatomic, weak) id <PianoShowTemplateDelegate> _Nullable delegate;
@property (nonatomic, strong) ShowTemplateEventParams * _Nonnull params;
- (nonnull instancetype)initWithParams:(ShowTemplateEventParams * _Nonnull)params OBJC_DESIGNATED_INITIALIZER;
- (void)show;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class WKUserContentController;
@class WKScriptMessage;

@interface PianoShowTemplateController (SWIFT_EXTENSION(PianoComposer)) <WKScriptMessageHandler>
- (void)userContentController:(WKUserContentController * _Nonnull)userContentController didReceiveScriptMessage:(WKScriptMessage * _Nonnull)message;
@end

@class UIView;

SWIFT_PROTOCOL("_TtP13PianoComposer25PianoShowTemplateDelegate_")
@protocol PianoShowTemplateDelegate
- (UIView * _Nullable)findViewBySelectorWithSelector:(NSString * _Nonnull)selector SWIFT_WARN_UNUSED_RESULT;
@optional
- (void)onCustomEventWithEventData:(id _Nonnull)eventData;
- (void)onCloseWithEventData:(id _Nonnull)eventData;
- (void)onCloseAndRefreshWithEventData:(id _Nonnull)eventData;
- (void)onRegisterWithEventData:(id _Nonnull)eventData;
- (void)onLoginWithEventData:(id _Nonnull)eventData;
- (void)onLogoutWithEventData:(id _Nonnull)eventData;
@end

@class WKWebView;
@class UIActivityIndicatorView;

SWIFT_CLASS("_TtC13PianoComposer36PianoShowTemplatePopupViewController")
@interface PianoShowTemplatePopupViewController : BasePopupViewController
@property (nonatomic, strong) WKWebView * _Null_unspecified webView;
@property (nonatomic, strong) UIActivityIndicatorView * _Null_unspecified activityIndicator;
@property (nonatomic, strong) ShowTemplateEventParams * _Nonnull showTemplateParams;
@property (nonatomic, weak) id <PianoShowTemplateDelegate> _Nullable delegate;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithParams:(ShowTemplateEventParams * _Nonnull)params OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)close;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


@interface PianoShowTemplatePopupViewController (SWIFT_EXTENSION(PianoComposer)) <WKScriptMessageHandler>
- (void)userContentController:(WKUserContentController * _Nonnull)userContentController didReceiveScriptMessage:(WKScriptMessage * _Nonnull)message;
@end

@class WKNavigation;
@class WKNavigationAction;

@interface PianoShowTemplatePopupViewController (SWIFT_EXTENSION(PianoComposer)) <WKNavigationDelegate>
- (void)webView:(WKWebView * _Nonnull)webView didFailNavigation:(WKNavigation * _Null_unspecified)navigation withError:(NSError * _Nonnull)error;
- (void)webView:(WKWebView * _Nonnull)webView decidePolicyForNavigationAction:(WKNavigationAction * _Nonnull)navigationAction decisionHandler:(void (^ _Nonnull)(WKNavigationActionPolicy))decisionHandler;
- (void)webView:(WKWebView * _Nonnull)webView didFinishNavigation:(WKNavigation * _Null_unspecified)navigation;
@end


SWIFT_CLASS("_TtC13PianoComposer20ShowLoginEventParams")
@interface ShowLoginEventParams : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC13PianoComposer23ShowTemplateEventParams")
@interface ShowTemplateEventParams : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC13PianoComposer14SplitTestEntry")
@interface SplitTestEntry : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC13PianoComposer4User")
@interface User : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC13PianoComposer12XpAccessItem")
@interface XpAccessItem : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC13PianoComposer7XpEvent")
@interface XpEvent : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC13PianoComposer23XpEventExecutionContext")
@interface XpEventExecutionContext : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC13PianoComposer19XpEventModuleParams")
@interface XpEventModuleParams : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop
