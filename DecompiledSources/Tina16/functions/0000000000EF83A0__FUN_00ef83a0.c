/* Ghidra address: 00ef83a0 */
/* Ghidra symbol: FUN_00ef83a0 */


void FUN_00ef83a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x1f8);
    FUN_004095f0(*(undefined8 *)(param_1 + 0x28));
    *(longlong *)(param_1 + 0x28) = lVar1;
  }
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_1 + 0x12);
  return;
}

