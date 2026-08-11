/* Ghidra address: 0080b3d0 */
/* Ghidra symbol: FUN_0080b3d0 */


void FUN_0080b3d0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_03e425c0(*(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x2d0),
                             **(undefined4 **)(param_1 + 0x118),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x118) + 8),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0x10));
  *(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0x18) = uVar1;
  return;
}

