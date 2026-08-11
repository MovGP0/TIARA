/* Ghidra address: 0188b920 */
/* Ghidra symbol: FUN_0188b920 */


void FUN_0188b920(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))(*(longlong **)(param_1 + 0x10));
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))(*(longlong **)(param_1 + 0x10),iVar1);
  return;
}

