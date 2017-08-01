//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

@class NSMutableArray;

@interface ALSNearbyResponse : PBCodable
{
    NSMutableArray *_cdmaCellTowers;
    NSMutableArray *_cdmaEvdoTowers;
    NSMutableArray *_cellTowers;
    NSMutableArray *_lteCellTowers;
    NSMutableArray *_scdmaCellTowers;
    NSMutableArray *_wirelessAPs;
}

@property(retain, nonatomic) NSMutableArray *scdmaCellTowers; // @synthesize scdmaCellTowers=_scdmaCellTowers;
@property(retain, nonatomic) NSMutableArray *lteCellTowers; // @synthesize lteCellTowers=_lteCellTowers;
@property(retain, nonatomic) NSMutableArray *cdmaEvdoTowers; // @synthesize cdmaEvdoTowers=_cdmaEvdoTowers;
@property(retain, nonatomic) NSMutableArray *cdmaCellTowers; // @synthesize cdmaCellTowers=_cdmaCellTowers;
@property(retain, nonatomic) NSMutableArray *wirelessAPs; // @synthesize wirelessAPs=_wirelessAPs;
@property(retain, nonatomic) NSMutableArray *cellTowers; // @synthesize cellTowers=_cellTowers;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)scdmaCellTowerAtIndex:(unsigned long long)arg1;
- (unsigned long long)scdmaCellTowersCount;
- (void)addScdmaCellTower:(id)arg1;
- (void)clearScdmaCellTowers;
- (id)lteCellTowerAtIndex:(unsigned long long)arg1;
- (unsigned long long)lteCellTowersCount;
- (void)addLteCellTower:(id)arg1;
- (void)clearLteCellTowers;
- (id)cdmaEvdoTowerAtIndex:(unsigned long long)arg1;
- (unsigned long long)cdmaEvdoTowersCount;
- (void)addCdmaEvdoTower:(id)arg1;
- (void)clearCdmaEvdoTowers;
- (id)cdmaCellTowerAtIndex:(unsigned long long)arg1;
- (unsigned long long)cdmaCellTowersCount;
- (void)addCdmaCellTower:(id)arg1;
- (void)clearCdmaCellTowers;
- (id)wirelessAPAtIndex:(unsigned long long)arg1;
- (unsigned long long)wirelessAPsCount;
- (void)addWirelessAP:(id)arg1;
- (void)clearWirelessAPs;
- (id)cellTowerAtIndex:(unsigned long long)arg1;
- (unsigned long long)cellTowersCount;
- (void)addCellTower:(id)arg1;
- (void)clearCellTowers;
- (void)dealloc;

@end

