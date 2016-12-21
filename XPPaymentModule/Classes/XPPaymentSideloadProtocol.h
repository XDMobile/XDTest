//
//  XPPaymentSideLoadProtocol.h
//  PaymentModule
//
//  Created by Eddie LukeAtmey on 2016/12/20.
//  Copyright © 2016 SmartOsc. All rights reserved.
//

@protocol XPPaymentSideloadProtocol <NSObject>

+ (void)sideLoadCompleteWithURL:(NSURL *)url;

@end
