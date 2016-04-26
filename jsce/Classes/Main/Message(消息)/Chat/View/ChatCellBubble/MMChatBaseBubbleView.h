//
//  MMChatBaseBubbleView.h
//  jsce
//
//  Created by mac on 15/10/15.
//  Copyright © 2015年 Yuantu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MMMessageModel.h"
#import "UIResponder+Router.h"
#import "THProgressView.h"
extern NSString *const kRouterEventChatCellBubbleTapEventName;

#define BUBBLE_LEFT_IMAGE_NAME @"chat_receiver_bg" // bubbleView 的背景图片
#define BUBBLE_RIGHT_IMAGE_NAME @"chat_sender_bg"
#define BUBBLE_ARROW_WIDTH 5 // bubbleView中，箭头的宽度
#define BUBBLE_VIEW_PADDING 8 // bubbleView 与 在其中的控件内边距

#define BUBBLE_RIGHT_LEFT_CAP_WIDTH 5 // 文字在右侧时,bubble用于拉伸点的X坐标
#define BUBBLE_RIGHT_TOP_CAP_HEIGHT 35 // 文字在右侧时,bubble用于拉伸点的Y坐标

#define BUBBLE_LEFT_LEFT_CAP_WIDTH 35 // 文字在左侧时,bubble用于拉伸点的X坐标
#define BUBBLE_LEFT_TOP_CAP_HEIGHT 35 // 文字在左侧时,bubble用于拉伸点的Y坐标

#define BUBBLE_PROGRESSVIEW_HEIGHT 10 // progressView 高度

#define KMESSAGEKEY @"message"



@interface MMChatBaseBubbleView : UIView

{
    THProgressView *_progressView;
    MMMessageModel *_model;
}

@property (nonatomic, strong) MMMessageModel *model;

@property (nonatomic, strong) UIImageView *backImageView;
@property (nonatomic, strong) THProgressView *progressView;

- (void)bubbleViewPressed:(id)sender;

+ (CGFloat)heightForBubbleWithObject:(MMMessageModel *)object;

@end