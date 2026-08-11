/* Ghidra address: 01c73b30 */
/* Ghidra symbol: FUN_01c73b30 */


void FUN_01c73b30(longlong param_1,undefined8 param_2,undefined1 *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined4 uStack_34;
  int local_30;
  int local_2c;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  local_58 = 0;
  local_50[0] = 0;
  if (*param_4 == *(longlong *)(param_1 + 0x700)) {
    puVar4 = &local_40;
    FUN_00849eb0(*(longlong *)(param_1 + 0x700),(int)param_4[6],
                 *(undefined4 *)((longlong)param_4 + 0x34),&local_3c,puVar4);
    uVar5 = (undefined4)((ulonglong)puVar4 >> 0x20);
    lVar2 = FUN_00b89270();
    if (*(char *)(lVar2 + 0x2e) != '\0') {
      local_3c = (*(int *)(*(longlong *)(param_1 + 0x700) + 0x4a4) - local_3c) + -1;
    }
    if (-1 < local_3c) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x27a0) + 0x28))
                        (*(longlong **)(param_1 + 0x27a0));
      if (local_3c < iVar1) {
        (**(code **)(**(longlong **)(param_1 + 0x27a0) + 0x18))
                  (*(longlong **)(param_1 + 0x27a0),local_50,local_3c);
        FUN_00414ad0(param_4 + 8,local_50[0]);
        FUN_00849e90(*(undefined8 *)(param_1 + 0x700),&local_38,local_3c,local_40);
        local_30 = local_30 + 1;
        local_2c = local_2c + 1;
        param_4[4] = CONCAT44(uStack_34,local_38);
        param_4[5] = CONCAT44(local_2c,local_30);
        goto LAB_01c73c4f;
      }
    }
    *param_3 = 0;
  }
LAB_01c73c4f:
  if (*param_4 == *(longlong *)(param_1 + 0x1528)) {
    iVar1 = FUN_01ca0e80(param_1,(int)param_4[6],*(undefined4 *)((longlong)param_4 + 0x34));
    if (iVar1 != -1) {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2500),iVar1);
      FUN_0064dd90(uVar3,&local_58);
      FUN_00414ad0(param_4 + 8,local_58);
      lVar2 = *(longlong *)(param_1 + 0x1508);
      FUN_00498370(&local_38,*(int *)(lVar2 + 0x90) + iVar1 * (*(int *)(lVar2 + 0x98) + 2),
                   *(undefined4 *)(lVar2 + 0x94),*(int *)(lVar2 + 0x98),
                   CONCAT44(uVar5,*(undefined4 *)(lVar2 + 0x9c)));
      param_4[4] = CONCAT44(uStack_34,local_38);
      param_4[5] = CONCAT44(local_2c,local_30);
      *(int *)(param_4 + 2) = (int)param_4[2] + local_38 + 3;
      *(int *)((longlong)param_4 + 0x14) =
           *(int *)((longlong)param_4 + 0x14) +
           *(int *)(*(longlong *)(param_1 + 0x1508) + 0x9c) * -3;
    }
  }
  FUN_00414480(&local_58);
  FUN_00414480(local_50);
  return;
}

