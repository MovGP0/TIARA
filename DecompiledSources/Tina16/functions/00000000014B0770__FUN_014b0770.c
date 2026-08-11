/* Ghidra address: 014b0770 */
/* Ghidra symbol: FUN_014b0770 */


ulonglong FUN_014b0770(longlong *param_1,ushort *param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    cVar1 = (**(code **)(*param_1 + 400))(param_1,*param_2);
    if (cVar1 == '\0') break;
    uVar2 = uVar2 * 0x373 + (uint)*param_2 * 0x8c;
    param_2 = param_2 + 1;
  }
  *(int *)((longlong)param_1 + 0x13c) = (int)(((longlong)param_2 - param_1[0x28]) / 2);
  return (ulonglong)uVar2 % 0x2b;
}

