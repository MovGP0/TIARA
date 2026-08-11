/* Ghidra address: 00607260 */
/* Ghidra symbol: FUN_00607260 */


void FUN_00607260(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 local_94 [72];
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    FUN_00606460(param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(short *)(lVar1 + 0x28) == 0) {
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      *(undefined4 *)(lVar1 + 0x2c) = param_2;
      *(undefined4 *)(lVar1 + 0x30) = param_3;
    }
    else {
      thunk_FUN_04079bf6(*(longlong *)(lVar1 + 0x10),0x6c,local_94);
      uVar2 = thunk_FUN_03f3ed25(param_2,local_44 * 100,local_4c);
      FUN_00606c20(param_1,uVar2);
      uVar2 = thunk_FUN_03f3ed25(param_3,local_40 * 100,local_48);
      FUN_00606bd0(param_1,uVar2);
    }
  }
  else {
    uVar2 = thunk_FUN_03f3ed25(param_2,0x9ec,DAT_02011fac);
    FUN_00606c20(param_1,uVar2);
    uVar2 = thunk_FUN_03f3ed25(param_3,0x9ec,DAT_02011fac);
    FUN_00606bd0(param_1,uVar2);
  }
  return;
}

