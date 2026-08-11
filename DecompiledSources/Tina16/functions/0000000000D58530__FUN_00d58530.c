/* Ghidra address: 00d58530 */
/* Ghidra symbol: FUN_00d58530 */


void FUN_00d58530(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00d55dd8);
  if (cVar1 == '\0') {
    FUN_00608dd0(param_1,param_2);
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x60))(param_2);
    uVar3 = (**(code **)(*param_2 + 0x48))(param_2);
    (**(code **)(*param_1 + 0xe0))(param_1,uVar2,uVar3);
    iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    uVar6 = FUN_0060a050(param_2,iVar4 + -1);
    iVar4 = (**(code **)(*param_1 + 0x48))(param_1);
    uVar7 = FUN_0060a050(param_1,iVar4 + -1);
    iVar4 = (**(code **)(*param_1 + 0x60))(param_1);
    iVar5 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_00409a70(uVar6,uVar7,(longlong)(iVar4 * iVar5 * 4));
  }
  return;
}

