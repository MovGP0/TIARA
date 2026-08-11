/* Ghidra address: 0197b6e0 */
/* Ghidra symbol: FUN_0197b6e0 */


void FUN_0197b6e0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xa8))(param_1);
  if (cVar1 != '\0') {
    lVar2 = FUN_01876d10(&DAT_018755e8,1,*(undefined1 *)((longlong)param_1 + 0x131));
    param_1[0x29] = lVar2;
  }
  (**(code **)(*param_1 + 0x98))(param_1);
  (**(code **)(*param_1 + 0xa0))(param_1);
  return;
}

