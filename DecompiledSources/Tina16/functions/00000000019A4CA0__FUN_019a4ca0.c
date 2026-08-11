/* Ghidra address: 019a4ca0 */
/* Ghidra symbol: FUN_019a4ca0 */


void FUN_019a4ca0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x3d8) == 0) {
    uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(param_1 + 0x3d8) = uVar1;
  }
  FUN_019a4d20(param_1);
  FUN_019a4c90(param_1);
  return;
}

