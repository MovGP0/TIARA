/* Ghidra address: 01bd8720 */
/* Ghidra symbol: FUN_01bd8720 */


void FUN_01bd8720(longlong param_1,undefined1 *param_2,short param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00635590(*(undefined2 *)(*(longlong *)(param_1 + 0xd0) + 0x4b0),
                       *(short *)(*(longlong *)(param_1 + 0xd0) + 0x4b2) + param_3,
                       *(undefined2 *)(*(longlong *)(param_1 + 0xd0) + 0x4b4));
  *param_2 = (char)((uint)uVar1 >> 0x10);
  param_2[1] = (char)((uint)uVar1 >> 8);
  param_2[2] = (char)uVar1;
  return;
}

