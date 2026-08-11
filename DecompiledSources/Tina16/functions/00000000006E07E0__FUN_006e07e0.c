/* Ghidra address: 006e07e0 */
/* Ghidra symbol: FUN_006e07e0 */


void FUN_006e07e0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [40];
  int local_80 [2];
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  int local_38;
  int local_34;
  undefined8 local_30;
  longlong local_28;
  longlong *local_20;
  
  local_50 = auStack_a8;
  local_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_006df690(param_1[7]);
  (**(code **)(*param_1 + 0x90))(param_1);
  (**(code **)(*local_20 + 0xf0))(local_20,param_2,param_3);
  if (*(longlong *)(param_1[7] + 8) != 0) {
    FUN_006e2690(*(longlong *)(param_1[7] + 8),local_20[1]);
  }
  local_28 = 0;
  iVar1 = (**(code **)(*local_20 + 0x28))();
  local_38 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_58,local_38);
      uVar3 = FUN_00416740(local_58);
      uVar3 = FUN_006e04d0(param_1,uVar3,&local_34);
      FUN_004167d0(&local_40,uVar3);
      if (local_28 == 0) {
        local_28 = FUN_006dee40(param_1[7],0,local_40);
      }
      else {
        iVar2 = FUN_006ddf30(local_28);
        if (iVar2 == local_34) {
          uVar3 = FUN_006dd390(local_28);
          local_28 = FUN_006dee40(param_1[7],uVar3,local_40);
        }
        else {
          iVar2 = FUN_006ddf30(local_28);
          if (iVar2 == local_34 + -1) {
            local_28 = FUN_006dee40(param_1[7],local_28,local_40);
          }
          else {
            iVar2 = FUN_006ddf30(local_28);
            if (local_34 < iVar2) {
              local_30 = FUN_006dd390(local_28);
              while (iVar2 = FUN_006ddf30(local_30), local_34 < iVar2) {
                local_30 = FUN_006dd390(local_30);
              }
              uVar3 = FUN_006dd390(local_30);
              local_28 = FUN_006dee40(param_1[7],uVar3,local_40);
            }
            else {
              FUN_0041ddd0(&local_60,PTR_PTR_02002bb0);
              local_80[0] = local_34;
              local_78 = 0;
              local_70 = local_40;
              local_68 = 0x11;
              FUN_006dc530(local_60,local_80,1);
            }
          }
        }
      }
      local_38 = local_38 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_006df710(param_1[7]);
  FUN_00410f20(local_20);
  FUN_00414560(&local_60,2);
  FUN_00414480(&local_40);
  return;
}

