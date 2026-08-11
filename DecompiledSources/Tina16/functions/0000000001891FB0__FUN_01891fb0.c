/* Ghidra address: 01891fb0 */
/* Ghidra symbol: FUN_01891fb0 */


void FUN_01891fb0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_03a65bf1(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x598),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x5b8),
                             **(undefined4 **)(param_1 + 0x58),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x10));
  *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x18) = uVar1;
  return;
}

