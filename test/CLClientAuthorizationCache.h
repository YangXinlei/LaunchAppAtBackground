//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLIntersiloService.h"

#import "CLClientAuthorizationCacheProtocol.h"

@class NSMutableArray, NSMutableDictionary;

@interface CLClientAuthorizationCache : CLIntersiloService <CLClientAuthorizationCacheProtocol>
{
    _Bool _populated;
    NSMutableDictionary *_clients;
    NSMutableArray *_cachePopulationReplyBlocks;
}

+ (void)becameFatallyBlocked:(id)arg1;
+ (id)getSilo;
@property(nonatomic) _Bool populated; // @synthesize populated=_populated;
@property(retain, nonatomic) NSMutableArray *cachePopulationReplyBlocks; // @synthesize cachePopulationReplyBlocks=_cachePopulationReplyBlocks;
@property(retain, nonatomic) NSMutableDictionary *clients; // @synthesize clients=_clients;
- (void)notifyWhenCacheIsPopulatedWithReply:(CDUnknownBlockType)arg1;
- (void)clearAuthorizationOfClients;
- (void)clearAuthorizationOfClient:(id)arg1;
- (void)setClient:(id)arg1 authorization:(int)arg2 forMask:(unsigned long long)arg3;
- (void)setAllClients:(id)arg1;
- (int)syncgetAuthorizationOfClient:(id)arg1 forServiceMask:(unsigned long long)arg2;
- (void)endService;
- (void)beginService;
- (id)initInSilo:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool valid;

@end

