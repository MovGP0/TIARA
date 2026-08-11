/* Ghidra address: 0072ba20 */
/* Ghidra symbol: FUN_0072ba20 */


void FUN_0072ba20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416db0(param_2,*(undefined8 *)(param_1 + 0x108));
  if (iVar1 != 0) {
    FUN_00414ad0(param_1 + 0x108,param_2);
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      FUN_00470120(*(longlong *)(param_1 + 0xd8),0x472,0,*(undefined8 *)(param_1 + 0x108));
    }
  }
  return;
}

