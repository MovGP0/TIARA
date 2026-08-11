/* Ghidra address: 012af7d0 */
/* Ghidra symbol: FUN_012af7d0 */


void FUN_012af7d0(longlong param_1)

{
  int iVar1;
  undefined1 local_19 [9];
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8));
  if (iVar1 != -1) {
    local_19[0] = *(undefined1 *)(*(longlong *)(param_1 + 2000) + 0x328);
    FUN_012af700(param_1,local_19);
    FUN_0082a6c0(*(undefined8 *)(param_1 + 2000),local_19[0]);
  }
  return;
}

