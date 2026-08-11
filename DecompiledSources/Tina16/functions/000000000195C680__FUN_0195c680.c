/* Ghidra address: 0195c680 */
/* Ghidra symbol: FUN_0195c680 */


void FUN_0195c680(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  int local_3c;
  longlong *local_38;
  longlong local_30;
  
  local_70 = auStack_118;
  local_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = (longlong *)0x0;
  local_30 = (**(code **)(*param_1 + 0x118))(param_1);
  if (local_30 != 0) {
    FUN_019775b0(local_30,param_1);
  }
  if (param_1[0x3a] != 0) {
    iVar3 = FUN_004170c0(&DAT_0195ccec,param_1[0x3a],1);
    if (iVar3 != 0) {
      FUN_0195c1f0(param_1,param_1 + 0x3a);
    }
  }
  local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_0180d020(local_38,*(undefined8 *)(param_1[0x41] + 0x30),
               **(undefined2 **)(param_1[0x41] + 0x38));
  if ((*(longlong *)(param_1[0x41] + 0x30) != 0) &&
     (iVar3 = FUN_004170c0(&DAT_0195ccec,*(undefined8 *)(param_1[0x41] + 0x30),1), iVar3 != 0)) {
    iVar3 = (**(code **)(*local_38 + 0x28))(local_38);
    if (iVar3 == 0) {
      FUN_0195c1f0(param_1,param_1[0x41] + 0x30);
    }
    else {
      iVar3 = (**(code **)(*local_38 + 0x28))();
      local_3c = 0;
      if (-1 < iVar3 + -1) {
        do {
          (**(code **)(*local_38 + 0x18))(local_38,&local_48,local_3c);
          FUN_0195c1f0(param_1,&local_48);
          if (local_3c < 1) {
            FUN_00414ad0(param_1[0x41] + 0x30,local_48);
          }
          else {
            lVar1 = param_1[0x41];
            FUN_00416780(&local_78,**(undefined2 **)(lVar1 + 0x38));
            local_f8 = local_48;
            FUN_00416cd0(lVar1 + 0x30,3,*(undefined8 *)(lVar1 + 0x30),local_78);
          }
          local_3c = local_3c + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  if (*(longlong *)(param_1[0x41] + 0x20) != 0) {
    FUN_0180d020(local_38,*(undefined8 *)(param_1[0x41] + 0x20),
                 **(undefined2 **)(param_1[0x41] + 0x38));
    iVar3 = (**(code **)(*local_38 + 0x28))(local_38);
    if (iVar3 == 0) {
      FUN_0195c480(auStack_118,&local_90,*(undefined8 *)(param_1[0x41] + 0x20));
      FUN_00467e90(param_1[0x41] + 0x30,&local_90);
    }
    else {
      iVar3 = (**(code **)(*local_38 + 0x28))();
      local_3c = 0;
      if (-1 < iVar3 + -1) {
        do {
          if (local_3c < 1) {
            (**(code **)(*local_38 + 0x18))(local_38,&local_e8,local_3c);
            FUN_0195c480(auStack_118,&local_e0,local_e8);
            FUN_0046c3f0(&local_c8,&local_e0);
            FUN_00414ad0(param_1[0x41] + 0x30,local_c8);
          }
          else {
            lVar1 = param_1[0x41];
            FUN_00416780(&local_98,**(undefined2 **)(lVar1 + 0x38));
            (**(code **)(*local_38 + 0x18))(local_38,&local_c0,local_3c);
            FUN_0195c480(auStack_118,&local_b8,local_c0);
            FUN_0046c3f0(&local_a0,&local_b8);
            local_f8 = local_a0;
            FUN_00416cd0(param_1[0x41] + 0x30,3,*(undefined8 *)(lVar1 + 0x30),local_98);
          }
          local_3c = local_3c + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  FUN_00410f20(local_38);
  uVar4 = FUN_0041b800(&local_58);
  cVar2 = FUN_00452370(param_1,&DAT_0195ccf0,uVar4);
  if (cVar2 != '\0') {
    (**(code **)(*local_58 + 0x20))(local_58,&local_50,1);
    cVar2 = (**(code **)(*local_58 + 0x28))(local_58);
    if (cVar2 != '\0') {
      FUN_0195c1f0(param_1,&local_50);
    }
    if (local_50 != 0) {
      uVar4 = FUN_01872d10();
      FUN_01873140(uVar4,&local_50,local_58);
    }
  }
  FUN_00414480(&local_e8);
  FUN_00460ba0(&local_e0);
  FUN_00414560(&local_c8,2);
  FUN_00460ba0(&local_b8);
  FUN_00414560(&local_a0,2);
  FUN_00460ba0(&local_90);
  FUN_00414480(&local_78);
  FUN_0041b800(&local_58);
  FUN_00414560(&local_50,2);
  return;
}

