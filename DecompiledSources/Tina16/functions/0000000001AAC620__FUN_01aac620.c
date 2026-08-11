/* Ghidra address: 01aac620 */
/* Ghidra symbol: FUN_01aac620 */


void FUN_01aac620(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00410f20(*(undefined8 *)(param_1 + 0x13a30));
  uVar1 = FUN_01d34560(&PTR_FUN_01caf0e0,1,5,5);
  *(undefined8 *)(param_1 + 0x13a30) = uVar1;
  FUN_01aabc70(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x13a58));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x13a40));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x13a48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x13a50));
  FUN_01aac330(param_1);
  return;
}

