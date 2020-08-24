/* This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 * 
 * 
 * 
 * This is the directory for the emojis used in the Mobile30 keymap.  
 *
 * But this directory can be easily used by other keyboards so long as
 * 
 * UNICODEMAP_ENABLE = yes 
 * 
 * is enabled in your rules.mk.
*/

// This list is not 100% complete, nor is it really necessary. These are what I see as the best/most-useful unicode emoji characters.
// Emojis are organized in a personal arrangement.

enum unicode_names {
    XSSML,
    SMILE,
    LGSML,
    XLSML,
    SWSML,
    TLTSM,
    CRYSM,
    UPSDN,
    WINKD,
    CHEKY,
    ANGEL,
    LOVES,
    LVEYE,
    KISSY,
    TOUNG,
    CRAZY,
    GREED,
    WOWZR,
    HMMMM,
    ZIPPD,
    YAWWN,
    BROWE,
    FLATS,
    NOMTH,
    SDEYE,
    WTEVR,
    EYROL,
    HUMBL,
    DISSP,
    DROOL,
    SLEEP,
    MASKD,
    HDBND,
    GRNFC,
    HURLD,
    HANKR,
    SPICY,
    CHILY,
    WEIRD,
    DIZZY,
    MNDBL,
    PARTY,
    SHADE,
    EYEGL,
    FROWN,
    OOOOO,
    LGEYE,
    BLUSH,
    ANIME,
    WHAAA,
    EMBAR,
    TEARD,
    CRIES,
    SHOCK,
    GROSS,
    WINCE,
    FEELS,
    SADNS,
    XLSAD,
    FUMED,
    ANGER,
    VULGR,
    BADIE,
    DEVIL,
    SKULL,
    POOOP,
    GHOST,
    CLOWN,
    ALIEN,
    INVAD,
    ROBOT,
    KISSD,
    LVLTR,
    CUPID,
    DBLLV,
    BRKLV,
    LV_RD,
    LV_OR,
    LV_YL,
    LV_GR,
    LV_BL,
    LV_PR,
    LV_BR,
    LV_BK,
    LV_WT,
    HUNDO,
    BANGR,
    EXPLD,
    MOIST,
    GUSTD,
    BOMBA,
    CHATS,
    THINK,
    ZZZZZ,
    WAVED,
    FIVED,
    SPOCK,
    GOTEM,
    PINCH,
    PEACE,
    GDLCK,
    LOVSM,
    HORNS,
    RDICL,
    FLBRD,
    THMUP,
    THMDN,
    PUNCH,
    LFIST,
    RFIST,
    PNTLT,
    PNTRT,
    PNTUP,
    PNTDN,
    CLAPD,
    OPHND,
    HDSHK,
    PRAYS,
    SCRIB,
    NAILS,
    SELFI,
    STEPS,
    MUSLE,
    LEGGY,
    FOOTS,
    EAR01,
    EAR02,
    NSTRL,
    BRAIN,
    TOOTH,
    BONEZ,
    EYEYE,
    EYEBL,
    TONGE,
    XARMS,
    HELLO,
    FCPLM,
    IDKNW,
    DANCE,
    TGTHR,
    MR__C,
    MRS_C,
    SUPER,
    WIZRD,
    MONKY,
    DOGGO,
    WOLFY,
    FOXXY,
    RACCN,
    FELNE,
    TKING,
    TIGER,
    HORSE,
    ZEBRA,
    UICRN,
    STEER,
    PIGGY,
    PUMBA,
    MOUSE,
    HAMPS,
    BUNNY,
    BBEAR,
    KOALA,
    PANDA,
    CHIKN,
    FROGR,
    DRAGN,
    GIRFE,
    MLKCW,
    SHEEP,
    BILLY,
    CAMEL,
    LLAMA,
    ELPHT,
    RHINO,
    HIPPO,
    HDGHG,
    BATTY,
    SLOTH,
    SKUNK,
    KANGA,
    SNAIL,
    ROSTR,
    TURKY,
    CHICK,
    BIRDY,
    PINGU,
    WDOVE,
    EAGLE,
    DUCKY,
    SWAAN,
    HOOTS,
    FLMGO,
    PECOK,
    PAROT,
    GATOR,
    TRTLE,
    LIZRD,
    SNAKE,
    SAURO,
    TYREX,
    WHALE,
    DOLFN,
    FISH1,
    FISH2,
    FISH3,
    SHARK,
    OCTOP,
    SHELL,
    BTFLY,
    CTPLR,
    SGANT,
    BMBEE,
    LDBUG,
    CRIKT,
    SPIDR,
    SCORP,
    MCROB,
    BQUTE,
    FLOWR,
    ROSEY,
    SUNFL,
    DAISY,
    TULIP,
    CNIFR,
    PLMTR,
    CACTI,
    WHEAT,
    GRASS,
    CLOVR,
    MAPLE,
    AUTUM,
    WNDLF,
    GRAPE,
    WTRML,
    ORANG,
    LEMON,
    BANAN,
    PNAPL,
    APPLE,
    GRANY,
    PEARS,
    PEACH,
    CHERY,
    STRWB,
    KIWII,
    TOMTO,
    COCNT,
    AVADO,
    EGGPL,
    POTAO,
    CARRT,
    CORNY,
    PEPPR,
    CUCMB,
    BROCC,
    GARLC,
    ONION,
    MUSHM,
    PENUT,
    BREAD,
    PCAKE,
    WAFFL,
    CHEES,
    TBONE,
    BACON,
    HAMBR,
    FRFRY,
    PIZZA,
    HTDOG,
    SDWCH,
    TACOS,
    BRRTO,
    WHEGG,
    BSOUP,
    SALAD,
    POPCN,
    BUTTR,
    SALTY,
    RICEB,
    SUSHI,
    SHRMP,
    ICEAM,
    COOKI,
    BCAKE,
    CHOCO,
    LOLLI,
    BOTTL,
    LECHE,
    COFFE,
    JAPSK,
    CHMPN,
    RWINE,
    MARTI,
    CHEER,
    CLASY,
    JUBOX,
    KNIFE,
    MEDIC,
    FRTRK,
    POLIC,
    RDCAR,
    WHLCH,
    SCOOT,
    SKBRD,
    ALERT,
    RSTOP,
    ROCKT,
    TPBEL,
    HRGLS,
    CLOCK,
    HLFMN,
    SUNNY,
    STARS,
    RNBOW,
    LBOLT,
    FLAME,
    WATER,
    CNFTI,
    MONEY,
    PINIT,
    TOILT,
    SUDSY,
    WARNG,
    INBNG,
    BBBBB,
    PRIDE
};


