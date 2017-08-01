//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLCustomAuthPBRequester.h"

@class CLURLConnectionSession;

@interface CLPCPBRequester : CLCustomAuthPBRequester
{
    CLURLConnectionSession *fConnectionSession;
}

@property(retain, nonatomic) CLURLConnectionSession *fConnectionSession; // @synthesize fConnectionSession;
- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest *)arg1 delegate:(id)arg2;
- (struct _CFURLRequest *)newCFMutableURLRequestWithURL:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2 usingConnectionSession:(id)arg3;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2 usingConnectionSession:(id)arg3 validatingAgainstHostname:(id)arg4;

@end

