/* Ghidra address: 01599230 */
/* Ghidra symbol: FUN_01599230 */


undefined8 FUN_01599230(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) ||
      (*(longlong *)(param_1 + 0x30) == 0)) || (*(longlong *)(param_1 + 0x38) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x48) = 2;
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(undefined4 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0xc);
    if (*(int *)(lVar1 + 0x24) < 0) {
      *(int *)(lVar1 + 0x24) = -*(int *)(lVar1 + 0x24);
    }
    if (*(int *)(lVar1 + 0x24) == 0) {
      local_18 = 0x71;
    }
    else {
      local_18 = 0x2a;
    }
    *(undefined4 *)(lVar1 + 8) = local_18;
    if (*(int *)(lVar1 + 0x24) == 2) {
      local_14 = FUN_015a60c0(0,0,0);
    }
    else {
      local_14 = FUN_015a5730(0,0,0);
    }
    *(undefined4 *)(param_1 + 0x4c) = local_14;
    *(undefined4 *)(lVar1 + 0x35) = 0;
    FUN_015a1960(lVar1);
    uVar2 = 0;
  }
  return uVar2;
}

