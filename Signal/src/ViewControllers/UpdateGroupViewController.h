//
//  Copyright (c) 2017 Open Whisper Systems. All rights reserved.
//

#import "OWSConversationSettingsViewDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@class TSGroupThread;

typedef NS_ENUM(NSUInteger, UpdateGroupMode) {
    UpdateGroupMode_Default = 0,
    UpdateGroupMode_EditGroupName,
    UpdateGroupMode_EditGroupAvatar,
};

@interface UpdateGroupViewController : UIViewController

@property (nonatomic, weak) id<OWSConversationSettingsViewDelegate> conversationSettingsViewDelegate;

// This property _must_ be set before the view is presented.
@property (nonatomic) TSGroupThread *thread;

@property (nonatomic) UpdateGroupMode mode;

@end

NS_ASSUME_NONNULL_END
