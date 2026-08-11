/* Ghidra address: 010e7c20 */
/* Ghidra symbol: FUN_010e7c20 */


void FUN_010e7c20(longlong param_1,ulonglong param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 200 + (param_2 & 0xff) * 0x20);
  *param_3 = *puVar1;
  *param_4 = puVar1[1];
  *param_5 = puVar1[2];
  return;
}

