//
//  Printer.h
//  WordPrinter
//
//  Created by Murat Ekrem Kolcalar on 11/5/17.
//  Copyright © 2017 Lighthouse Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Printer;

@protocol PrinterDelegate <NSObject>

-(int)printer:(Printer *)printer numberOfTimesToPrint:(NSString *)word;
- (BOOL) printStar;

@end

@interface Printer : NSObject

@property (nonatomic, weak) id <PrinterDelegate> delegate;

-(void)printWord:(NSString *)word;

@end
