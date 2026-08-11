/* Ghidra address: 00952720 */
/* Ghidra symbol: FUN_00952720 */


longlong * FUN_00952720(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  cVar1 = (**(code **)(*param_1 + 0xa0))(param_1);
  if (cVar1 != '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_00901108,1,L"No modification allowed error.");
    FUN_004134c0(uVar3);
  }
  uVar3 = FUN_00414520(&local_20);
  uVar4 = FUN_00414520(&local_28);
  cVar1 = FUN_009479a0(param_3,uVar3,uVar4);
  if (cVar1 == '\0') {
    cVar1 = FUN_008ff6c0(param_3);
    if (cVar1 == '\0') {
      FUN_00416020(&local_30,L"Invalid character error.",param_3);
      FUN_004168b0(&local_38,local_30);
      uVar3 = FUN_0044d490(&PTR_FUN_00900fb8,1,local_38);
      FUN_004134c0(uVar3);
    }
    else {
      uVar3 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
      FUN_004134c0(uVar3);
    }
  }
  iVar2 = FUN_00416420(local_20,L"xmlns");
  if (iVar2 != 0) {
    iVar2 = FUN_00416420(param_3,L"xmlns");
    if (iVar2 != 0) {
      iVar2 = FUN_00416420(param_2,L"http://www.w3.org/2000/xmlns/");
      if (iVar2 == 0) {
        uVar3 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
        FUN_004134c0(uVar3);
      }
      goto LAB_009528a7;
    }
  }
  iVar2 = FUN_00416420(param_2,L"http://www.w3.org/2000/xmlns/");
  if (iVar2 != 0) {
    uVar3 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
    FUN_004134c0(uVar3);
  }
LAB_009528a7:
  iVar2 = FUN_00416420(param_2,0);
  if (iVar2 == 0) {
    iVar2 = FUN_00416420(local_20,0);
    if (iVar2 != 0) {
      uVar3 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
      FUN_004134c0(uVar3);
    }
  }
  iVar2 = FUN_00416420(local_20,&DAT_00952ba4);
  if (iVar2 == 0) {
    iVar2 = FUN_00416420(param_2,L"http://www.w3.org/XML/1998/namespace");
    if (iVar2 != 0) {
      uVar3 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
      FUN_004134c0(uVar3);
    }
  }
  else {
    iVar2 = FUN_00416420(param_2,L"http://www.w3.org/XML/1998/namespace");
    if (iVar2 == 0) {
      uVar3 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
      FUN_004134c0(uVar3);
    }
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2d0))(param_1,param_2,local_28);
  if (plVar5 == (longlong *)0x0) {
    uVar3 = (**(code **)(*param_1 + 0x188))(param_1);
    uVar3 = FUN_004113f0(uVar3,&PTR_FUN_0090f580);
    local_40 = (longlong *)FUN_00950030(&PTR_FUN_00909bd0,1,uVar3,param_2,param_3,1);
    (**(code **)(*local_40 + 0x1a0))(local_40,param_4);
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x100))(param_1);
    (**(code **)(*plVar5 + 0x18))(plVar5,local_40);
    (**(code **)(*param_1 + 0x2b8))(param_1,param_1,0,local_40);
  }
  else {
    (**(code **)(*plVar5 + 0x1a8))(plVar5,local_20);
    (**(code **)(*plVar5 + 0x1a0))(plVar5,param_4);
    local_40 = (longlong *)0x0;
  }
  FUN_00414480(&local_38);
  FUN_004145c0(&local_30,3);
  return local_40;
}

