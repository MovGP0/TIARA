/* Ghidra address: 010f0a10 */
/* Ghidra symbol: FUN_010f0a10 */


void FUN_010f0a10(longlong param_1,undefined8 *param_2)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (int)*param_2;
  local_10 = local_10 - *(int *)(param_1 + 0x80);
  uStack_c = (int)((ulonglong)*param_2 >> 0x20);
  uStack_c = uStack_c - *(int *)(param_1 + 0x84);
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + local_10;
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + uStack_c;
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + local_10;
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + uStack_c;
  return;
}

