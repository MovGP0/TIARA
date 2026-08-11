/* Ghidra address: 00d3d9d0 */
/* Ghidra symbol: FUN_00d3d9d0 */


void FUN_00d3d9d0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_e8 [20];
  undefined4 local_d4;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  int local_30;
  int iStack_2c;
  
  if ((*(char *)((longlong)param_1 + 0x2a) == '\0') ||
     (cVar1 = FUN_00788df0(param_1), cVar1 == '\0')) {
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  cVar1 = FUN_00787c60(param_1[3]);
  if (cVar1 == '\0') {
    uVar2 = FUN_00788400(param_1,param_2);
    *(undefined8 *)(param_2 + 0x18) = uVar2;
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0xb5) = 1;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  if (*(int *)(param_2 + 8) != 7) {
    if (*(int *)(param_2 + 8) != 6) {
      uVar2 = FUN_00788400(param_1,param_2);
      *(undefined8 *)(param_2 + 0x18) = uVar2;
      goto LAB_00d3df46;
    }
    cVar1 = FUN_00d3cf70(param_1);
    if (cVar1 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0xac) = 0;
      *(undefined1 *)((longlong)param_1 + 0xb5) = 0;
      uVar2 = FUN_00788400(param_1,param_2);
      *(undefined8 *)(param_2 + 0x18) = uVar2;
      *(undefined1 *)((longlong)param_1 + 0xb6) = 1;
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0xae) = 0;
    thunk_FUN_03cc0d62(&local_30);
    param_1[0x12] = CONCAT44(iStack_2c,local_30);
    FUN_00d3c6c0(param_1,&local_c8);
    *(int *)((longlong)param_1 + 0x8c) = local_30 - local_c8;
    FUN_00d3c440(param_1,local_e8);
    *(undefined4 *)(param_1 + 0x11) = local_d4;
    FUN_00d3c6c0(param_1,local_80);
    cVar1 = FUN_00423210(local_80,&local_30);
    if (cVar1 == '\0') {
      FUN_00d3c3f0(param_1,local_90);
      cVar1 = FUN_00423210(local_90,&local_30);
      if (cVar1 == '\0') {
        FUN_00d3c9f0(param_1,local_a0);
        cVar1 = FUN_00423210(local_a0,&local_30);
        if (cVar1 == '\0') {
          *(undefined1 *)((longlong)param_1 + 0xad) = 0;
          FUN_00d3c6c0(param_1,&local_c8);
          if (local_c0 < (int)param_1[0x12]) {
            *(undefined1 *)((longlong)param_1 + 0xad) = 9;
          }
          FUN_00d3c6c0(param_1,&local_c8);
          if ((int)param_1[0x12] < local_c0) {
            *(undefined1 *)((longlong)param_1 + 0xad) = 8;
          }
          FUN_00d3d430(param_1);
          uVar2 = FUN_00788400(param_1,param_2);
          *(undefined8 *)(param_2 + 0x18) = uVar2;
          (**(code **)(*param_1 + 0xb8))(param_1);
          goto LAB_00d3df20;
        }
      }
      FUN_00d3c3f0(param_1,local_b0);
      cVar1 = FUN_00423210(local_b0,&local_30);
      if (cVar1 == '\0') {
        *(undefined1 *)((longlong)param_1 + 0xb2) = 10;
        *(undefined1 *)((longlong)param_1 + 0xb3) = 0x10;
        *(undefined1 *)((longlong)param_1 + 0xad) = 5;
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0xb2) = 0xc;
        *(undefined1 *)((longlong)param_1 + 0xb3) = 0xe;
        *(undefined1 *)((longlong)param_1 + 0xad) = 4;
      }
      (**(code **)(*param_1 + 0xa0))(param_1,0);
      FUN_00d3d3f0(param_1);
      uVar2 = FUN_00788400(param_1,param_2);
      *(undefined8 *)(param_2 + 0x18) = uVar2;
      *(undefined1 *)((longlong)param_1 + 0xb2) = 10;
      *(undefined1 *)((longlong)param_1 + 0xb3) = 0xe;
      (**(code **)(*param_1 + 0xb8))(param_1);
      (**(code **)(*param_1 + 0xa0))(param_1,0);
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0xb4) = 0x18;
      (**(code **)(*param_1 + 0xa0))(param_1,0);
      *(undefined1 *)((longlong)param_1 + 0xac) = 1;
      FUN_00d3d470(param_1);
      uVar2 = FUN_00788400(param_1,param_2);
      *(undefined8 *)(param_2 + 0x18) = uVar2;
      (**(code **)(*param_1 + 0xb8))(param_1);
      *(undefined1 *)((longlong)param_1 + 0xb4) = 0x16;
      *(undefined1 *)((longlong)param_1 + 0xac) = 0;
      (**(code **)(*param_1 + 0xa0))(param_1,0);
    }
