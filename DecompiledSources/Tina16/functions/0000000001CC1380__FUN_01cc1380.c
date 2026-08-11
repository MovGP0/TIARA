/* Ghidra address: 01cc1380 */
/* Ghidra symbol: FUN_01cc1380 */


undefined8 * FUN_01cc1380(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0xd0 + (longlong)param_3 * 0x10);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  return param_2;
}

