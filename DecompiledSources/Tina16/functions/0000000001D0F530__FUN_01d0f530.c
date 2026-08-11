/* Ghidra address: 01d0f530 */
/* Ghidra symbol: FUN_01d0f530 */


void FUN_01d0f530(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_004095c0(0x24);
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[3] = param_1[3];
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 4);
  return;
}