LAB_00d3df20:
    *(undefined1 *)((longlong)param_1 + 0xac) = 0;
    (**(code **)(*param_1 + 0xa0))(param_1,0);
    goto LAB_00d3df46;
  }
  cVar1 = FUN_00d3cfd0(param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xac) = 0;
    *(undefined1 *)((longlong)param_1 + 0xb5) = 0;
    uVar2 = FUN_00788400(param_1,param_2);
    *(undefined8 *)(param_2 + 0x18) = uVar2;
    *(undefined1 *)((longlong)param_1 + 0xb6) = 1;
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0xae) = 1;
  thunk_FUN_03cc0d62(&local_30);
  param_1[0x12] = CONCAT44(iStack_2c,local_30);
  FUN_00d3cd00(param_1,&local_c8);
  *(int *)((longlong)param_1 + 0x8c) = iStack_2c - local_c4;
  FUN_00d3cb70(param_1,local_e8);
  *(undefined4 *)(param_1 + 0x11) = local_d4;
  FUN_00d3cd00(param_1,local_40);
  cVar1 = FUN_00423210(local_40,&local_30);
  if (cVar1 == '\0') {
    FUN_00d3cee0(param_1,local_50);
    cVar1 = FUN_00423210(local_50,&local_30);
    if (cVar1 == '\0') {
      FUN_00d3c990(param_1,local_60);
      cVar1 = FUN_00423210(local_60,&local_30);
      if (cVar1 == '\0') {
        *(undefined1 *)((longlong)param_1 + 0xad) = 0;
        FUN_00d3cd00(param_1,&local_c8);
        if (local_bc < *(int *)((longlong)param_1 + 0x94)) {
          *(undefined1 *)((longlong)param_1 + 0xad) = 7;
        }
        FUN_00d3cd00(param_1,&local_c8);
        if (*(int *)((longlong)param_1 + 0x94) < local_c4) {
          *(undefined1 *)((longlong)param_1 + 0xad) = 6;
        }
        (**(code **)(*param_1 + 0xa8))(param_1,0);
        FUN_00d3d430(param_1);
        uVar2 = FUN_00788400(param_1,param_2);
        *(undefined8 *)(param_2 + 0x18) = uVar2;
        (**(code **)(*param_1 + 0xb8))(param_1);
        goto LAB_00d3dcaf;
      }
    }
    FUN_00d3cee0(param_1,local_70);
    cVar1 = FUN_00423210(local_70,&local_30);
    if (cVar1 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0xad) = 3;
      *(undefined1 *)(param_1 + 0x16) = 8;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0xad) = 2;
      *(undefined1 *)((longlong)param_1 + 0xaf) = 4;
    }
    (**(code **)(*param_1 + 0xa8))(param_1,0);
    FUN_00d3d3f0(param_1);
    uVar2 = FUN_00788400(param_1,param_2);
    *(undefined8 *)(param_2 + 0x18) = uVar2;
    (**(code **)(*param_1 + 0xb8))(param_1);
    *(undefined1 *)(param_1 + 0x16) = 6;
    *(undefined1 *)((longlong)param_1 + 0xaf) = 2;
    (**(code **)(*param_1 + 0xa8))(param_1,0);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0xb1) = 0x1c;
    FUN_00d3d470(param_1);
    (**(code **)(*param_1 + 0xa8))(param_1,0);
    *(undefined1 *)((longlong)param_1 + 0xac) = 1;
    *(undefined1 *)((longlong)param_1 + 0xb6) = 0;
    uVar2 = FUN_00788400(param_1,param_2);
    *(undefined8 *)(param_2 + 0x18) = uVar2;
    *(undefined1 *)((longlong)param_1 + 0xb6) = 0;
    (**(code **)(*param_1 + 0xb8))(param_1);
    *(undefined1 *)((longlong)param_1 + 0xb1) = 0x1a;
    *(undefined1 *)((longlong)param_1 + 0xac) = 0;
    (**(code **)(*param_1 + 0xa8))(param_1,0);
  }
LAB_00d3dcaf:
  (**(code **)(*param_1 + 0xa8))(param_1,0);
LAB_00d3df46:
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)((longlong)param_1 + 0xb6) = 1;
  return;
}

