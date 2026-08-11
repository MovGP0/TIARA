/* Ghidra address: 00d78c00 */
/* Ghidra symbol: FUN_00d78c00 */


void FUN_00d78c00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  
  cVar6 = FUN_00d5a0b0(*(undefined8 *)(param_1 + 0x120));
  if ((cVar6 == '\0') || (*(int *)(param_1 + 0x114) == 0x1fffffff)) {
    FUN_00d76910(param_1,param_2,param_3);
    FUN_00d76dd0(param_1,param_2);
    FUN_00d75ef0(param_1);
    FUN_00d76ce0(param_1,param_2,param_3);
  }
  else if ((0 < *(int *)(param_1 + 0x84)) && (0 < *(int *)(param_1 + 0x88))) {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 8);
    uVar7 = (**(code **)(*plVar4 + 0x58))(plVar4);
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 8);
    (**(code **)(*plVar4 + 0x80))(plVar4,*(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x2a));
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x120) + 8);
    uVar2 = *(undefined1 *)(lVar5 + 0x78);
    *(undefined1 *)(lVar5 + 0x78) = *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x2a);
    bVar3 = *(byte *)(param_1 + 0x128);
    if (bVar3 < 4) {
      if (bVar3 == 3) {
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x10);
        local_38._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
        local_30._0_4_ = (undefined4)*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x18);
        local_30 = CONCAT44(local_38._4_4_ + *(int *)(param_1 + 0x88),(undefined4)local_30);
        local_38 = uVar1;
        FUN_00d77cb0(param_1,local_58);
        FUN_00d57690(local_48,&local_38,local_58);
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 8);
        (**(code **)(*plVar4 + 0x80))(plVar4,*(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x2a))
        ;
        FUN_00d589a0(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 8),param_2,&local_38,
                     *(longlong *)(param_1 + 0x120) + 0x10);
      }
      else if (bVar3 == 0) {
        cVar6 = FUN_00423b30(param_3);
        if (cVar6 == '\0') {
          FUN_00d77cb0(param_1,local_48);
          FUN_00d58df0(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 8),param_2,local_48,param_3,
                       *(longlong *)(param_1 + 0x120) + 0x10);
        }
        else {
          FUN_00d77cb0(param_1,local_48);
          FUN_00d58bb0(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 8),param_2,local_48,
                       *(longlong *)(param_1 + 0x120) + 0x10);
        }
      }
      else if (bVar3 == 1) {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 8);
        (**(code **)(*plVar4 + 0x80))(plVar4,*(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x2a))
        ;
        FUN_00d77cb0(param_1,local_48);
        FUN_00d589a0(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 8),param_2,local_48,
                     *(longlong *)(param_1 + 0x120) + 0x10);
      }
      else if (bVar3 == 2) {
        local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x10);
        local_30 = *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x18);
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 8);
        (**(code **)(*plVar4 + 0x80))(plVar4,*(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x2a))
        ;
        iVar8 = FUN_004230a0(&local_38);
        iVar9 = FUN_004230c0(&local_38);
        FUN_00d588c0(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 8),param_2,
                     *(int *)(param_1 + 0x7c) + (*(int *)(param_1 + 0x84) - iVar8) / 2,
                     *(int *)(param_1 + 0x80) + (*(int *)(param_1 + 0x88) - iVar9) / 2,
                     *(longlong *)(param_1 + 0x120) + 0x10);
      }
    }
    else if (bVar3 == 4) {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x10);
      local_38._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
      local_30._0_4_ = (undefined4)*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x18);
      local_30 = CONCAT44(local_38._4_4_ + *(int *)(param_1 + 0x88),(undefined4)local_30);
      local_38 = uVar1;
      FUN_00d77cb0(param_1,local_58);
      FUN_00d57690(local_48,&local_38,local_58);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 8);
      (**(code **)(*plVar4 + 0x80))(plVar4,*(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x2a));
      FUN_00d58bb0(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 8),param_2,&local_38,
                   *(longlong *)(param_1 + 0x120) + 0x10);
    }
    else if (bVar3 == 5) {
      local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x10);
      local_30._4_4_ =
           (undefined4)((ulonglong)*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x18) >> 0x20);
      local_30 = CONCAT44(local_30._4_4_,(int)local_38 + *(int *)(param_1 + 0x84));
      FUN_00d77cb0(param_1,local_58);
      FUN_00d57690(local_48,&local_38,local_58);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 8);
      (**(code **)(*plVar4 + 0x80))(plVar4,*(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x2a));
      FUN_00d589a0(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 8),param_2,&local_38,
                   *(longlong *)(param_1 + 0x120) + 0x10);
    }
    else if (bVar3 == 6) {
      local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x10);
      local_30._4_4_ =
           (undefined4)((ulonglong)*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x18) >> 0x20);
      local_30 = CONCAT44(local_30._4_4_,(int)local_38 + *(int *)(param_1 + 0x84));
      FUN_00d77cb0(param_1,local_58);
      FUN_00d57690(local_48,&local_38,local_58);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 8);
      (**(code **)(*plVar4 + 0x80))(plVar4,*(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x2a));
      FUN_00d58bb0(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 8),param_2,&local_38,
                   *(longlong *)(param_1 + 0x120) + 0x10);
    }
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 8);
    (**(code **)(*plVar4 + 0x80))(plVar4,uVar7);
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 8) + 0x78) = uVar2;
    FUN_00d76dd0(param_1,param_2);
    FUN_00d75ef0(param_1);
    FUN_00d76ce0(param_1,param_2,param_3);
  }
  return;
}

