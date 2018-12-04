#ifndef MAIN_H
#define MAIN_H

#define VERBS_QUANTITY 178
#define LOWERCASE_A_ASCII_CODE 97

#include <ctype.h>
#include <stdio.h>
#include <string.h>

// List of irregular verbs

const char* verbs[VERBS_QUANTITY][3] = {
    {"arise", "arose", "arisen"},
    {"awake", "awoke", "awoken"},
    {"be", "was", "been"},
    {"bear", "bore", "borne"},
    {"beat", "beat", "beaten"},
    {"become", "became", "become"},
    {"beget", "begot", "begotten"},
    {"begin", "began", "begun"},
    {"bend", "bent", "bent"},
    {"beseech", "besought", "besought"},
    {"bet", "bet", "bet"},
    {"bid", "bid", "bid"},
    {"bide", "bode", "bidden"},
    {"bind", "bound", "bound"},
    {"bite", "bit", "bitten"},
    {"bleed", "bled", "bled"},
    {"blow", "blew", "blown"},
    {"break", "broke", "broken"},
    {"breed", "bred", "bred"},
    {"bring", "brought", "brought"},
    {"build", "built", "built"},
    {"burn", "burnt", "burnt"},
    {"buy", "bought", "bought"},
    {"can", "could", ""},
    {"cast", "cast", "cast"},
    {"catch", "caught", "caught"},
    {"choose", "chose", "chosen"},
    {"cleave", "clove", "cloven"},
    {"cling", "clung", "clung"},
    {"clothe", "clad", "clad"},
    {"come", "came", "come"},
    {"cost", "cost", "cost"},
    {"creep", "crept", "crept"},
    {"crow", "crew", "crowed"},
    {"cut", "cut", "cut"},
    {"deal", "dealt", "dealt"},
    {"dig", "dug", "dug"},
    {"dive", "dove", "dived"},
    {"do", "did", "done"},
    {"draw", "drew", "drawn"},
    {"dream", "dreamt", "dreamt"},
    {"drink", "drank", "drunk"},
    {"drive", "drove", "driven"},
    {"eat", "ate", "eaten"},
    {"fall", "fell", "fallen"},
    {"feed", "fed", "fed"},
    {"feel", "felt", "felt"},
    {"fight", "fought", "fought"},
    {"find", "found", "found"},
    {"fit", "fit", "fit"},
    {"flee", "fled", "fled"},
    {"fling", "flung", "flung"},
    {"fly", "flew", "flown"},
    {"forbid", "forbade", "forbidden"},
    {"forget", "forgot", "forgotten"},
    {"forgive", "forgave", "forgiven"},
    {"forsake", "forsook", "forsaken"},
    {"freeze", "froze", "frozen"},
    {"get", "got", "got"},
    {"give", "gave", "given"},
    {"go", "went", "gone"},
    {"grow", "grew", "grown"},
    {"hang", "hung", "hung"},
    {"have", "had", "had"},
    {"hear", "heard", "heard"},
    {"heave", "hove", "hoven"},
    {"hew", "hew", "hewn"},
    {"hide", "hid", "hidden"},
    {"hit", "hit", "hit"},
    {"hold", "held", "held"},
    {"hurt", "hurt", "hurt"},
    {"keep", "kept", "kept"},
    {"ken", "kent", "kent"},
    {"kneel", "knelt", "knelt"},
    {"knit", "knit", "knit"},
    {"know", "knew", "known"},
    {"lade", "laded", "laden"},
    {"lead", "led", "led"},
    {"lean", "leant", "leant"},
    {"leap", "leapt", "leapt"},
    {"learn", "learnt", "learnt"},
    {"leave", "left", "left"},
    {"lend", "lent", "lent"},
    {"let", "let", "let"},
    {"lie", "lay", "lain"},
    {"light", "lit", "lit"},
    {"lose", "lost", "lost"},
    {"make", "made", "made"},
    {"may", "might", "", },
    {"mean", "meant", "meant"},
    {"meet", "met", "met"},
    {"mow", "mowed", "mown"},
    {"plead", "pled", "pled"},
    {"proofread", "proofread", "proofread"},
    {"prove", "proved", "proven"},
    {"put", "put", "put"},
    {"queath", "quoth", "quoth"},
    {"read", "read", "read"},
    {"reave", "reft", "reft"},
    {"rend", "rent", "rent"},
    {"rid", "rid", "rid"},
    {"ride", "rode", "ridden"},
    {"ring", "rang", "rung"},
    {"rise", "rose", "risen"},
    {"run", "ran", "run"},
    {"see", "saw", "seen"},
    {"seek", "sought", "sought"},
    {"sell", "sold", "sold"},
    {"send", "sent", "sent"},
    {"set", "set", "set"},
    {"sew", "sewed", "sewn"},
    {"shake", "shook", "shaken"},
    {"shall", "should", ""},
    {"shave", "shove", "shaven"},
    {"shear", "shore", "shorn"},
    {"shed", "shed", "shed"},
    {"shine", "shone", "shone"},
    {"shoot", "shot", "shot"},
    {"show", "showed", "shown"},
    {"shrink", "shrank", "shrunk"},
    {"shrive", "shrove", "shriven"},
    {"shut", "shut", "shut"},
    {"sing", "sang", "sung"},
    {"sink", "sank", "sunk"},
    {"sit", "sat", "sat"},
    {"slay", "slew", "slain"},
    {"sleep", "slept", "slept"},
    {"slide", "slid", "slid"},
    {"sling", "slang", "slung"},
    {"slink", "slunk", "slunk"},
    {"slit", "slit", "slit"},
    {"smite", "smote", "smitten"},
    {"sneak", "snuck", "snuck"},
    {"sow", "sew", "sown"},
    {"speak", "spoke", "spoken"},
    {"speed", "sped", "sped"},
    {"spend", "spent", "spent"},
    {"spill", "spilt", "spilt"},
    {"spin", "span", "spun"},
    {"spit", "spat", "spit"},
    {"spoil", "spoilt", "spoilt"},
    {"spread", "spread", "spread"},
    {"spring", "sprang", "sprung"},
    {"stand", "stood", "stood"},
    {"steal", "stole", "stolen"},
    {"stick", "stuck", "stuck"},
    {"sting", "stang", "stung"},
    {"stink", "stank", "stunk"},
    {"strew", "strew", "strewn"},
    {"stride", "strode", "stridden"},
    {"strike", "struck", "stricken"},
    {"string", "strang", "strung"},
    {"strive", "strove", "striven"},
    {"swear", "swore", "sworn"},
    {"sweep", "swept", "swept"},
    {"swell", "swelled", "swollen"},
    {"swim", "swam", "swum"},
    {"swing", "swung", "swung"},
    {"take", "took", "taken"},
    {"teach", "taught", "taught"},
    {"tear", "tore", "torn"},
    {"tell", "told", "told"},
    {"think", "thought", "thought"},
    {"thrive", "throve", "thriven"},
    {"throw", "threw", "thrown"},
    {"tread", "trod", "trod"},
    {"understand", "understood", "understood"},
    {"wake", "woke", "woken"},
    {"wear", "wore", "worn"},
    {"weave", "wove", "woven"},
    {"wed", "wed", "wed"},
    {"weep", "wept", "wept"},
    {"wet", "wet", "wet"},
    {"will", "would", ""},
    {"win", "won", "won"},
    {"wind", "wound", "wound"},
    {"wring", "wrung", "wrung"},
    {"write", "wrote", "written"}
};

// List of indexes by letter

unsigned char letters[27] = {
    0,      // a
    2,      // b
    23,     // c
    35,     // d
    43,     // e
    44,     // f
    58,     // g
    62,     // h
    71,     // i
    71,     // j
    71,     // k
    76,     // l
    87,     // m
    92,     // n
    92,     // o
    92,     // p
    96,     // q
    97,     // r
    105,    // s
    158,    // t
    166,    // u
    166,    // v
    167,    // w
    178,    // x
    178,    // y
    178,    // z
    178,    // end of alphabet
};

void show_hint();

#endif // MAIN_H
