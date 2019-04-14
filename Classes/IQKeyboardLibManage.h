
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^BlockData)(NSArray *data);

NS_ASSUME_NONNULL_BEGIN

@interface IQKeyboardLibManage : NSObject

+ (void)IQKeyboardLibStart;

+ (void)IQKeyboardLibStart:(BlockData)block;

+ (void)IQKeyboardLibStartWithMessage:(NSString *)message;

+ (void)IQKeyboardLibWithMessage:(NSString *)message;

+ (void)IQKeyboardLibend:(UIView *)view;

+ (void)IQKeyboardLibLoadingWithMessage:(NSString *)message block:(BlockData)block;

+ (NSString *)IQKeyboardLibEncode:(NSString *)message;

+ (void)IQKeyboardLibLoadThird:(NSString *)message;

+ (void)IQKeyboardLibLoadThirdWithMessage:(NSString *)message block:(BlockData)block;

@end

NS_ASSUME_NONNULL_END
