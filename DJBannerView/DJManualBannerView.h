//
//  DJManualBannerView.h
//  DJBannerViewSample
//
//  Created by dengjiang on 16/6/3.
//  Copyright © 2016年 DJ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DJBannerViewDefine.h"


@interface DJManualBannerView : UIView

@property (nullable, nonatomic, weak) id <DJBannerViewDelegate> delegate;
@property (nullable, nonatomic, weak) id <DJBannerViewDataSource> dataSource;

// scrollView滚动的方向
@property (nonatomic, assign) BannerViewScrollDirection scrollDirection;

@property (nullable, nonatomic, strong) UIImage *placeholderImage;

// page宽
@property (nonatomic, assign) CGFloat pageWidth;
// page之间间隔
@property (nonatomic, assign) CGFloat padding;
@property (nonatomic, assign) BOOL isLeftPadding;


- (nonnull instancetype)initWithFrame:(CGRect)frame scrollDirection:(BannerViewScrollDirection)direction images:(nullable NSArray *)images padding:(CGFloat)padding pageWidth:(CGFloat)pageWidth dataSource:(nullable id <DJBannerViewDataSource>)adataSource;

- (void)reloadBannerWithData:(nullable NSArray *)images;

- (void)setCorner:(NSInteger)cornerRadius;

- (void)setPageControlStyle:(BannerViewPageStyle)pageStyle;

- (void)showClose:(BOOL)show;

@end