// Use X(XSML), X(LOVES) etc... In Your Keymap to call these characters.

const uint32_t PROGMEM unicode_map[] = {
// Smiles
    [XSSML] = 0x1F642,  // 🙂
    [SMILE] = 0x1F604,  // 😄
    [LGSML] = 0x1F601,  // 😁
    [XLSML] = 0x1F606,  // 😆
    [SWSML] = 0x1F605,  // 😅
    [TLTSM] = 0x1F923,  // 🤣
    [CRYSM] = 0x1F602,  // 😂
    [UPSDN] = 0x1F643,  // 🙃
    [WINKD] = 0x1F609,  // 😉
    [CHEKY] = 0x1F60A,  // 😊
    [ANGEL] = 0x1F607,  // 😇

// Feels
    [LOVES] = 0x1F970,  // 🥰
    [LVEYE] = 0x1F60D,  // 😍
    [KISSY] = 0x1F618,  // 😘
    [TOUNG] = 0x1F61B,  // 😛
    [CRAZY] = 0x1F92A,  // 🤪
    [GREED] = 0x1F911,  // 🤑

// Face Actions
    [WOWZR] = 0x1F92B,  // 🤫
    [HMMMM] = 0x1F914,  // 🤔
    [ZIPPD] = 0x1F910,  // 🤐
    [YAWWN] = 0x1F971,  // 🥱

// Neutral Skeptical
    [BROWE] = 0x1F928,  // 🤨
    [FLATS] = 0x1F610,  // 😐
    [NOMTH] = 0x1F636,  // 😶
    [SDEYE] = 0x1F60F,  // 😏
    [WTEVR] = 0x1F612,  // 😒
    [EYROL] = 0x1F644,  // 🙄

// Sleepys
    [HUMBL] = 0x1F60C,  // 😌
    [DISSP] = 0x1F614,  // 😔
    [DROOL] = 0x1F924,  // 🤤
    [SLEEP] = 0x1F634,  // 😴

// Sickly
    [MASKD] = 0x1F637,  // 😷
    [HDBND] = 0x1F915,  // 🤕
    [GRNFC] = 0x1F922,  // 🤢
    [HURLD] = 0x1F92E,  // 🤮
    [HANKR] = 0x1F927,  // 🤧
    [SPICY] = 0x1F975,  // 🥵
    [CHILY] = 0x1F976,  // 🥶

// Oh Bois
    [WEIRD] = 0x1F974,  // 🥴
    [DIZZY] = 0x1F635,  // 😵
    [MNDBL] = 0x1F92F,  // 🤯
    [PARTY] = 0x1F973,  // 🥳

// Glasses
    [SHADE] = 0x1F60E,  // 😎
    [EYEGL] = 0x1F9D0,  // 🧐

// Concerned
    [FROWN] = 0x1F615,  // 😕
    [OOOOO] = 0x1F62E,  // 😯
    [LGEYE] = 0x1F632,  // 😲
    [BLUSH] = 0x1F633,  // 😳
    [ANIME] = 0x1F97A,  // 🥺
    [WHAAA] = 0x1F626,  // 😦
    [EMBAR] = 0x1F630,  // 😰
    [TEARD] = 0x1F622,  // 😢
    [CRIES] = 0x1F62D,  // 😭
    [SHOCK] = 0x1F631,  // 😱
    [GROSS] = 0x1F616,  // 😖
    [WINCE] = 0x1F623,  // 😣
    [FEELS] = 0x1F613,  // 😓
    [SADNS] = 0x1F629,  // 😩
    [XLSAD] = 0x1F62B,  // 😫

// Negative
    [FUMED] = 0x1F624,  // 😤
    [ANGER] = 0x1F621,  // 😡
    [VULGR] = 0x1F92C,  // 🤬
    [BADIE] = 0x1F608,  // 😈
    [DEVIL] = 0x1F47F,  // 👿
    [SKULL] = 0x1F480,  // 💀

// Costume
    [POOOP] = 0x1F4A9,  // 💩
    [GHOST] = 0x1F47B,  // 👻
    [CLOWN] = 0x1F921,  // 🤡
    [ALIEN] = 0x1F47D,  // 👽
    [INVAD] = 0x1F47E,  // 👾
    [ROBOT] = 0x1F916,  // 🤖

// LOVE
    [KISSD] = 0x1F48B,  // 💋
    [LVLTR] = 0x1F48C,  // 💌
    [CUPID] = 0x1F498,  // 💘
    [DBLLV] = 0x1F495,  // 💕
    [BRKLV] = 0x1F494,  // 💔

// Hearts
    [LV_RD] = 0x2764,  // ❤  (Red)
    [LV_OR] = 0x1F9E1,  // 🧡 (Orange)
    [LV_YL] = 0x1F49B,  // 💛 (Yellow)
    [LV_GR] = 0x1F49A,  // 💚 (Green)
    [LV_BL] = 0x1F499,  // 💙 (Blue)
    [LV_PR] = 0x1F49C,  // 💜 (Purple)
    [LV_BR] = 0x1F90E,  // 🤎 (Brown)
    [LV_BK] = 0x1F5A4 	,  // 🖤 (Black)
    [LV_WT] = 0x1F90D,  // 🤍 (White)

// Expresive Action
    [HUNDO] = 0x1F4AF,  // 💯
    [BANGR] = 0x1F4A2,  // 💢
    [EXPLD] = 0x1F4A5,  // 💥
    [MOIST] = 0x1F4A6,  // 💦
    [GUSTD] = 0x1F4A8,  // 💨
    [BOMBA] = 0x1F4A3,  // 💣
    [CHATS] = 0x1F4AC,  // 💬
    [THINK] = 0x1F4AD,  // 💭
    [ZZZZZ] = 0x1F4A4,  // 💤

// Hands
    [WAVED] = 0x1F44B,  // 👋
    [FIVED] = 0x1F590,  // 🖐
    [SPOCK] = 0x1F596,  // 🖖
    [GOTEM] = 0x1F44C,  // 👌
    [PINCH] = 0x1F90F,  // 🤏
    [PEACE] = 0x270C,   // ✌
    [GDLCK] = 0x1F91E,  // 🤞
    [LOVSM] = 0x1F91F,  // 🤟
    [HORNS] = 0x1F918,  // 🤘
    [RDICL] = 0x1F919,  // 🤙
    [FLBRD] = 0x1F595,  // 🖕
    [THMUP] = 0x1F44D,  // 👍
    [THMDN] = 0x1F44E,  // 👎

// Fists
    [PUNCH] = 0x1F44A,  // 👊
    [LFIST] = 0x1F91C,  // 🤛
    [RFIST] = 0x1F91C,  // 🤜

// Hands Pointing
    [PNTLT] = 0x00000,  // 👈
    [PNTRT] = 0x00000,  // 👉
    [PNTUP] = 0x00000,  // 👆
    [PNTDN] = 0x00000,  // 👇

// Double Hands
    [CLAPD] = 0x1F44F,  // 👏
    [OPHND] = 0x1F932,  // 🤲
    [HDSHK] = 0x1F91D,  // 🤝
    [PRAYS] = 0x1F64F,  // 🙏

// Hand Prop
    [SCRIB] = 0x270D,  // ✍
    [NAILS] = 0x1F485,  // 💅
    [SELFI] = 0x1F933,  // 🤳

// Body Parts
    [STEPS] = 0x1F463,  // 👣
    [MUSLE] = 0x00000,  // 💪
    [LEGGY] = 0x00000,  // 🦵
    [FOOTS] = 0x00000,  // 🦶
    [EAR01] = 0x00000,  // 👂
    [EAR02] = 0x00000,  // 🦻
    [NSTRL] = 0x00000,  // 👃
    [BRAIN] = 0x00000,  // 🧠
    [TOOTH] = 0x00000,  // 🦷
    [BONEZ] = 0x00000,  // 🦴
    [EYEYE] = 0x00000,  // 👀
    [EYEBL] = 0x00000,  // 👁 (Single Eye)
    [TONGE] = 0x00000,  // 👅

// People
    [XARMS] = 0x1F645,  // 🙅
    [HELLO] = 0x1F64B,  // 🙋
    [FCPLM] = 0x1F926,  // 🤦
    [IDKNW] = 0x1F937,  // 🤷
    [DANCE] = 0x1F483,  // 💃
    [TGTHR] = 0x1F9D1,  // 🧑‍🤝‍🧑

// Personas
    [MR__C] = 0x1F385,  // 🎅
    [MRS_C] = 0x1F936,  // 🤶
    [SUPER] = 0x1F9B8,  // 🦸
    [WIZRD] = 0x1F9D9,  // 🧙

// Animals - Faces
    [MONKY] = 0x1F435,  // 🐵
    [DOGGO] = 0x1F436,  // 🐶
    [WOLFY] = 0x1F43A,  // 🐺
    [FOXXY] = 0x1F98A,  // 🦊
    [RACCN] = 0x1F99D,  // 🦝
    [FELNE] = 0x1F431,  // 🐱
    [TKING] = 0x1F981,  // 🦁
    [TIGER] = 0x1F42F,  // 🐯
    [HORSE] = 0x1F434,  // 🐴
    [ZEBRA] = 0x1F993,  // 🦓
    [UICRN] = 0x1F984,  // 🦄
    [STEER] = 0x1F42E,  // 🐮
    [PIGGY] = 0x1F437,  // 🐷
    [PUMBA] = 0x1F417,  // 🐗
    [MOUSE] = 0x1F42D,  // 🐭
    [HAMPS] = 0x1F439,  // 🐹
    [BUNNY] = 0x1F430,  // 🐰
    [BBEAR] = 0x1F43B,  // 🐻
    [KOALA] = 0x1F428,  // 🐨
    [PANDA] = 0x1F43C,  // 🐼
    [CHIKN] = 0x1F414,  // 🐔
    [FROGR] = 0x1F438,  // 🐸
    [DRAGN] = 0x1F432,  // 🐲
    [GIRFE] = 0x1F992,  // 🦒

// Animals - Notable Mammals
    [MLKCW] = 0x1F404,  // 🐄
    [SHEEP] = 0x1F411,  // 🐑
    [BILLY] = 0x1F410,  // 🐐
    [CAMEL] = 0x1F42B,  // 🐫
    [LLAMA] = 0x1F999,  // 🦙
    [ELPHT] = 0x1F418,  // 🐘
    [RHINO] = 0x1F98F,  // 🦏
    [HIPPO] = 0x1F99B,  // 🦛
    [HDGHG] = 0x1F994,  // 🦔
    [BATTY] = 0x1F987,  // 🦇
    [SLOTH] = 0x1F9A5,  // 🦥
    [SKUNK] = 0x1F9A8,  // 🦨
    [KANGA] = 0x1F998,  // 🦘
    [SNAIL] = 0x1F40C,  // 🐌

// Animals - Birds
    [ROSTR] = 0x1F413,  // 🐓
    [TURKY] = 0x1F983,  // 🦃
    [CHICK] = 0x1F424,  // 🐤
    [BIRDY] = 0x1F426,  // 🐦
    [PINGU] = 0x1F427,  // 🐧
    [WDOVE] = 0x1F54A,  // 🕊 (dove)
    [EAGLE] = 0x1F985,  // 🦅
    [DUCKY] = 0x1F986,  // 🦆
    [SWAAN] = 0x1F9A2,  // 🦢
    [HOOTS] = 0x1F989,  // 🦉
    [FLMGO] = 0x1F9A9,  // 🦩
    [PECOK] = 0x1F99A,  // 🦚
    [PAROT] = 0x1F99C,  // 🦜

// Animals - Reptile/Amphibian
    [GATOR] = 0x1F40A,  // 🐊
    [TRTLE] = 0x1F422,  // 🐢
    [LIZRD] = 0x1F98E,  // 🦎
    [SNAKE] = 0x1F40D,  // 🐍
    [SAURO] = 0x1F995,  // 🦕
    [TYREX] = 0x1F996,  // 🦖

// Animals - Waters
    [WHALE] = 0x1F433,  // 🐳
    [DOLFN] = 0x1F42C,  // 🐬
    [FISH1] = 0x1F41F,  // 🐟
    [FISH2] = 0x1F420,  // 🐠
    [FISH3] = 0x1F421,  // 🐡
    [SHARK] = 0x1F988,  // 🦈
    [OCTOP] = 0x1F419,  // 🐙
    [SHELL] = 0x1F41A,  // 🐚

// Animals - Bugs/Other
    [BTFLY] = 0x1F98B,  // 🦋
    [CTPLR] = 0x1F41B,  // 🐛
    [SGANT] = 0x1F41C,  // 🐜
    [BMBEE] = 0x1F41D,  // 🐝
    [LDBUG] = 0x1F41E,  // 🐞
    [CRIKT] = 0x1F997,  // 🦗
    [SPIDR] = 0x1F577,  // 🕷
    [SCORP] = 0x1F982,  // 🦂
    [MCROB] = 0x1F9A0,  // 🦠

// Plants
    [BQUTE] = 0x1F490,  // 💐
    [FLOWR] = 0x1F33A,  // 🌺
    [ROSEY] = 0x1F339,  // 🌹
    [SUNFL] = 0x1F33B,  // 🌻
    [DAISY] = 0x1F33C,  // 🌼
    [TULIP] = 0x1F337,  // 🌷
    [CNIFR] = 0x1F332,  // 🌲
    [PLMTR] = 0x1F334,  // 🌴
    [CACTI] = 0x1F335,  // 🌵
    [WHEAT] = 0x1F33E,  // 🌾
    [GRASS] = 0x1F33F,  // 🌿
    [CLOVR] = 0x1F340,  // 🍀
    [MAPLE] = 0x1F341,  // 🍁
    [AUTUM] = 0x1F342,  // 🍂
    [WNDLF] = 0x1F343,  // 🍃

// Fruit
    [GRAPE] = 0x1F347,  // 🍇
    [WTRML] = 0x1F349,  // 🍉
    [ORANG] = 0x1F34A,  // 🍊
    [LEMON] = 0x1F34B,  // 🍋
    [BANAN] = 0x1F34C,  // 🍌
    [PNAPL] = 0x1F34D,  // 🍍
    [APPLE] = 0x1F34E,  // 🍎
    [GRANY] = 0x1F34F,  // 🍏
    [PEARS] = 0x1F350,  // 🍐
    [PEACH] = 0x1F351,  // 🍑
    [CHERY] = 0x1F352,  // 🍒
    [STRWB] = 0x1F353,  // 🍓
    [KIWII] = 0x1F95D,  // 🥝
    [TOMTO] = 0x1F345,  // 🍅
    [COCNT] = 0x1F965,  // 🥥
    [AVADO] = 0x1F951,  // 🥑

// Veggies
    [EGGPL] = 0x1F346,  // 🍆
    [POTAO] = 0x1F954,  // 🥔
    [CARRT] = 0x1F955,  // 🥕
    [CORNY] = 0x1F33D,  // 🌽
    [PEPPR] = 0x1F336,  // 🌶
    [CUCMB] = 0x1F952,  // 🥒
    [BROCC] = 0x1F966,  // 🥦
    [GARLC] = 0x1F9C4,  // 🧄
    [ONION] = 0x1F9C5,  // 🧅
    [MUSHM] = 0x1F344,  // 🍄
    [PENUT] = 0x1F95C,  // 🥜

// Other Notable Foods
    [BREAD] = 0x1F35E,  // 🍞
    [PCAKE] = 0x1F95E,  // 🥞
    [WAFFL] = 0x1F9C7,  // 🧇
    [CHEES] = 0x1F9C0,  // 🧀
    [TBONE] = 0x1F969,  // 🥩
    [BACON] = 0x1F953,  // 🥓
    [HAMBR] = 0x1F354,  // 🍔
    [FRFRY] = 0x1F35F,  // 🍟
    [PIZZA] = 0x1F355,  // 🍕
    [HTDOG] = 0x1F32D,  // 🌭
    [SDWCH] = 0x1F96A,  // 🥪
    [TACOS] = 0x1F32E,  // 🌮
    [BRRTO] = 0x1F32F,  // 🌯
    [WHEGG] = 0x1F95A,  // 🥚
    [BSOUP] = 0x1F963,  // 🥣
    [SALAD] = 0x1F957,  // 🥗
    [POPCN] = 0x1F37F,  // 🍿
    [BUTTR] = 0x1F9C8,  // 🧈
    [SALTY] = 0x1F9C2,  // 🧂
    [RICEB] = 0x1F359,  // 🍙
    [SUSHI] = 0x1F363,  // 🍣
    [SHRMP] = 0x1F364,  // 🍤
    [ICEAM] = 0x1F366,  // 🍦
    [COOKI] = 0x1F36A,  // 🍪
    [BCAKE] = 0x1F370,  // 🍰
    [CHOCO] = 0x1F36B,  // 🍫
    [LOLLI] = 0x1F36D,  // 🍭

// Drinks
    [BOTTL] = 0x1F37C,  // 🍼
    [LECHE] = 0x1F95B,  // 🥛
    [COFFE] = 0x2615,   // ☕
    [JAPSK] = 0x1F376,  // 🍶
    [CHMPN] = 0x1F37E,  // 🍾
    [RWINE] = 0x1F377,  // 🍷
    [MARTI] = 0x1F378,  // 🍸
    [CHEER] = 0x1F37B,  // 🍻
    [CLASY] = 0x1F942,  // 🥂
    [JUBOX] = 0x1F9C3,  // 🧃

// Misc.
    [KNIFE] = 0x1F52A,  // 🔪
    [MEDIC] = 0x1F691,  // 🚑
    [FRTRK] = 0x1F692,  // 🚒
    [POLIC] = 0x1F693,  // 🚓
    [RDCAR] = 0x1F697,  // 🚗
    [WHLCH] = 0x1F9BD,  // 🦽
    [SCOOT] = 0x1F6F4,  // 🛴
    [SKBRD] = 0x1F6F9,  // 🛹
    [ALERT] = 0x1F6A8,  // 🚨
    [RSTOP] = 0x1F6D1,  // 🛑
    [ROCKT] = 0x1F680,  // 🚀
    [TPBEL] = 0x1F6CE,  // 🛎 (Tap-Bell)
    [HRGLS] = 0x23F3,   // ⏳
    [CLOCK] = 0x23F0,   // ⏰
    [HLFMN] = 0x1F31B,  // 🌛
    [SUNNY] = 0x1F31E,  // 🌞
    [STARS] = 0x2B50,   // ⭐
    [RNBOW] = 0x1F308,  // 🌈
    [LBOLT] = 0x26A1,   // ⚡
    [FLAME] = 0x1F525,  // 🔥
    [WATER] = 0x1F4A7,  // 💧
    [CNFTI] = 0x1F389,  // 🎉
    [MONEY] = 0x1F4B8,  // 💸
    [PINIT] = 0x1F4CC,  // 📌
    [TOILT] = 0x1F6BD,  // 🚽
    [SUDSY] = 0x1F9FC,  // 🧼
    [WARNG] = 0x26A0,   // ⚠ (warning triangle)
    [INBNG] = 0x2049,   // ⁉ (interrobang)
    [BBBBB] = 0x1F171,  // 🅱
    [PRIDE] = 0x1F3F3,   // 🏳️‍🌈
};

// Use X(BBBBB), X(PRIDE) etc... In Your Keymap.

