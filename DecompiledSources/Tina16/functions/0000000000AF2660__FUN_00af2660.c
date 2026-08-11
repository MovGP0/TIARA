/* Ghidra address: 00af2660 */
/* Ghidra symbol: FUN_00af2660 */


void FUN_00af2660(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x750) + 0x49c) -
          *(int *)(*(longlong *)(param_1 + 0x740) + 0x98);
  if (*param_4 < iVar1) {
    iVar1 = *param_4;
  }
  *param_4 = iVar1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x8b0) + 0x99) = 1;
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x180))(*(longlong **)(param_1 + 0x740));
  return;
}

