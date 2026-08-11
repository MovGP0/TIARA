/* Ghidra address: 0094fab0 */
/* Ghidra symbol: FUN_0094fab0 */


void FUN_0094fab0(longlong *param_1,int param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  cVar1 = (**(code **)(*param_1 + 0xa0))(param_1);
  if (cVar1 != '\0') {
    uVar4 = FUN_0044d490(&PTR_FUN_00901108,1,L"No modification allowed error.");
    FUN_004134c0(uVar4);
  }
  if (-1 < param_2) {
    iVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    if ((param_2 <= iVar2) && (-1 < param_3)) goto LAB_0094fb58;
  }
  uVar4 = FUN_0044d490(&PTR_FUN_00900bd8,1,L"Index size error.");
  FUN_004134c0(uVar4);
LAB_0094fb58:
  iVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
  iVar2 = iVar3 - param_2;
  if (param_3 < iVar3 - param_2) {
    iVar2 = param_3;
  }
  (**(code **)(*param_1 + 0x2d8))(param_1,&local_20,0,param_2);
  iVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*param_1 + 0x2d8))(param_1,&local_28,param_2 + iVar2,(iVar3 - param_2) - iVar2);
  FUN_00416310(&local_30,3,local_20,param_4,local_28);
  (**(code **)(*param_1 + 0x2c0))(param_1,local_30);
  FUN_004145c0(&local_30,3);
  return;
}

