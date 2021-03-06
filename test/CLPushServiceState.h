//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSConnectionDelegate.h"

@class APSConnection, NSString;

@interface CLPushServiceState : NSObject <APSConnectionDelegate>
{
    APSConnection *apsConnection;
    CDUnknownBlockType connectionStatusBlock;
}

@property(copy, nonatomic) CDUnknownBlockType connectionStatusBlock; // @synthesize connectionStatusBlock;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection;
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (_Bool)isConnected;
- (void)dealloc;
- (id)initWithStatusBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

