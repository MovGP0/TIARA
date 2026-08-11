/* Ghidra address: 01067320 */
/* Ghidra symbol: FUN_01067320 */


ulonglong FUN_01067320(longlong *param_1,ushort *param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    cVar1 = (**(code **)(*param_1 + 400))(param_1,*param_2);
    if (cVar1 == '\0') break;
    uVar2 = uVar2 * 0xb3 + (uint)*param_2 * 0x2c;
    param_2 = param_2 + 1;
  }
  *(int *)((longlong)param_1 + 0x13c) = (int)(((longlong)param_2 - param_1[0x28]) / 2);
  return (ulonglong)uVar2 % 0x157;
}

