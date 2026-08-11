/* Ghidra address: 01c4c580 */
/* Ghidra symbol: FUN_01c4c580 */


void FUN_01c4c580(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30 [4];
  
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  (**(code **)(*(longlong *)*param_2 + 0x90))((longlong *)*param_2);
  *(undefined2 *)(*param_2 + 0x30) = 0x3d;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c8),local_30);
  if (local_30[0] != 0) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),&local_38);
    if (local_38 != 0) {
      dVar1 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6c8));
      dVar2 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6e0));
      FUN_00b8fd60(&local_48,(dVar1 + dVar2) / 2.0,*PTR_DAT_02005310,0,1);
      FUN_00416ba0(&local_40,L"V_in=",local_48);
      (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,local_40);
    }
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),&local_50);
  if (local_50 != 0) {
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6f8));
    FUN_00b8fd60(&local_60,uVar3,*PTR_DAT_02005310,0,1);
    FUN_00416ba0(&local_58,L"V_out=",local_60);
    (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,local_58);
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x710),&local_68);
  if (local_68 != 0) {
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x710));
    FUN_00b8fd60(&local_78,uVar3,*PTR_DAT_02005310,0,1);
    FUN_00416ba0(&local_70,L"I_out=",local_78);
    (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,local_70);
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x738),&local_80);
  if (local_80 != 0) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x750),&local_88);
    if (local_88 != 0) {
      dVar1 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x738));
      dVar2 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x750));
      FUN_00b8fd60(&local_98,(dVar1 + dVar2) / 2.0,*PTR_DAT_02005310,0,1);
      FUN_00416ba0(&local_90,L"F_sw=",local_98);
      (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,local_90);
    }
  }
  FUN_00414560(&local_98,2);
  FUN_00414560(&local_88,2);
  FUN_00414560(&local_78,2);
  FUN_00414480(&local_68);
  FUN_00414560(&local_60,2);
  FUN_00414480(&local_50);
  FUN_00414560(&local_48,2);
  FUN_00414560(&local_38,2);
  return;
}

