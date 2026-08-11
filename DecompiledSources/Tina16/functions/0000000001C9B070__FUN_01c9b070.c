/* Ghidra address: 01c9b070 */
/* Ghidra symbol: FUN_01c9b070 */


void FUN_01c9b070(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_00742eb0(*(undefined8 *)(param_1 + 0x1280),0);
  if (*(longlong *)(param_1 + 7000) != 0) {
    uVar1 = FUN_007f9a50();
    FUN_01c70990(param_1,uVar1,*(undefined4 *)(param_1 + 0x24c0),*(undefined4 *)(param_1 + 0x24c4));
  }
  return;
}

