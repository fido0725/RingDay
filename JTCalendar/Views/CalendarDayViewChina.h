//
//  CalendarDayViewChina.h
//  Pods
//
//  Created by chenfeng on 16/2/17.
//
//

#import <UIKit/UIKit.h>
#import "JTCalendarDay.h"
#import "NSDate+CalendarConvert.h"
#import "NSDateComponents+PtxLunar.h"

@interface CalendarDayViewChina : UIView<JTCalendarDay>

@property (nonatomic, weak) JTCalendarManager *manager;

@property (nonatomic) NSDate *date;

@property (nonatomic, readonly) UIView *circleView;
@property (nonatomic, readonly) UIView *dotView;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, readonly) UILabel *lunarLabel;

@property (nonatomic) CGFloat circleRatio;
@property (nonatomic) CGFloat dotRatio;

@property (nonatomic) BOOL isFromAnotherMonth;

- (void)commonInit;

@end
