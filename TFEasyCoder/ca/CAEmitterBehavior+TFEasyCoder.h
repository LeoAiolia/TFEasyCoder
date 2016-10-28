//
//  CAEmitterBehavior+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAEmitterBehavior,CAEmitterBehavior *);

@interface CAEmitterBehavior (TFEasyCoder)

TF_EC_MSTATIC_INT(CAEmitterBehavior, CAEmitterBehavior *);
TF_EC_MINSTANCE_INT(CAEmitterBehavior,CAEmitterBehavior *);


TF_EC_CHAIN_PROP_INT(CAEmitterBehavior ,NSString *,name);
TF_EC_CHAIN_PROP_INT(CAEmitterBehavior ,BOOL,enabled);

@end