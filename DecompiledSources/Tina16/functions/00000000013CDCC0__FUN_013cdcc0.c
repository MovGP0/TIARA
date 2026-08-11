/* Ghidra address: 013cdcc0 */
/* Ghidra symbol: FUN_013cdcc0 */


void FUN_013cdcc0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_70;
  undefined8 local_60 [2];
  longlong local_50;
  uint local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_80 = auStack_d8;
  local_88 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_60[0] = 0;
  local_28 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_20 = 0;
  FUN_013d05b0(param_1);
  local_48 = (uint)(*PTR_DAT_02005258 != '\0');
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x2b0))(*(longlong **)(param_1 + 0x778));
  if (iVar4 != 1) {
code_r0x013ce2c3:
    if (local_20 != 0) {
      FUN_00410f20(local_20);
    }
    if (local_28 != 0) {
      FUN_00410f20(local_28);
    }
    goto LAB_013ce2ff;
  }
  local_44 = 0;
  while (cVar3 = FUN_0068bca0(*(undefined8 *)(param_1 + 0x778),local_44), cVar3 == '\0') {
    local_44 = local_44 + 1;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,local_44);
  FUN_00414480(&local_40);
  local_50 = FUN_00f211b0(*(undefined8 *)(*(longlong *)(param_1 + 0x900) + 0x300),local_38);
  if (((local_50 == 0) || (*(char *)(*(longlong *)(local_50 + 8) + 0x13) == '\0')) &&
     ((local_50 != 0 ||
      ((cVar3 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))
                          (*(longlong **)(param_1 + 0x728)), cVar3 == '\0' ||
       (*(int *)(*(longlong *)(param_1 + 0x870) + 0x4a8) != 1)))))) {
    if ((local_50 == 0) ||
       ((local_50 != 0 && (*(char *)(*(longlong *)(local_50 + 8) + 0x10) != '\0')))) {
      if (local_50 != 0) {
        if (*(char *)(*(longlong *)(local_50 + 8) + 0x11) == '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x750) + 0x268))(*(longlong **)(param_1 + 0x750),0)
          ;
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x750) + 0x268))(*(longlong **)(param_1 + 0x750),1)
          ;
        }
      }
      if (local_50 == 0) {
        lVar5 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x30))
                          (*(longlong **)(param_1 + 0x878),0);
        if (*(char *)(lVar5 + 0x2b) == '\0') {
          local_b8 = *(undefined8 *)PTR_DAT_02001af8;
          local_b0 = &DAT_013ce418;
          FUN_00416cd0(&local_38,4,local_38,&DAT_013ce408);
        }
        else if (*(char *)(lVar5 + 0x2b) == '\x01') {
          FUN_00416ad0(&local_38,&DAT_013ce428);
        }
      }
      else {
        plVar1 = *(longlong **)(*(longlong *)(local_50 + 8) + 0x18);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,0);
        if (*(char *)(*(longlong *)(local_50 + 8) + 0x11) != '\0') {
          plVar1 = *(longlong **)(*(longlong *)(local_50 + 8) + 0x20);
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_40,0);
        }
      }
      if ((local_50 == 0) ||
         (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))
                            (*(longlong **)(param_1 + 0x728)), cVar3 != '\0')) {
        FUN_013cd080(param_1,*(undefined8 *)(param_1 + 0x950),local_38);
      }
      else {
        FUN_013cd080(param_1,*(undefined8 *)(param_1 + 0x700),local_38);
      }
      if ((local_50 != 0) && (*(char *)(*(longlong *)(local_50 + 8) + 0x11) != '\0')) {
        FUN_013cd080(param_1,*(undefined8 *)(param_1 + 0x748),local_40);
      }
    }
    else {
      if ((local_50 == 0) || (*(char *)(*(longlong *)(local_50 + 8) + 0x10) != '\0'))
      goto code_r0x013ce2c3;
      local_b8 = CONCAT71(local_b8._1_7_,1);
      FUN_013ce430(param_1,local_50,0,1);
    }
  }
  else {
    if ((local_50 != 0) && (*(char *)(*(longlong *)(local_50 + 8) + 0x13) != '\0')) {
      *(undefined1 *)(param_1 + 0x932) = 1;
      (**(code **)(**(longlong **)(param_1 + 0x848) + 0x128))(*(longlong **)(param_1 + 0x848),1);
      (**(code **)(**(longlong **)(param_1 + 0x728) + 0x268))(*(longlong **)(param_1 + 0x728),1);
      FUN_0074b490(*(undefined8 *)(param_1 + 0x870),1);
      *(undefined1 *)(param_1 + 0x932) = 0;
    }
    if (local_50 == 0) {
      FUN_00416ba0(&local_88,local_38,L" added to the post processor code");
      FUN_0072d440(local_88,2,4,0);
    }
    FUN_00414ad0(param_1 + 0x8b0,local_38);
    if (local_50 == 0) {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x848) + 0x4e8);
LAB_013cdfb7:
      local_b8 = uVar2;
      local_b0 = (undefined *)CONCAT71(local_b0._1_7_,*(undefined1 *)(param_1 + 0x93c));
      local_a8 = *(undefined8 *)(*(longlong *)(param_1 + 0x8e0) + 0xe8);
      local_a0 = *(undefined8 *)(param_1 + 0x8b0);
      local_98 = 1;
      local_70 = local_b8;
      local_20 = FUN_013c6750(*(undefined8 *)(param_1 + 0x8f8),local_28,local_48,1);
    }
    else {
      local_70 = *(undefined8 *)(*(longlong *)(local_50 + 8) + 0x18);
      uVar2 = local_70;
      if (*(char *)(*(longlong *)(local_50 + 8) + 0x13) == '\0') goto LAB_013cdfb7;
      local_20 = FUN_013ce7e0(param_1,local_70);
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x848) + 0x4e8);
    (**(code **)(*plVar1 + 0x90))(plVar1);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x848) + 0x4e8);
    (**(code **)(*plVar1 + 0x88))(plVar1,local_20);
  }
  FUN_013ce330(0,local_80);
LAB_013ce2ff:
  FUN_00414480(&local_88);
  FUN_00414480(local_60);
  FUN_00414560(&local_40,3);
  return;
}

