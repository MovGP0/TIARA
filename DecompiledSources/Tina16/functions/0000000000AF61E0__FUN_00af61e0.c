/* Ghidra address: 00af61e0 */
/* Ghidra symbol: FUN_00af61e0 */


longlong * FUN_00af61e0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  iVar2 = 0;
  if (param_4 != 0) {
    iVar2 = *(int *)(param_4 + -4);
  }
  if (iVar2 < 1) {
    FUN_00414b50(&local_30,*(undefined8 *)(param_1 + 0x8b8));
  }
  else {
    FUN_00414b50(&local_30,param_4);
  }
  uVar3 = FUN_00414480(local_20);
  uVar4 = FUN_00414480(&local_28);
  FUN_00a28910(param_3,uVar3,uVar4);
  uVar3 = FUN_00414480(&local_38);
  uVar4 = FUN_00414480(&local_40);
  FUN_00a28910(local_30,uVar3,uVar4);
  iVar2 = 0;
  if (local_38 != 0) {
    iVar2 = *(int *)(local_38 + -4);
  }
  if (0 < iVar2) {
    iVar2 = FUN_0043e210(local_38,L"file");
    if (iVar2 != 0) {
      FUN_00414ad0(param_2,param_3);
      iVar2 = FUN_004170c0(&DAT_00af66e8,*param_2,1);
      if (0 < iVar2) {
        FUN_00a28b80(local_50,*param_2);
        FUN_00414ad0(param_2,local_50[0]);
      }
      cVar1 = FUN_00a27c70(*param_2);
      if (cVar1 == '\0') {
        iVar2 = FUN_004170c0(&DAT_00af66f8,*param_2,1);
        if (iVar2 == 1) {
          FUN_00416cd0(param_2,3,local_38,&DAT_00af670c,*param_2);
        }
        else {
          FUN_00a273c0(&local_60,local_30);
          FUN_00a275d0(&local_58,local_60,*param_2);
          FUN_00414ad0(param_2,local_58);
        }
      }
      goto LAB_00af6632;
    }
  }
  iVar2 = 0;
  if (local_20[0] != 0) {
    iVar2 = *(int *)(local_20[0] + -4);
  }
  if (0 < iVar2) {
    iVar2 = FUN_0043e210(local_20[0],L"file");
    if (iVar2 != 0) {
      FUN_00414ad0(param_2,param_3);
      goto LAB_00af6632;
    }
  }
  FUN_00a29460(param_2,param_3,*(undefined8 *)(param_1 + 0x510));
  iVar2 = 0;
  if (*param_2 != 0) {
    iVar2 = *(int *)(*param_2 + -4);
  }
  if ((iVar2 < 1) || (*(short *)*param_2 != 0x5c)) {
    cVar1 = FUN_00a27c90(*param_2);
    if (cVar1 == '\0') {
      iVar2 = FUN_0043e420(*(undefined8 *)(param_1 + 0x780),L"DosPath");
      if (iVar2 != 0) {
        iVar2 = 0;
        if (*(longlong *)(param_1 + 0x780) != 0) {
          iVar2 = *(int *)(*(longlong *)(param_1 + 0x780) + -4);
        }
        if (iVar2 < 1) {
          iVar2 = 0;
          if (param_4 != 0) {
            iVar2 = *(int *)(param_4 + -4);
          }
          if (iVar2 < 1) {
            FUN_00a29300(&local_a8,*(undefined8 *)(param_1 + 0x8b8));
            FUN_00441640(&local_a0,local_a8);
            FUN_00416ad0(&local_a0,*param_2);
            FUN_00441b80(&local_98,local_a0);
            FUN_00414ad0(param_2,local_98);
          }
          else {
            FUN_00a29300(&local_90,param_4);
            FUN_00441640(&local_88,local_90);
            FUN_00416ad0(&local_88,*param_2);
            FUN_00441b80(&local_80,local_88);
            FUN_00414ad0(param_2,local_80);
          }
        }
        else {
          FUN_00a29300(&local_78,*(undefined8 *)(param_1 + 0x780));
          FUN_00a274a0(&local_70,local_78,*param_2);
          FUN_00414ad0(param_2,local_70);
        }
      }
    }
  }
  else {
    FUN_00441b80(&local_68,*param_2);
    FUN_00414ad0(param_2,local_68);
  }
LAB_00af6632:
  if (*(longlong *)(param_1 + 0x7b0) != 0) {
    (**(code **)(param_1 + 0x7b0))(*(undefined8 *)(param_1 + 0x7b8),param_1,param_2);
  }
  FUN_00414560(&local_a8,0xc);
  FUN_00414560(&local_40,5);
  return param_2;
}

