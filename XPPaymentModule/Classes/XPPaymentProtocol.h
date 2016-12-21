//
//  XPPaymentProtocol.h
//  PaymentModule
//
//  Created by Eddie LukeAtmey on 2016/12/13.
//  Copyright © 2016 SmartOsc. All rights reserved.
//


#import "XPPaymentConstantStrings.h"

NS_ASSUME_NONNULL_BEGIN
typedef void(^XPPaymentCompletionCallback) ( NSDictionary * _Nullable  data,  NSError * _Nullable error);

@protocol XPPaymentProtocol <NSObject>
@required

#pragma mark - Properties
@property (strong, nonatomic, readonly) NSString *paymentName;
@property (strong, nonatomic, readonly) NSString *paymentKey;

#pragma mark - Methods

/**
 *  Setup payment authentication with completion callback.
 *
 *  @param authData The authData dictionary
 *  @param vc The VC to present the setup (optional)
 *  @param callback The comletion callback
 */
+ (void)setupAuth:(NSDictionary *)authData
         fromViewController:(UIViewController *)vc
         callback:(nullable XPPaymentCompletionCallback)callback;

/**
 *  Charge payment with completion callback.
 *
 *  @param chargeData The chargeData dictionary
 *  @param vc The VC to present charge (optional)
 *  @param callback The comletion callback
 */
+ (void)charge:(NSDictionary *)chargeData
      fromViewController:(UIViewController *)vc
                callback:(nullable XPPaymentCompletionCallback)callback;

/**
 *  Refund payment with completion callback.
 *
 *  @param refundData The refundData dictionary
 *  @param vc The VC to present refund (optional)
 *  @param callback The comletion callback
 */
+ (void)refund:(NSDictionary *)refundData
      fromViewController:(UIViewController *)vc
      callback:(nullable XPPaymentCompletionCallback)callback;

@end

NS_ASSUME_NONNULL_END
