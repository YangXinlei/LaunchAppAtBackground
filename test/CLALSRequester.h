//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequester.h"

@interface CLALSRequester : PBRequester
{
    int tag;
    int type;
    double timestamp;
    _Bool processingCellTowers;
    _Bool processingWirelessAPs;
    _Bool finished;
}

@property _Bool finished; // @synthesize finished;
@property _Bool processingWirelessAPs; // @synthesize processingWirelessAPs;
@property _Bool processingCellTowers; // @synthesize processingCellTowers;
@property double timestamp; // @synthesize timestamp;
@property int type; // @synthesize type;
@property int tag; // @synthesize tag;

@end

