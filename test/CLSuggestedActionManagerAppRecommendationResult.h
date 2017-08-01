//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLTilesManagerServerAppRecommendationResult, LSApplicationProxy;

@interface CLSuggestedActionManagerAppRecommendationResult : NSObject
{
    CLTilesManagerServerAppRecommendationResult *_result;
    double _score;
    double _distanceToCurrentLocation;
    LSApplicationProxy *_appProxy;
}

@property(retain, nonatomic) LSApplicationProxy *appProxy; // @synthesize appProxy=_appProxy;
@property(nonatomic) double distanceToCurrentLocation; // @synthesize distanceToCurrentLocation=_distanceToCurrentLocation;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) CLTilesManagerServerAppRecommendationResult *result; // @synthesize result=_result;
- (void)dealloc;
- (id)initWithTilesManagerResult:(id)arg1 score:(double)arg2 distanceToCurrentLocation:(double)arg3 andAppProxy:(id)arg4;

@end

