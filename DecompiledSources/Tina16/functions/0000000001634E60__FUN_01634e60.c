/* Ghidra address: 01634e60 */
/* Ghidra symbol: FUN_01634e60 */


void FUN_01634e60(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar1 = (**(code **)(*param_2 + 0x28))();
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,&local_30,iVar6);
      FUN_01615910(local_30,&local_40,&local_38,&LAB_01634fd8);
      iVar2 = FUN_0043fc00();
      iVar5 = -1;
      if (iVar2 == -1) {
        iVar5 = 0;
      }
      uVar3 = 0;
      if (iVar5 != 0) {
        uVar3 = FUN_01634fe0(param_1,iVar2,local_40);
      }
      FUN_0043f750(local_50,uVar3);
      (**(code **)(*plVar4 + 0x78))(plVar4,local_50[0]);
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(*param_2 + 0x90))(param_2);
  (**(code **)(*param_2 + 0x10))(param_2,plVar4);
  FUN_00410f20(plVar4);
  FUN_00414480(local_50);
  FUN_00414560(&local_40,3);
  return;
}

