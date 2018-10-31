//
//  NSBundle+SuBundle.h
//  BootProgramView
//
//  Created by xdy on 2018/10/31.
//

#import <Foundation/Foundation.h>

@interface NSBundle (SuBundle)
+ (instancetype)cz_subBundleWithBundleName:(NSString *)bundleName targetClass:(Class)targetClass;
@end
