/* Ghidra address: 00c47980 */
/* Ghidra symbol: FUN_00c47980 */


void FUN_00c47980(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00409570(0x28);
  thunk_FUN_03f77fca(uVar1,1);
  thunk_FUN_0413cc03(uVar1,0xffffffff,0,0);
  *param_1 = 0x18;
  *(undefined8 *)(param_1 + 2) = uVar1;
  param_1[4] = 0xffffffff;
  return;
}

