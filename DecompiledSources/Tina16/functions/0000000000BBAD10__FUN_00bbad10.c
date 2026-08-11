/* Ghidra address: 00bbad10 */
/* Ghidra symbol: FUN_00bbad10 */


void FUN_00bbad10(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00bcbe50(param_2,2,0xc);
  if (*(int *)(param_1 + 0x20) != iVar1) {
    *(int *)(param_1 + 0x20) = iVar1;
    *(int *)(param_1 + 0x50) = iVar1;
    if (*(longlong *)(param_1 + 0x38) != 0) {
      (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1);
    }
  }
  return;
}

