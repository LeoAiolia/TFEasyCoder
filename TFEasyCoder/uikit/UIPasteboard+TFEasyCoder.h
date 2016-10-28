//
//  UIPasteboard+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPasteboard,UIPasteboard *);

@interface UIPasteboard (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPasteboard, UIPasteboard *);
TF_EC_MINSTANCE_INT(UIPasteboard,UIPasteboard *);


TF_EC_CHAIN_PROP_INT(UIPasteboard ,NSString *,string);
TF_EC_CHAIN_PROP_INT(UIPasteboard ,NSArray *,strings);
TF_EC_CHAIN_PROP_INT(UIPasteboard ,NSArray *,URLs);
TF_EC_CHAIN_PROP_INT(UIPasteboard ,UIImage *,image);
TF_EC_CHAIN_PROP_INT(UIPasteboard ,NSArray *,images);
TF_EC_CHAIN_PROP_INT(UIPasteboard ,UIColor *,color);
TF_EC_CHAIN_PROP_INT(UIPasteboard ,NSArray *,colors);
TF_EC_CHAIN_PROP_INT(UIPasteboard ,BOOL,persistent);
TF_EC_CHAIN_PROP_INT(UIPasteboard ,NSArray *,items);

@end