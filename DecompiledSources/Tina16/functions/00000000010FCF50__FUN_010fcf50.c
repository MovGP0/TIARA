/* Ghidra address: 010fcf50 */
/* Ghidra symbol: FUN_010fcf50 */


void FUN_010fcf50(longlong param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (-1 < param_2) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
    if (param_2 < iVar1) {
      if (*(longlong *)(param_1 + 0x10) == 0) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
        uVar2 = FUN_00409570((longlong)iVar1);
        *(undefined8 *)(param_1 + 0x10) = uVar2;
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2) = param_3;
    }
  }
  return;
}

