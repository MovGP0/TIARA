/* Ghidra address: 0095efe0 */
/* Ghidra symbol: FUN_0095efe0 */


void FUN_0095efe0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30 [2];
  
  if (*(char *)(*param_2 + 0x2b) != '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_009014f0,1,L"Content model in use error.");
    FUN_004134c0(uVar3);
  }
  while( true ) {
    iVar2 = (**(code **)(**(longlong **)(*param_2 + 0x38) + 0x20))(*(longlong **)(*param_2 + 0x38));
    if (iVar2 < 1) break;
    plVar1 = *(longlong **)(*param_2 + 0x38);
    iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar2 + -1);
    uVar3 = FUN_004113f0(uVar3,&PTR_FUN_00911b78);
    local_30[0] = (**(code **)(*(longlong *)*param_2 + 0x40))((longlong *)*param_2,uVar3);
    (**(code **)(*param_1 + 0x18))(param_1,local_30);
  }
  (**(code **)(*(longlong *)param_1[8] + 0x28))((longlong *)param_1[8],*param_2);
  FUN_00410f20(*param_2);
  *param_2 = 0;
  return;
}

