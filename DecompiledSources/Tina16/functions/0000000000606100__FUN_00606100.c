/* Ghidra address: 00606100 */
/* Ghidra symbol: FUN_00606100 */


ulonglong FUN_00606100(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_84 [76];
  undefined4 local_38;
  int local_30;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    FUN_00606460(param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(short *)(lVar1 + 0x28) == 0) {
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      uVar2 = (ulonglong)*(uint *)(lVar1 + 0x30);
    }
    else {
      thunk_FUN_04079bf6(*(longlong *)(lVar1 + 0x10),0x6c,local_84);
      uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(lVar1 + 0x1c),local_38,local_30 * 100);
    }
  }
  else {
    uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(lVar1 + 0x1c),DAT_02011fac,0x9ec);
  }
  return uVar2;
}

