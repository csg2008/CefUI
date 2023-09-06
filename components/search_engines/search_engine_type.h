// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SEARCH_ENGINES_SEARCH_ENGINE_TYPE_H_
#define COMPONENTS_SEARCH_ENGINES_SEARCH_ENGINE_TYPE_H_

// Enum to record the user's default search engine choice in UMA.
// These values are persisted to logs. Entries should not be renumbered and
// numeric values should never be reused.
//
// A Java counterpart will be generated for this enum.
// GENERATED_JAVA_ENUM_PACKAGE: org.chromium.chrome.browser.search_engines
enum SearchEngineType {
  // Prepopulated engines.
  SEARCH_ENGINE_UNKNOWN = -1,
  SEARCH_ENGINE_OTHER = 0,  // At the top in case of future list changes.
  SEARCH_ENGINE_AOL = 1,
  SEARCH_ENGINE_ASK = 2,
  SEARCH_ENGINE_ATLAS = 3,
  SEARCH_ENGINE_AVG = 4,
  SEARCH_ENGINE_BAIDU = 5,
  SEARCH_ENGINE_BABYLON = 6,
  SEARCH_ENGINE_BING = 7,
  SEARCH_ENGINE_CONDUIT = 8,
  SEARCH_ENGINE_DAUM = 9,
  SEARCH_ENGINE_DELFI = 10,
  SEARCH_ENGINE_DELTA = 11,
  SEARCH_ENGINE_FUNMOODS = 12,
  SEARCH_ENGINE_GOO = 13,
  SEARCH_ENGINE_GOOGLE = 14,
  SEARCH_ENGINE_IMINENT = 15,
  SEARCH_ENGINE_IMESH = 16,
  SEARCH_ENGINE_IN = 17,
  SEARCH_ENGINE_INCREDIBAR = 18,
  SEARCH_ENGINE_KVASIR = 19,
  SEARCH_ENGINE_LIBERO = 20,
  SEARCH_ENGINE_MAILRU = 21,
  SEARCH_ENGINE_NAJDI = 22,
  SEARCH_ENGINE_NATE = 23,
  SEARCH_ENGINE_NAVER = 24,
  SEARCH_ENGINE_NETI = 25,
  SEARCH_ENGINE_NIGMA = 26,
  SEARCH_ENGINE_OK = 27,
  SEARCH_ENGINE_ONET = 28,
  SEARCH_ENGINE_RAMBLER = 29,
  SEARCH_ENGINE_SAPO = 30,
  SEARCH_ENGINE_SEARCHNU = 31,
  SEARCH_ENGINE_SEARCH_RESULTS = 32,
  SEARCH_ENGINE_SEZNAM = 33,
  SEARCH_ENGINE_SNAPDO = 34,
  SEARCH_ENGINE_SOFTONIC = 35,
  SEARCH_ENGINE_SOGOU = 36,
  SEARCH_ENGINE_SOSO = 37,
  SEARCH_ENGINE_SWEETPACKS = 38,
  SEARCH_ENGINE_TERRA = 39,
  SEARCH_ENGINE_TUT = 40,
  SEARCH_ENGINE_VINDEN = 41,
  SEARCH_ENGINE_VIRGILIO = 42,
  SEARCH_ENGINE_WALLA = 43,
  SEARCH_ENGINE_WP = 44,
  SEARCH_ENGINE_YAHOO = 45,
  SEARCH_ENGINE_YANDEX = 46,
  SEARCH_ENGINE_ZOZNAM = 47,
  SEARCH_ENGINE_360 = 48,
  SEARCH_ENGINE_COCCOC = 49,
  SEARCH_ENGINE_DUCKDUCKGO = 50,
  SEARCH_ENGINE_PARSIJOO = 51,
  SEARCH_ENGINE_QWANT = 52,
  SEARCH_ENGINE_GIVERO = 53,
  SEARCH_ENGINE_GMX = 54,
  SEARCH_ENGINE_INFO_COM = 55,
  SEARCH_ENGINE_METAGER = 56,
  SEARCH_ENGINE_OCEANHERO = 57,
  SEARCH_ENGINE_PRIVACYWALL = 58,
  SEARCH_ENGINE_ECOSIA = 59,
  SEARCH_ENGINE_PETALSEARCH = 60,
  SEARCH_ENGINE_STARTER_PACK_BOOKMARKS = 61,
  SEARCH_ENGINE_STARTER_PACK_HISTORY = 62,
  SEARCH_ENGINE_STARTER_PACK_TABS = 63,
  SEARCH_ENGINE_BRAVE = 64,

  SEARCH_ENGINE_MAX  // Bounding value needed for UMA histogram macro.
};

// Enum to record the type of search engine a user used in keyword mode. This
// should be kept aligned with the `OmniboxBuiltinEngineType` enum in enums.xml.
// Entries should not be renumbered and numeric values should never be reused.
enum BuiltinEngineType {
  KEYWORD_MODE_NON_BUILT_IN = 0,
  KEYWORD_MODE_PREPOPULATED_ENGINE = 1,
  KEYWORD_MODE_STARTER_PACK_BOOKMARKS = 2,
  KEYWORD_MODE_STARTER_PACK_HISTORY = 3,
  KEYWORD_MODE_STARTER_PACK_TABS = 4,

  KEYWORD_MODE_ENGINE_TYPE_MAX  // Bounding value needed for UMA histogram
                                // macro.
};

#endif  // COMPONENTS_SEARCH_ENGINES_SEARCH_ENGINE_TYPE_H_
