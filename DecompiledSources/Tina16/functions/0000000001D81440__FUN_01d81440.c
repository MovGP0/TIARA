/* Ghidra address: 01d81440 */
/* Ghidra symbol: FUN_01d81440 */


void FUN_01d81440(longlong param_1)

{
  int iVar1;
  undefined1 local_19 [9];
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x260))(*(longlong **)(param_1 + 0x918));
  if (iVar1 != -1) {
    local_19[0] = *(undefined1 *)(*(longlong *)(param_1 + 0x990) + 0x328);
    FUN_01d813d0(param_1,local_19);
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0x990),local_19[0]);
  }
  return;
}

