/* Ghidra address: 00dd9780 */
/* Ghidra symbol: FUN_00dd9780 */


void FUN_00dd9780(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  *(undefined1 *)(param_1 + 0x30) = 1;
  local_10 = FUN_00dd9b20(&PTR_FUN_00dd8228,1);
  FUN_0041b890(local_10 + 0x48,*(undefined8 *)(param_1 + 0x18),&DAT_00dd9810);
  FUN_00603f70(*(undefined8 *)(param_1 + 0x38),local_10);
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_00410f20(local_10);
  return;
}

