/* Ghidra address: 007febd0 */
/* Ghidra symbol: FUN_007febd0 */


void FUN_007febd0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_03a65bf1(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x548),
                             *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x698),
                             **(undefined4 **)(param_1 + 200),
                             *(undefined8 *)(*(longlong *)(param_1 + 200) + 8),
                             *(undefined8 *)(*(longlong *)(param_1 + 200) + 0x10));
  *(undefined8 *)(*(longlong *)(param_1 + 200) + 0x18) = uVar1;
  return;
}

