/* Ghidra address: 01a89e80 */
/* Ghidra symbol: FUN_01a89e80 */


void FUN_01a89e80(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  int local_1c;
  
  local_80 = auStack_a8;
  FUN_0064e6f0(*(undefined8 *)(param_1 + 0x1058));
  if (*(longlong *)(param_1 + 0x798) == 0) goto LAB_01a8a172;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (iVar3 != 1) goto LAB_01a8a172;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
  uVar6 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
  local_50 = FUN_004113f0(uVar6,&DAT_01cdd500);
  if (*(char *)(local_50 + 0x58) == '\x01') {
LAB_01a89f38:
    local_1c = (**(code **)(**(longlong **)(local_50 + 0x78) + 0x28))
                         (*(longlong **)(local_50 + 0x78));
    local_1c = local_1c - *(int *)(local_50 + 0x98);
    if (0 < local_1c) {
      local_58 = *(longlong *)(param_1 + 0x1058);
      FUN_0068e9b0(local_58,1);
      *(undefined2 *)(local_58 + 0x4aa) = 1;
      *(undefined2 *)(local_58 + 0x4a8) = 1;
      FUN_0068e6f0(local_58,*(undefined4 *)(local_50 + 0x94),0,local_1c);
      FUN_0064e700(local_58);
    }
  }
  else {
    if (*(char *)(local_50 + 0x58) == '\0') {
      cVar2 = FUN_01ce33d0(local_50);
      if (cVar2 == '\x01') goto LAB_01a89f38;
    }
    if (*(char *)(local_50 + 0x58) != '\x05') {
      iVar3 = (**(code **)(**(longlong **)(local_50 + 0x78) + 0x28))
                        (*(longlong **)(local_50 + 0x78));
      if (iVar3 == 1) {
        uVar6 = (**(code **)(**(longlong **)(local_50 + 0x78) + 0x30))
                          (*(longlong **)(local_50 + 0x78),0);
        cVar2 = FUN_01cd4050(uVar6);
        if (cVar2 != '\0') {
          local_48 = (**(code **)(**(longlong **)(local_50 + 0x78) + 0x30))
                               (*(longlong **)(local_50 + 0x78),0);
          local_60 = *(longlong *)(param_1 + 0x1058);
          local_28 = 0.0;
          local_30 = (*(double *)(local_48 + 0xd0) - *(double *)(local_48 + 200)) -
                     (*(double *)(local_48 + 0xc0) - *(double *)(local_48 + 0xb8));
          local_38 = *(double *)(local_48 + 0xd0) - *(double *)(local_48 + 0xc0);
          local_40 = *(double *)(local_48 + 0xc0) - *(double *)(local_48 + 0xb8);
          iVar3 = FUN_0040c770(local_38 / local_40);
          iVar4 = FUN_0040c770(local_28 / local_40);
          iVar5 = FUN_0040c770(local_30 / local_40);
          FUN_0068e6f0(local_60,(ulonglong)(uint)(iVar3 * 2) * 5,(ulonglong)(uint)(iVar4 * 2) * 5,
                       (ulonglong)(uint)(iVar5 * 2) * 5);
          FUN_0068e9b0(local_60,1);
          *(undefined2 *)(local_60 + 0x4a8) = *(undefined2 *)(local_60 + 0x4a0);
          *(undefined2 *)(local_60 + 0x4aa) = *(undefined2 *)(local_60 + 0x4a0);
          FUN_0064e700(*(undefined8 *)(param_1 + 0x1058));
        }
      }
    }
  }
LAB_01a8a172:
  FUN_0064e6f0(*(undefined8 *)(param_1 + 0x1060));
  if (*(longlong *)(param_1 + 0x798) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
    iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (iVar3 == 1) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
      uVar6 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
      local_68 = FUN_004113f0(uVar6,&DAT_01cdd500);
      if (*(char *)(local_68 + 0x58) != '\x05') {
        iVar3 = (**(code **)(**(longlong **)(local_68 + 0x70) + 0x28))
                          (*(longlong **)(local_68 + 0x70));
        if (iVar3 == 1) {
          uVar6 = (**(code **)(**(longlong **)(local_68 + 0x70) + 0x30))
                            (*(longlong **)(local_68 + 0x70),0);
          cVar2 = FUN_01cd4050(uVar6);
          if (cVar2 != '\0') {
            local_48 = (**(code **)(**(longlong **)(local_68 + 0x70) + 0x30))
                                 (*(longlong **)(local_68 + 0x70),0);
            local_70 = *(longlong *)(param_1 + 0x1060);
            local_28 = 0.0;
            local_30 = (*(double *)(local_48 + 0xd0) - *(double *)(local_48 + 200)) -
                       (*(double *)(local_48 + 0xc0) - *(double *)(local_48 + 0xb8));
            local_38 = *(double *)(local_48 + 0xb8) - *(double *)(local_48 + 200);
            local_40 = *(double *)(local_48 + 0xc0) - *(double *)(local_48 + 0xb8);
            iVar3 = FUN_0040c770(local_38 / local_40);
            iVar4 = FUN_0040c770(local_28 / local_40);
            iVar5 = FUN_0040c770(local_30 / local_40);
            FUN_0068e6f0(local_70,(ulonglong)(uint)(iVar3 * 2) * 5,(ulonglong)(uint)(iVar4 * 2) * 5,
                         (ulonglong)(uint)(iVar5 * 2) * 5);
            FUN_0068e9b0(local_70,1);
            *(undefined2 *)(local_70 + 0x4a8) = *(undefined2 *)(local_70 + 0x4a0);
            *(undefined2 *)(local_70 + 0x4aa) = *(undefined2 *)(local_70 + 0x4a0);
            FUN_0064e700(*(undefined8 *)(param_1 + 0x1060));
          }
        }
      }
    }
  }
  return;
}

