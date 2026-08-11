/* Ghidra address: 01950980 */
/* Ghidra symbol: FUN_01950980 */


void FUN_01950980(longlong *param_1,double param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_01953ba0(param_1);
  if ((cVar1 == '\0') || ((*(byte *)((longlong)param_1 + 0xc3) & 2) == 0)) {
    iVar2 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))((longlong *)param_1[0x10]);
    if (0 < iVar2) {
      cVar1 = FUN_00527160(param_2,param_1[0x15],0x3f847ae147ae147b);
      if (cVar1 == '\0') {
        (**(code **)(*param_1 + 0x180))(param_1,param_2 - (double)param_1[0x15],0);
      }
    }
    param_1[0x15] = (longlong)param_2;
  }
  return;
}

