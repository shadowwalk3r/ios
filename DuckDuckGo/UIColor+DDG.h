//
//  UIColor+DDG.h
//  DuckDuckGo
//
//  Created by Fernando Olivares on 7/11/13.
//
//

#import <UIKit/UIKit.h>

@interface UIColor (DDG)

+ (UIColor *)slideOutMenuTextColor;

/* Visual Refresh */
+ (UIColor *)duckBlack;
+ (UIColor *)duckGray;
+ (UIColor *)duckLightBlue;
+ (UIColor *)duckLightGray;
+ (UIColor *)duckNoContentColor;
+ (UIColor *)duckRed;
+ (UIColor *)duckStoryReadColor;
+ (UIColor *)duckStoryTitleBackground;
+ (UIColor *)duckStoryDropShadowColor;
+ (UIColor *)duckTableSeparator;

+ (UIColor *)duckSearchFieldBackground;
+ (UIColor *)duckSearchBarBackground;
+ (UIColor *)duckSearchFieldForeground;
+ (UIColor *)duckSearchFieldPlaceholderForeground;

+ (UIColor*)duckPopoverBackground;

+ (UIColor*)duckProgressBarForeground;
+ (UIColor*)duckProgressBarBackground;

+ (UIColor*)duckStoriesBackground;

+(UIColor*)duckSettingsLabel;
+(UIColor*)duckSettingsDetailLabel;

+ (UIColor*)duckTabBarBackground;
+ (UIColor*)duckTabBarForeground;
+ (UIColor*)duckTabBarForegroundSelected;

+ (UIColor*)duckSegmentBarBackground;
+ (UIColor*)duckSegmentBarForeground;
+ (UIColor*)duckSegmentBarBackgroundSelected;
+ (UIColor*)duckSegmentBarForegroundSelected;
+ (UIColor*)duckSegmentBarBorder;

+ (UIColor*)duckStoryMenuButtonBackground;

+ (UIColor *)autocompleteDetailColor;
+ (UIColor *)autocompleteHeaderColor;
+ (UIColor *)autocompleteTextColor;
+ (UIColor *)autocompleteTitleColor;

@end
