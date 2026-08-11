/* Ghidra address: 0081d0e0 */
/* Ghidra symbol: FUN_0081d0e0 */


void FUN_0081d0e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_18 [4];
  int local_14;
  int local_c;
  
  local_20 = auStack_48;
  *(undefined1 *)(param_1 + 0x50) = 1;
  uVar3 = FUN_00786090(param_1);
  iVar2 = FUN_007f9220(uVar3);
  if (iVar2 != 0) {
    FUN_00819760(param_1,local_18);
    *(int *)(param_1 + 0x78) = local_14 + local_c;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x4d1) == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (((*(char *)(lVar1 + 0x4d1) == '\0') && (*(char *)(lVar1 + 0x4d6) == '\x01')) &&
       (*(char *)(lVar1 + 0x4d2) != '\x02')) {
      uVar3 = thunk_FUN_03976db5(0,0,*(undefined4 *)(param_1 + 0x130),
                                 *(undefined4 *)(param_1 + 0x78));
      *(undefined8 *)(param_1 + 0x110) = uVar3;
      uVar3 = FUN_00786090(param_1);
      thunk_FUN_041e5f05(uVar3,*(undefined8 *)(param_1 + 0x110),0xffffffff);
    }
    else if ((*(char *)(lVar1 + 0x4d1) == '\0') && (*(longlong *)(param_1 + 0x110) != 0)) {
      uVar3 = FUN_00786090(param_1);
      thunk_FUN_041e5f05(uVar3,0,0xffffffff);
      *(undefined8 *)(param_1 + 0x110) = 0;
    }
  }
  else {
    uVar3 = FUN_0081cc80(param_1);
    *(undefined8 *)(param_1 + 0x110) = uVar3;
    uVar3 = FUN_00786090(param_1);
    thunk_FUN_041e5f05(uVar3,*(undefined8 *)(param_1 + 0x110),0xffffffff);
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  return;
}

