/* Ghidra address: 010a4d40 */
/* Ghidra symbol: FUN_010a4d40 */


void FUN_010a4d40(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x1a70) != 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x930) + 0x260))(*(longlong **)(param_1 + 0x930))
    ;
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78) + 0x139ea) = uVar1;
    FUN_010a3d40(param_1);
  }
  return;
}

