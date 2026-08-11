/* Ghidra address: 01b47c20 */
/* Ghidra symbol: FUN_01b47c20 */


ulonglong FUN_01b47c20(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = 0xffffffff;
  if (-1 < param_2) {
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,0);
    uVar2 = 0xffffffff;
    if (param_2 < iVar1) {
      uVar2 = (ulonglong)*(ushort *)((longlong)param_1 + (longlong)(param_2 + 1) * 2 + 0x26);
    }
  }
  return uVar2;
}

