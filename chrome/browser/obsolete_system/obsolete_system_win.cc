// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/obsolete_system/obsolete_system.h"

#include "base/cpu.h"
#include "base/win/windows_version.h"
#include "build/build_config.h"
#include "chrome/common/chrome_version.h"
#include "chrome/common/url_constants.h"
#include "chrome/grit/chromium_strings.h"
#include "ui/base/l10n/l10n_util.h"

namespace {

// Obsolete-system checks get the system version from kernel32.dll's version, to
// avoid getting an incorrect version reported by App Compatibility mode. This
// prevents obsolete-system warnings from appearing when Chrome is run in
// compatibility mode on modern versions of Windows.
base::win::Version GetRealOSVersion() {
  return base::win::OSInfo::GetInstance()->Kernel32Version();
}

bool IsObsoleteOsVersion() {
  return false;
}

}  // namespace

// static
bool ObsoleteSystem::IsObsoleteNowOrSoon() {
  return IsObsoleteOsVersion();
}

// static
std::u16string ObsoleteSystem::LocalizedObsoleteString() {
  const auto version = GetRealOSVersion();
  if (version == base::win::Version::WIN7)
    return l10n_util::GetStringUTF16(IDS_WIN_7_OBSOLETE);
  if (version == base::win::Version::WIN8)
    return l10n_util::GetStringUTF16(IDS_WIN_8_OBSOLETE);
  if (version == base::win::Version::WIN8_1)
    return l10n_util::GetStringUTF16(IDS_WIN_8_1_OBSOLETE);
  return l10n_util::GetStringUTF16(IDS_WIN_XP_VISTA_OBSOLETE);
}

// static
bool ObsoleteSystem::IsEndOfTheLine() {
  return false;
}

// static
const char* ObsoleteSystem::GetLinkURL() {
  const auto version = GetRealOSVersion();
  if (version < base::win::Version::WIN7)
    return chrome::kWindowsXPVistaDeprecationURL;
  return chrome::kWindows78DeprecationURL;
}
