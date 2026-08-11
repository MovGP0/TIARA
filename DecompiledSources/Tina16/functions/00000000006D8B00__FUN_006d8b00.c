/* Ghidra address: 006d8b00 */
/* Ghidra symbol: FUN_006d8b00 */


void FUN_006d8b00(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_006d9b20(param_1,0);
  FUN_00655080(param_1);
  uVar1 = FUN_0065b870(param_1);
  iVar2 = FUN_005fbf20(*(undefined4 *)(param_1 + 200));
  thunk_FUN_041b2403(uVar1,0x2001,0,(longlong)iVar2);
  FUN_006d93f0(param_1,1,0);
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    uVar1 = FUN_0065b870(param_1);
    FUN_00470120(uVar1,0x40b,0xff,*(undefined8 *)(param_1 + 0x4a0));
  }
  if (*(char *)(param_1 + 0x4a8) != '\0') {
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar1,0x409,1,0);
  }
  return;
}

