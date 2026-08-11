/* Ghidra address: 01628160 */
/* Ghidra symbol: FUN_01628160 */


undefined8 FUN_01628160(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01613760();
  FUN_016272a0(uVar1,param_2,param_3);
  FUN_0163e150(param_3,uVar1,0);
  *(int *)(param_3 + 0x74) = *(int *)(param_3 + 0x74) + 1;
  return uVar1;
}

