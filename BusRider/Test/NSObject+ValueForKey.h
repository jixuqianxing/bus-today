//
//  NSObject+ValueForKey.h
//  BusRider
//
//  Created by John Wong on 01/10/2017.
//  Copyright © 2017 John Wong. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSObject (ValueForKey)

- (nullable id)safeValueForKey:(NSString *_Nullable)key;

@end
