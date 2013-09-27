// Copyright 2008-2013 The Omni Group. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import "ODAVTestCase.h"

#import <OmniDAV/ODAVConnection.h>

@interface ODAVConcreteTestCase : ODAVTestCase
@property(nonatomic,readonly) ODAVConnection *connection;
@property(nonatomic,readonly) NSURL *remoteBaseURL;
@end