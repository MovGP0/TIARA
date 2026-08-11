/* Ghidra address: 006062b0 */
/* Ghidra symbol: FUN_006062b0 */


ulonglong FUN_006062b0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_84 [72];
  undefined4 local_3c;
  int local_34;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    FUN_00606460(param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(short *)(lVar1 + 0x28) == 0) {
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      uVar2 = (ulonglong)*(uint *)(lVar1 + 0x2c);
    }
    else {
      thunk_FUN_04079bf6(*(longlong *)(lVar1 + 0x10),0x6c,local_84);
      uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(lVar1 + 0x18),local_3c,local_34 * 100);
    }
  }
  else {
    uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(lVar1 + 0x18),DAT_02011fac,0x9ec);
  }
  return uVar2;
}

