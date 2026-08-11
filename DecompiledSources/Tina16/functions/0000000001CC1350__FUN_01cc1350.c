/* Ghidra address: 01cc1350 */
/* Ghidra symbol: FUN_01cc1350 */


undefined8 * FUN_01cc1350(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x48 + (longlong)param_3 * 0x11);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(puVar1 + 2);
  return param_2;
}

