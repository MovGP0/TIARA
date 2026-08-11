/* Ghidra address: 00ac9dd0 */
/* Ghidra symbol: FUN_00ac9dd0 */


undefined1 FUN_00ac9dd0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((-1 < param_2) && (iVar1 = (**(code **)(*param_1 + 0x28))(param_1), param_2 < iVar1)) {
    lVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
    return *(undefined1 *)(lVar2 + 0x10);
  }
  return 0;
}

