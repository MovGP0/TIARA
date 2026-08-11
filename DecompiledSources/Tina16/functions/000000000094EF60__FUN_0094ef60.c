/* Ghidra address: 0094ef60 */
/* Ghidra symbol: FUN_0094ef60 */


longlong * FUN_0094ef60(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  (**(code **)(*param_1 + 0xf0))(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0090d520);
  if (cVar1 == '\0') {
    uVar3 = FUN_008b8bd0(param_1,param_2,param_3);
    param_2 = (longlong *)FUN_004113f0(uVar3,&PTR_FUN_00907cc8);
  }
  else {
    FUN_008b87a0(param_1,param_2);
    FUN_008b8930(param_1,param_2);
    FUN_008b87d0(param_1,param_2,param_3);
    while (cVar1 = (**(code **)(*param_2 + 0x278))(param_2), cVar1 != '\0') {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2);
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0);
      (**(code **)(*param_1 + 0x280))(param_1,uVar3,param_3);
    }
  }
  return param_2;
}

