/* Ghidra address: 00606af0 */
/* Ghidra symbol: FUN_00606af0 */


void FUN_00606af0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 local_84 [76];
  undefined4 local_38;
  int local_30;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    FUN_00606460(param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(short *)(lVar1 + 0x28) == 0) {
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      *(undefined4 *)(lVar1 + 0x30) = param_2;
    }
    else {
      thunk_FUN_04079bf6(*(longlong *)(lVar1 + 0x10),0x6c,local_84);
      uVar2 = thunk_FUN_03f3ed25(param_2,local_30 * 100,local_38);
      FUN_00606bd0(param_1,uVar2);
    }
  }
  else {
    uVar2 = thunk_FUN_03f3ed25(param_2,0x9ec,DAT_02011fac);
    FUN_00606bd0(param_1,uVar2);
  }
  return;
}

