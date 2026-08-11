/* Ghidra address: 0116c4d0 */
/* Ghidra symbol: FUN_0116c4d0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0116c4d0(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  FUN_00414480(&DAT_0203d978);
  iVar6 = param_1[0x21];
  if (param_1[0x16] == 0) {
    iVar4 = 0;
    uVar5 = 0;
  }
  else {
    iVar4 = FUN_01167b10(param_1[2] +
                         DAT_0203a524 * *(int *)(&DAT_0203a900 + (longlong)param_1[0x16] * 4));
    uVar5 = FUN_01167b10(param_1[3] +
                         DAT_0203a524 * *(int *)(&DAT_0203a950 + (longlong)param_1[0x16] * 4));
  }
  puVar2 = *(undefined4 **)(param_1 + 0x12);
  if ((puVar2 != (undefined4 *)0x0) && (*(longlong *)(param_1 + 0x14) != 0)) {
    iVar1 = param_1[10];
    if (iVar1 == 0) {
      FUN_01166e80(param_2,*puVar2,puVar2[1]);
      FUN_01166f10(param_2,**(undefined4 **)(param_1 + 0x12),param_1[1] + iVar6);
      FUN_01166f10(param_2,*param_1 - param_1[0xb],param_1[1] + iVar6);
      FUN_01166e80(param_2,**(undefined4 **)(param_1 + 0x14),(*(undefined4 **)(param_1 + 0x14))[1]);
      FUN_01166f10(param_2,**(undefined4 **)(param_1 + 0x14),param_1[1] - iVar6);
      FUN_01166f10(param_2,*param_1 - param_1[0xb],param_1[1] - iVar6);
      FUN_01166e80(param_2,**(undefined4 **)(param_1 + 0x1e),(*(undefined4 **)(param_1 + 0x1e))[1]);
      if (iVar4 == 0) {
        FUN_01166f10(param_2,**(undefined4 **)(param_1 + 0x1e),param_1[1]);
      }
      else {
        FUN_01166f10(param_2,iVar4,uVar5);
        FUN_01166f10(param_2,iVar4,param_1[1]);
      }
      FUN_01166f10(param_2,*param_1 + param_1[0xb],param_1[1]);
    }
    else if (iVar1 == 1) {
      FUN_01166e80(param_2,*puVar2,puVar2[1]);
      FUN_01166f10(param_2,*param_1 - iVar6,param_1[1] - param_1[0xb]);
      FUN_01166e80(param_2,**(undefined4 **)(param_1 + 0x14),(*(undefined4 **)(param_1 + 0x14))[1]);
      FUN_01166f10(param_2,*param_1 + iVar6,param_1[1] - param_1[0xb]);
      FUN_01166e80(param_2,**(undefined4 **)(param_1 + 0x1e),(*(undefined4 **)(param_1 + 0x1e))[1]);
      FUN_01166f10(param_2,*param_1,param_1[1] + param_1[0xb]);
    }
    else if (iVar1 == 2) {
      FUN_01166e80(param_2,*puVar2,puVar2[1]);
      FUN_01166f10(param_2,**(undefined4 **)(param_1 + 0x12),param_1[1] - iVar6);
      FUN_01166f10(param_2,*param_1 - param_1[0xb],param_1[1] - iVar6);
      FUN_01166e80(param_2,**(undefined4 **)(param_1 + 0x14),(*(undefined4 **)(param_1 + 0x14))[1]);
      FUN_01166f10(param_2,**(undefined4 **)(param_1 + 0x14),param_1[1] + iVar6);
      FUN_01166f10(param_2,*param_1 - param_1[0xb],param_1[1] + iVar6);
      FUN_01166e80(param_2,**(undefined4 **)(param_1 + 0x1e),(*(undefined4 **)(param_1 + 0x1e))[1]);
      if (iVar4 == 0) {
        FUN_01166f10(param_2,**(undefined4 **)(param_1 + 0x1e),param_1[1]);
      }
      else {
        FUN_01166f10(param_2,iVar4,uVar5);
        FUN_01166f10(param_2,iVar4,param_1[1]);
      }
      FUN_01166f10(param_2,*param_1 + param_1[0xb],param_1[1]);
    }
    else if (iVar1 == 3) {
      FUN_01166e80(param_2,*puVar2,puVar2[1]);
      FUN_01166f10(param_2,*param_1 + iVar6,param_1[1] + param_1[0xb]);
      FUN_01166e80(param_2,**(undefined4 **)(param_1 + 0x14),(*(undefined4 **)(param_1 + 0x14))[1]);
      FUN_01166f10(param_2,*param_1 - iVar6,param_1[1] + param_1[0xb]);
      FUN_01166e80(param_2,**(undefined4 **)(param_1 + 0x1e),(*(undefined4 **)(param_1 + 0x1e))[1]);
      FUN_01166f10(param_2,*param_1,param_1[1] - param_1[0xb]);
    }
  }
  cVar3 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8e0) + 0x260))
                    (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8e0));
  if (cVar3 == '\0') {
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x918),local_30);
    FUN_011650d0(&LAB_0116ca78,local_30[0],DAT_0203a4f0,DAT_0203a4f4,3,0);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x928),&local_38);
    FUN_011650d0(&LAB_0116ca78,local_38,DAT_0203a4f8,DAT_0203a4fc,1,0);
  }
  _DAT_0203a4e0 = DAT_0203a4f0;
  _DAT_0203a4e8 = DAT_0203a4f8;
  iVar6 = 0;
  if (DAT_0203d978 != 0) {
    iVar6 = *(int *)(DAT_0203d978 + -4);
  }
  FUN_00416dc0(&DAT_0203d980,DAT_0203d978,1,iVar6 + -1);
  FUN_00414ad0(&DAT_0203d978,DAT_0203d980);
  FUN_01165eb0(&DAT_0203d978);
  FUN_00414560(&local_38,2);
  return;
}

