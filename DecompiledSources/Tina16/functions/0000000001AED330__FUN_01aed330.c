/* Ghidra address: 01aed330 */
/* Ghidra symbol: FUN_01aed330 */


void FUN_01aed330(longlong param_1,int param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if (param_2 - 1U == 0xffffffff) {
LAB_01aed364:
    *(undefined1 *)(param_1 + 0x19) = 0;
    if (0x20 < *(ulonglong *)(param_1 + 0x38)) {
      pcVar2 = (code *)FUN_00427c10(*(ulonglong *)(param_1 + 0x38),L"SetFilterMessage");
      (*pcVar2)(0);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      thunk_FUN_041c90ed(*(longlong *)(param_1 + 0x40));
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      thunk_FUN_041c90ed(*(longlong *)(param_1 + 0x48));
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (0x20 < *(ulonglong *)(param_1 + 0x38)) {
      thunk_FUN_041c8c2f(*(ulonglong *)(param_1 + 0x38));
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    if (1 < param_2 - 1U) {
      if (param_2 == 10) goto LAB_01aed364;
      if (1 < param_2 - 0xbU) {
        return;
      }
    }
    if ((param_2 == 1) || (param_2 == 0xb)) {
      *(undefined1 *)(param_1 + 0x19) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x19) = 2;
    }
    if (param_2 < 0xb) {
      uVar1 = thunk_FUN_04163be6(L"mfilt32.dll");
      *(undefined8 *)(param_1 + 0x38) = uVar1;
    }
    else {
      *(undefined8 *)(param_1 + 0x38) = 0x20;
    }
    if (0x20 < *(ulonglong *)(param_1 + 0x38)) {
      uVar1 = FUN_00427c10(*(ulonglong *)(param_1 + 0x38),L"KeyboardProc");
      uVar1 = thunk_FUN_0417e981(2,uVar1,*(undefined8 *)(param_1 + 0x38),0);
      *(undefined8 *)(param_1 + 0x40) = uVar1;
      uVar1 = FUN_00427c10(*(undefined8 *)(param_1 + 0x38),L"MouseProc");
      uVar1 = thunk_FUN_0417e981(7,uVar1,*(undefined8 *)(param_1 + 0x38),0);
      *(undefined8 *)(param_1 + 0x48) = uVar1;
      pcVar2 = (code *)FUN_00427c10(*(undefined8 *)(param_1 + 0x38),L"SetMessageHandler");
      (*pcVar2)(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0));
      pcVar2 = (code *)FUN_00427c10(*(undefined8 *)(param_1 + 0x38),L"SetFilterMessage");
      if (param_2 < 10) {
        (*pcVar2)(1);
      }
      else {
        (*pcVar2)(0);
      }
    }
  }
  return;
}

