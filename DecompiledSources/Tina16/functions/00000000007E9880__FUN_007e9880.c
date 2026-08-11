/* Ghidra address: 007e9880 */
/* Ghidra symbol: FUN_007e9880 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007e9880(void)

{
  longlong lVar1;
  
  lVar1 = FUN_00427be0(L"comctl32.dll");
  if (lVar1 != 0) {
    _DAT_02012648 = FUN_00427c10(lVar1,L"InitializeFlatSB");
    _DAT_02012650 = FUN_00427c10(lVar1,L"UninitializeFlatSB");
    _DAT_02012638 = FUN_00427c10(lVar1,L"FlatSB_GetScrollProp");
    _DAT_02012640 = FUN_00427c10(lVar1,L"FlatSB_SetScrollProp");
    _DAT_020125f0 = (code *)FUN_00427c10(lVar1,L"FlatSB_EnableScrollBar");
    if (_DAT_020125f0 == (code *)0x0) {
      _DAT_020125f0 = FUN_004294b0;
    }
    _DAT_020125f8 = (code *)FUN_00427c10(lVar1,L"FlatSB_ShowScrollBar");
    if (_DAT_020125f8 == (code *)0x0) {
      _DAT_020125f8 = thunk_FUN_0412f07e;
    }
    _DAT_02012600 = (code *)FUN_00427c10(lVar1,L"FlatSB_GetScrollRange");
    if (_DAT_02012600 == (code *)0x0) {
      _DAT_02012600 = thunk_FUN_04032ecf;
    }
    _DAT_02012608 = (code *)FUN_00427c10(lVar1,L"FlatSB_GetScrollInfo");
    if (_DAT_02012608 == (code *)0x0) {
      _DAT_02012608 = thunk_FUN_04083ff6;
    }
    _DAT_02012610 = (code *)FUN_00427c10(lVar1,L"FlatSB_GetScrollPos");
    if (_DAT_02012610 == (code *)0x0) {
      _DAT_02012610 = thunk_FUN_04119211;
    }
    _DAT_02012618 = (code *)FUN_00427c10(lVar1,L"FlatSB_SetScrollPos");
    if (_DAT_02012618 == (code *)0x0) {
      _DAT_02012618 = thunk_FUN_04145aef;
    }
    _DAT_02012620 = (code *)FUN_00427c10(lVar1,L"FlatSB_SetScrollInfo");
    if (_DAT_02012620 == (code *)0x0) {
      _DAT_02012620 = thunk_FUN_03d770e4;
    }
    _DAT_02012628 = (code *)FUN_00427c10(lVar1,L"FlatSB_SetScrollRange");
    if (_DAT_02012628 == (code *)0x0) {
      _DAT_02012628 = thunk_FUN_04182059;
    }
  }
  return;
}

