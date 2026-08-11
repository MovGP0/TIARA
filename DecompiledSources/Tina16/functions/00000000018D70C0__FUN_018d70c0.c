/* Ghidra address: 018d70c0 */
/* Ghidra symbol: FUN_018d70c0 */


void FUN_018d70c0(longlong param_1,longlong *param_2,char param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 *local_60;
  double local_50;
  undefined1 local_41;
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_60 = auStack_98;
  local_40 = 0;
  FUN_005fdf10(*(undefined8 *)(param_1 + 0x10));
  FUN_00414520(param_1 + 0x68);
  (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x90))(*(longlong **)(param_1 + 0xa0));
  FUN_005fe090(*(undefined8 *)(param_1 + 0x10));
  local_34 = (**(code **)(*param_2 + 0x28))(param_2);
  if (local_34 != 0) {
    FUN_005fdf10(*(undefined8 *)(param_1 + 0x10));
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70);
    uVar3 = FUN_005fce60(lVar1);
    FUN_018d4390(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(lVar1 + 0x28),
                 *(undefined4 *)(param_1 + 0x2c),uVar3);
    local_41 = FUN_005fce60(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70));
    local_38 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c);
    if (((0x59 < *(int *)(param_1 + 0x78)) && (*(int *)(param_1 + 0x78) < 0xb4)) ||
       ((0x10d < *(int *)(param_1 + 0x78) && (*(int *)(param_1 + 0x78) < 0x168)))) {
      local_38 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x50);
    }
    local_2c = param_4;
    if (param_4 <= local_34 + -1) {
      iVar7 = ((local_34 + -1) - param_4) + 1;
      do {
        local_30 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))
                             (*(longlong **)(param_1 + 0xa0));
        (**(code **)(*param_2 + 0x18))(param_2,&local_40,local_2c);
        iVar4 = FUN_00416420(local_40,0);
        if (iVar4 == 0) {
          FUN_00414be0(&local_40,&DAT_018d74ec);
        }
        local_78 = &LAB_018d74f4;
        FUN_00416310(param_1 + 0x68,3,*(undefined8 *)(param_1 + 0x68),local_40);
        local_50 = (double)*(int *)(param_1 + 0x18) / (double)*(int *)(param_1 + 0x1c);
        if ((param_3 == '\0') || (0 < local_2c)) {
          uVar3 = FUN_0040c770((double)local_38 * local_50);
          uVar5 = FUN_0040c770(((double)local_38 - *(double *)(param_1 + 0x60)) * local_50);
          uVar6 = FUN_0040c770(*(double *)(param_1 + 0x38) * local_50);
          local_78 = (undefined1 *)CONCAT44(local_78._4_4_,uVar6);
          FUN_018d7950(param_1,local_40,uVar3,uVar5);
        }
        else {
          uVar3 = FUN_0040c770((double)local_38 * local_50);
          uVar5 = FUN_0040c770(*(double *)(param_1 + 0x38) * local_50);
          local_78 = (undefined1 *)CONCAT44(local_78._4_4_,uVar5);
          FUN_018d7950(param_1,local_40,uVar3,uVar3);
        }
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))
                          (*(longlong **)(param_1 + 0xa0));
        if (iVar4 != local_30) {
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x48))
                    (*(longlong **)(param_1 + 0xa0),local_30,1);
          iVar4 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))
                            (*(longlong **)(param_1 + 0xa0));
          if (iVar4 + -1 == local_30) {
            (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x48))
                      (*(longlong **)(param_1 + 0xa0),local_30,3);
          }
          else {
            plVar2 = *(longlong **)(param_1 + 0xa0);
            iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
            (**(code **)(*plVar2 + 0x48))(plVar2,iVar4 + -1,2);
          }
        }
        local_2c = local_2c + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    FUN_005fce70(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70),local_41);
    FUN_005fe090(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_00414520(&local_40);
  return;
}

