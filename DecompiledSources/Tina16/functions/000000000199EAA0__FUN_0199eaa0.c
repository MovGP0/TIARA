/* Ghidra address: 0199eaa0 */
/* Ghidra symbol: FUN_0199eaa0 */


longlong * FUN_0199eaa0(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_4);
    iVar2 = iVar2 + 1;
  }
  while( true ) {
    if ((int)param_1[2] + -1 < iVar2) {
      return (longlong *)0x0;
    }
    plVar3 = (longlong *)FUN_0198d420(param_1,iVar2);
    if ((((plVar3 != (longlong *)0x0) && ((undefined **)*plVar3 == &PTR_FUN_017c0190)) &&
        (cVar1 = FUN_017c3740(plVar3), cVar1 != '\0')) &&
       (cVar1 = (**(code **)(*plVar3 + 0x98))(plVar3,param_1[0x42],param_2,param_3), cVar1 != '\0'))
    break;
    iVar2 = iVar2 + 1;
  }
  return plVar3;
}

