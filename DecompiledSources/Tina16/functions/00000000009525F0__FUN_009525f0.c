/* Ghidra address: 009525f0 */
/* Ghidra symbol: FUN_009525f0 */


longlong * FUN_009525f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  cVar1 = (**(code **)(*param_1 + 0xa0))(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_0044d490(&PTR_FUN_00901108,1,L"No modification allowed error.");
    FUN_004134c0(uVar2);
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1,param_2);
  if (plVar3 == (longlong *)0x0) {
    uVar2 = (**(code **)(*param_1 + 0x188))(param_1);
    uVar2 = FUN_004113f0(uVar2,&PTR_FUN_0090eed0);
    plVar3 = (longlong *)FUN_0094fe80(&PTR_FUN_00909bd0,1,uVar2,param_2,1);
    (**(code **)(*plVar3 + 0x1a0))(plVar3,param_3);
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x100))(param_1);
    (**(code **)(*plVar4 + 0x18))(plVar4,plVar3);
    (**(code **)(*param_1 + 0x2b8))(param_1,param_1,0,plVar3);
  }
  else {
    (**(code **)(*plVar3 + 0x1a0))(plVar3,param_3);
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}

