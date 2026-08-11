/* Ghidra address: 01168200 */
/* Ghidra symbol: FUN_01168200 */


void FUN_01168200(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040c770(DAT_0203aeb0 * 8.0);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar1 = FUN_0040c770(DAT_0203aeb0 * 8.0);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return;
}

