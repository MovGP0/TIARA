/* Ghidra address: 016bb230 */
/* Ghidra symbol: FUN_016bb230 */


void FUN_016bb230(longlong param_1,undefined8 *param_2,int *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *param_2 = uVar1;
  FUN_004b8ba0(*param_2,*(undefined8 *)(param_1 + 0x18),0);
  *param_3 = *(int *)(param_1 + 0x9b0) - *(int *)(*(longlong *)(param_1 + 0x18) + 8);
  return;
}

