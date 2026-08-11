/* Ghidra address: 013ad8c0 */
/* Ghidra symbol: FUN_013ad8c0 */


undefined8 FUN_013ad8c0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_110;
  undefined8 local_108;
  undefined2 *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined2 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_110 = 0;
  local_d0 = 0;
  local_f8 = 0;
  local_100 = (undefined2 *)0x0;
  local_108 = 0;
  local_e0 = 0;
  local_e8 = (undefined2 *)0x0;
  local_f0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_88 = 0;
  local_98 = 0;
  local_a0 = (undefined2 *)0x0;
  local_a8 = 0;
  local_90 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_30 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_40 = 0;
  local_48 = (undefined2 *)0x0;
  local_50 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_00414480(param_1);
  for (iVar3 = 0; iVar1 = (**(code **)(*param_2 + 0x28))(param_2), iVar3 < iVar1; iVar3 = iVar3 + 1)
  {
    (**(code **)(*param_2 + 0x18))(param_2,&local_38,iVar3);
    FUN_0043ea00(&local_30,local_38);
    if (local_30 != 0) {
      (**(code **)(*param_2 + 0x18))(param_2,&local_48,iVar3);
      FUN_00416780(&local_50,*local_48);
      FUN_0043ea00(&local_40,local_50);
      iVar1 = FUN_00416db0(local_40,&DAT_013adee8);
      if (iVar1 != 0) {
        (**(code **)(*param_2 + 0x18))(param_2,&local_68,iVar3);
        FUN_0043e130(&local_60,local_68);
        FUN_0043ea00(&local_58,local_60);
        iVar1 = FUN_004170c0(L".SUBCKT",local_58,1);
        if (iVar1 != 0) break;
      }
    }
  }
  iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  if (iVar3 < iVar1) {
    (**(code **)(*param_2 + 0x18))(param_2,&local_80,iVar3);
    FUN_0043e130(&local_78,local_80);
    FUN_0043ea00(&local_70,local_78);
    FUN_00450070(&local_20,local_70,&DAT_013adf14,&DAT_013adf24,1);
    while( true ) {
      iVar3 = iVar3 + 1;
      iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
      if (iVar1 <= iVar3) break;
      (**(code **)(*param_2 + 0x18))(param_2,&local_d8,iVar3);
      FUN_0043ea00(&local_d0,local_d8);
      if (local_d0 != 0) {
        (**(code **)(*param_2 + 0x18))(param_2,&local_e8,iVar3);
        FUN_00416780(&local_f0,*local_e8);
        FUN_0043ea00(&local_e0,local_f0);
        iVar1 = FUN_00416db0(local_e0,&DAT_013adee8);
        if (iVar1 != 0) {
          (**(code **)(*param_2 + 0x18))(param_2,&local_100,iVar3);
          FUN_00416780(&local_108,*local_100);
          FUN_0043ea00(&local_f8,local_108);
          iVar1 = FUN_00416db0(local_f8,&DAT_013adf38);
          if (iVar1 != 0) break;
        }
      }
      (**(code **)(*param_2 + 0x18))(param_2,&local_90,iVar3);
      FUN_0043ea00(&local_88,local_90);
      if (local_88 != 0) {
        (**(code **)(*param_2 + 0x18))(param_2,&local_a0,iVar3);
        FUN_00416780(&local_a8,*local_a0);
        FUN_0043ea00(&local_98,local_a8);
        iVar1 = FUN_00416db0(local_98,&DAT_013adf38);
        if (iVar1 == 0) {
          (**(code **)(*param_2 + 0x18))(param_2,&local_c0,iVar3);
          FUN_0043e130(&local_b8,local_c0);
          FUN_0043ea00(&local_b0,local_b8);
          FUN_00450070(&local_28,local_b0,&DAT_013adf14,&DAT_013adf24,1);
          FUN_00416e20(&local_28,1,1);
          iVar1 = FUN_004170c0(&DAT_013adf48,local_28,1);
          if (0 < iVar1) {
            uVar2 = 0;
            if (local_28 != 0) {
              uVar2 = *(undefined4 *)(local_28 + -4);
            }
            FUN_00416e20(&local_28,iVar1,uVar2);
          }
          FUN_0043ea00(&local_c8,local_28);
          FUN_00414b50(&local_28,local_c8);
          FUN_00416cd0(&local_20,3,local_20,&DAT_013adf24,local_28);
        }
      }
    }
    iVar3 = FUN_004170c0(L"PARAMS:",local_20,1);
    if (0 < iVar3) {
      uVar2 = 0;
      if (local_20 != 0) {
        uVar2 = *(undefined4 *)(local_20 + -4);
      }
      FUN_00416dc0(&local_110,local_20,iVar3 + 7,uVar2);
      FUN_0043ea00(param_1,local_110);
    }
  }
  FUN_00414560(&local_110,0x1f);
  return param_1;
}

