/* Ghidra address: 0135db30 */
/* Ghidra symbol: FUN_0135db30 */


void FUN_0135db30(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_res10 [3];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar5 = FUN_019a4630();
  FUN_017cd4e0(&local_40,uVar5,param_3,*(undefined8 *)(param_1 + 0x730),0);
  uVar5 = FUN_019a4630();
  FUN_017cd4e0(&local_48,uVar5,param_4,*(undefined8 *)(param_1 + 0x730),0);
  FUN_00416cd0(local_30,7,&DAT_0135de6c,local_res10[0],&DAT_0135de7c,local_40,&DAT_0135de8c,local_48
               ,&DAT_0135de9c);
  uVar5 = FUN_019a4630();
  FUN_017cd4e0(&local_50,uVar5,param_4,*(undefined8 *)(param_1 + 0x730),0);
  uVar5 = FUN_019a4630();
  FUN_017cd4e0(&local_58,uVar5,param_3,*(undefined8 *)(param_1 + 0x730),0);
  FUN_00416cd0(&local_38,7,&DAT_0135de6c,local_res10[0],&DAT_0135de7c,local_50,&DAT_0135de8c,
               local_58,&DAT_0135de9c);
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_60,iVar6);
      iVar4 = FUN_004170c0(local_30[0],local_60,1);
      if (iVar4 < 1) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_68,iVar6);
        iVar4 = FUN_004170c0(local_38,local_68,1);
        if (0 < iVar4) goto LAB_0135ddad;
      }
      else {
LAB_0135ddad:
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
  FUN_00414560(&local_68,8);
  FUN_00414480(local_res10);
  return;
}

