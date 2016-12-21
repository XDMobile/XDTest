//
//  PaymentModule.h
//  PaymentModule
//
//  Created by tutitutituti on 11/21/16.
//  Copyright © 2016 moboco. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for PaymentModule.
FOUNDATION_EXPORT double PaymentModuleVersionNumber;

//! Project version string for PaymentModule.
FOUNDATION_EXPORT const unsigned char PaymentModuleVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <PaymentModule/PublicHeader.h>


#import <PaymentModule/XPPaymentController.h>
#import <PaymentModule/CreditCardViewController.h>

NSString * const FILE_NAME = @"paymentInfo";

/* Transaction key use in dictionary */
NSString * const XPAY_TRANSACTION_KEY = @"transaction_key";

/* API key use in dictionary */
NSString * const XPAY_API_KEY = @"api_key";

/* Merchant Id use in dictionary */
NSString * const XPAY_MERCHANT_ID = @"merchant_id";

/* Environment use in dictionary. Its value should be BOOL NSNumber (0 = Test, 1 = Live). */
NSString * const XPAY_ENVIRONMENT = @"xpay_environment";
