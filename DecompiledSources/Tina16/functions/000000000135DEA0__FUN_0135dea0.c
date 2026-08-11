/* Ghidra address: 0135dea0 */
/* Ghidra symbol: FUN_0135dea0 */


void FUN_0135dea0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_0043f750(local_50,param_2);
  FUN_00416cd0(local_30,3,&DAT_0135e14c,local_50[0],&DAT_0135e160);
  FUN_0043f750(&local_58,param_2);
  FUN_00416cd0(&local_38,3,&DAT_0135e14c,local_58,&LAB_0135e170);
  uVar5 = FUN_019a4630();
  FUN_017cd4e0(&local_60,uVar5,param_2,*(undefined8 *)(param_1 + 0x730),0);
  FUN_00416ba0(&local_40,&DAT_0135e14c,local_60);
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_68,iVar6);
      iVar4 = FUN_004170c0(local_30[0],local_68,1);
      if (iVar4 < 1) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_70,iVar6);
        iVar4 = FUN_004170c0(local_38,local_70,1);
        if (0 < iVar4) goto LAB_0135e085;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_78,iVar6);
        iVar4 = FUN_00416db0(local_40,local_78);
        if (iVar4 == 0) goto LAB_0135e085;
      }
      else {
LAB_0135e085:
        FUN_0068bd10(*(undefined8 *)(param_1 + 0x6b0),iVar6,1);
        uVar5 = *(undefined8 *)(param_1 + 0x6b0);
        cVar2 = FUN_00821920(uVar5,iVar6);
        FUN_00821790(uVar5,iVar6,cVar2 == '\0');
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0135ed00(param_1,1);
  FUN_00414560(&local_78,6);
  FUN_00414560(&local_40,3);
  return;
}

