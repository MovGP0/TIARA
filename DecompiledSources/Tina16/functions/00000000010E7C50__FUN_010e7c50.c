/* Ghidra address: 010e7c50 */
/* Ghidra symbol: FUN_010e7c50 */


void FUN_010e7c50(longlong param_1,char param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  
  if (param_3 != 0) {
    if (param_2 == '\0') {
      *(undefined1 *)(param_1 + 0xc1) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0xc0) = 1;
    }
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xd8);
    uVar1 = (**(code **)(*plVar5 + 0x30))(plVar5,0);
    lVar2 = FUN_004113f0(uVar1,&DAT_01cdd500);
    local_2c = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    if (*(char *)(lVar2 + 0x58) == '\x01') {
      if (param_2 == '\0') {
        uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x70) + 0x30))(*(longlong **)(lVar2 + 0x70),0);
        lVar4 = FUN_004113f0(uVar3,&DAT_01ccbf00);
        local_30 = *(int *)(lVar4 + 0xec);
      }
      else {
        uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x70) + 0x30))(*(longlong **)(lVar2 + 0x70),0);
        lVar4 = FUN_004113f0(uVar3,&DAT_01ccbf00);
        local_30 = *(int *)(lVar4 + 0xe8);
      }
      local_38 = local_30;
      local_34 = local_2c;
      FUN_01ae1eb0(uVar1,param_2,0,lVar2,&local_38,0);
      FUN_010e7bd0(param_1,param_2);
    }
    else {
      lVar4 = FUN_010e7720(param_1,param_3);
      if (lVar4 != 0) {
        *(undefined8 *)PTR_DAT_02005620 = 0;
        plVar5 = (longlong *)FUN_004113f0(lVar4,&PTR_FUN_01aae560);
        FUN_010e7c20(param_1,param_2,local_3c,&local_30,&local_2c);
        if (local_30 == -1) {
          if (param_2 == '\0') {
            uVar3 = FUN_01ab2a60(plVar5);
            (**(code **)(*plVar5 + 0xf0))(plVar5,uVar3,plVar5[0x13],&local_30,&local_2c);
          }
          else {
            uVar3 = FUN_01ab2a30(plVar5);
            (**(code **)(*plVar5 + 0xf0))(plVar5,uVar3,plVar5[0x12],&local_30,&local_2c);
          }
        }
        uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x70) + 0x30))(*(longlong **)(lVar2 + 0x70),0);
        lVar2 = FUN_004113f0(uVar3,&DAT_01ccbf00);
        local_30 = FUN_00b905f0(local_30,*(undefined4 *)(lVar2 + 0xec));
        local_38 = FUN_00b905e0(local_30,*(int *)(lVar2 + 0xe8) + 1);
        local_34 = local_2c;
        local_30 = local_38;
        FUN_01ae1eb0(uVar1,param_2,lVar4,0,&local_38,0);
        FUN_010e7bd0(param_1,param_2);
      }
    }
  }
  return;
}

