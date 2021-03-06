//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString;

@interface CLIndoorSettings : NSObject
{
    _Bool _pipelinedEnabled;
    _Bool _runnableWhileLocked;
    NSSet *_disabledVenues;
    duration_b9a348d0 _debounceInterval;
    duration_673274cf _errorBackoffDuration;
    NSString *_indoorAvailabilityTilesServerUrl;
    NSSet *_forcedVenues;
    optional_b4afca65 _fakeLastFix;
}

+ (id)settingToSet:(id)arg1;
@property(nonatomic) optional_b4afca65 fakeLastFix; // @synthesize fakeLastFix=_fakeLastFix;
@property(copy, nonatomic) NSSet *forcedVenues; // @synthesize forcedVenues=_forcedVenues;
@property(copy, nonatomic) NSString *indoorAvailabilityTilesServerUrl; // @synthesize indoorAvailabilityTilesServerUrl=_indoorAvailabilityTilesServerUrl;
@property(nonatomic) duration_673274cf errorBackoffDuration; // @synthesize errorBackoffDuration=_errorBackoffDuration;
@property(nonatomic) _Bool runnableWhileLocked; // @synthesize runnableWhileLocked=_runnableWhileLocked;
@property(nonatomic) duration_b9a348d0 debounceInterval; // @synthesize debounceInterval=_debounceInterval;
@property(copy, nonatomic) NSSet *disabledVenues; // @synthesize disabledVenues=_disabledVenues;
@property(nonatomic) _Bool pipelinedEnabled; // @synthesize pipelinedEnabled=_pipelinedEnabled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSettings:(id)arg1;
- (id)init;

@end

