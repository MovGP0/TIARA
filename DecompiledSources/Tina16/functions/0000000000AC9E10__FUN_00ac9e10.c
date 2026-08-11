/* Ghidra address: 00ac9e10 */
/* Ghidra symbol: FUN_00ac9e10 */


void FUN_00ac9e10(longlong *param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (-1 < param_2) {
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    if (param_2 < iVar1) {
      lVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
      *(undefined1 *)(lVar2 + 0x10) = param_3;
    }
  }
  return;
}

