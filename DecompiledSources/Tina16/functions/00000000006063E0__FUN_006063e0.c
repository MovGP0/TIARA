/* Ghidra address: 006063e0 */
/* Ghidra symbol: FUN_006063e0 */


void FUN_006063e0(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  cVar1 = FUN_00606d10(*param_1,param_2);
  if (cVar1 == '\0') {
    iVar2 = (**(code **)*param_2)(param_2);
    iVar3 = FUN_004b6da0(param_2);
    FUN_00606670(param_1,param_2,iVar2 - iVar3);
  }
  else {
    FUN_00606530(param_1,param_2);
  }
  lVar4 = (**(code **)(*param_1 + 0x50))(param_1);
  *(bool *)((longlong)param_1 + 0x3a) = lVar4 != 0;
  (**(code **)(*param_1 + 0x20))(param_1,param_1);
  return;
}

