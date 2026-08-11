/* Ghidra address: 017f4350 */
/* Ghidra symbol: FUN_017f4350 */


undefined8 * FUN_017f4350(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_3 * 0x10);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  return param_2;
}

