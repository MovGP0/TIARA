/* Ghidra address: 00fb0f90 */
/* Ghidra symbol: FUN_00fb0f90 */


void FUN_00fb0f90(longlong param_1)

{
  int iVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  int local_44;
  int local_40;
  int local_3c;
  double local_38;
  double local_30;
  double local_28;
  undefined8 local_20 [2];
  
  local_60 = auStack_d8;
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_20[0] = 0;
  local_40 = 0x100;
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))
            (*(longlong **)(param_1 + 0x6e0),*(undefined4 *)(param_1 + 0xa40));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0));
  if (iVar1 == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))(*(longlong **)(param_1 + 0x6e0),1);
  }
  local_28 = *(double *)(param_1 + 0xc10);
  FUN_00414480(local_20);
  FUN_00448450(local_20,local_28,PTR_DAT_02004830);
  FUN_00416ba0(&local_68,local_20[0],&DAT_00fb13bc);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x728),local_68);
  FUN_00414480(local_20);
  FUN_0043e130(&local_70,*(undefined8 *)(param_1 + 0xc20));
  iVar1 = FUN_004170c0(L"ATMEGA",local_70,1);
  if (iVar1 == 0) {
    FUN_0043e130(&local_78,*(undefined8 *)(param_1 + 0xc20));
    iVar1 = FUN_004170c0(&DAT_00fb13ec,local_78,1);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))
                        (*(longlong **)(param_1 + 0x6e0));
      local_44 = *(int *)(param_1 + 0x734 + (longlong)iVar1 * 4);
      *(undefined4 *)(param_1 + 0x774) = 5;
      goto LAB_00fb11ca;
    }
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0));
  local_44 = *(int *)(param_1 + 0x754 + (longlong)iVar1 * 4);
  *(undefined4 *)(param_1 + 0x774) = 7;
LAB_00fb11ca:
  local_3c = local_40 - *(int *)(param_1 + 0xa44);
  local_30 = (1.0 / local_28) * (double)local_3c * (double)local_44;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x700),local_30);
  local_b8 = 1;
  FUN_00b8fd60(&local_88,local_30,*PTR_DAT_02005310,0);
  FUN_00416ba0(&local_80,L"Time: ",local_88);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x708),local_80);
  FUN_00f61040(&local_90,*(undefined4 *)(param_1 + 0xa44));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_90);
  local_38 = (1.0 / local_28) * (double)local_40 * 1024.0;
  local_b8 = 1;
  FUN_00b8fd60(&local_a0,local_38,*PTR_DAT_02005310,0);
  FUN_00416ba0(&local_98,L"Time max: ",local_a0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_98);
  FUN_00414560(&local_a0,8);
  FUN_00414480(local_20);
  return;
}

