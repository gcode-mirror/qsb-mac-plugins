//
//  TwitterAccount.h
//
//  Copyright (c) 2009 Google Inc. All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are
//  met:
//
//    * Redistributions of source code must retain the above copyright
//  notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above
//  copyright notice, this list of conditions and the following disclaimer
//  in the documentation and/or other materials provided with the
//  distribution.
//    * Neither the name of Google Inc. nor the names of its
//  contributors may be used to endorse or promote products derived from
//  this software without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
//  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
//  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
//  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
//  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
//  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
//  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
//  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
//  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
//  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
//  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//

/*!
  @header
  @discussion
*/

#import <Vermilion/Vermilion.h>
#import <QSBPluginUI/QSBPluginUI.h>

@class TwitterAccountEditController;

/*! A class which manages a Twitter account. */
@interface TwitterAccount : HGSSimpleAccount {
 @private
  // Set by and only useful within authentication.
  BOOL authCompleted_;
  BOOL authSucceeded_;
}

@end

/*
 A controller which manages a window used to edit the passowrd
 for a Twitter account.  Exposed publicly so that Interface
 Builder can see the action.
*/
@interface EditTwitterAccountWindowController : QSBEditSimpleAccountWindowController

/*! Open twitter.com in the user's preferred browser. */
- (IBAction)openTwitterHomePage:(id)sender;

@end

/*
 A controller which manages a view used to specify a Twitter account
 name and password during the setup process.  Exposed publicly so that 
 Interface Builder can see the action.
*/
@interface SetUpTwitterAccountViewController : QSBSetUpSimpleAccountViewController

/*! Open twitter.com in the user's preferred browser. */
- (IBAction)openTwitterHomePage:(id)sender;

@end
