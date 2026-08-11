/* Ghidra address: 0140ebd0 */
/* Ghidra symbol: FUN_0140ebd0 */


void FUN_0140ebd0(longlong param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_0040d200(param_3,0x10,0);
  FUN_0040d200(param_2,0x18,0);
  if (*(char *)(param_1 + 0x780) == '\0') {
    uVar1 = FUN_0140ea00(param_1,*(undefined8 *)(param_1 + 0x730),*(undefined8 *)(param_1 + 0x6f8));
    param_2[1] = uVar1;
  }
  if (*(char *)(param_1 + 0x780) == '\0') {
    uVar1 = FUN_0140ea00(param_1,*(undefined8 *)(param_1 + 0x738),*(undefined8 *)(param_1 + 0x700));
    param_2[2] = uVar1;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x7b0);
  param_2[4] = *(undefined4 *)(param_1 + 0x7c0);
  param_2[5] = *(undefined4 *)(param_1 + 0x7c4);
  param_2[3] = *(undefined4 *)(param_1 + 0x7bc);
  if ((int)param_2[2] < (int)param_2[1]) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),&local_28);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x700),&local_30);
    FUN_00416cd0(local_20,4,local_28,L" exceeds ",local_30,&DAT_0140f09c);
    FUN_0140e8d0(param_1,local_20[0]);
  }
  if (*(char *)(param_1 + 0x780) == '\0') {
    iVar2 = FUN_0140ea00(param_1,*(undefined8 *)(param_1 + 0x740),*(undefined8 *)(param_1 + 0x720));
    *param_3 = iVar2;
  }
  if (*(char *)(param_1 + 0x780) == '\0') {
    iVar2 = FUN_0140ea00(param_1,*(undefined8 *)(param_1 + 0x748),*(undefined8 *)(param_1 + 0x728));
    param_3[1] = iVar2;
  }
  uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x718));
  *(undefined8 *)(param_3 + 2) = uVar3;
  if (param_3[1] < *param_3) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),&local_40);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x728),&local_48);
    FUN_00416cd0(&local_38,4,local_40,L" exceeds ",local_48,&DAT_0140f09c);
    FUN_0140e8d0(param_1,local_38);
  }
  if ((int)(uint)*(ushort *)(param_1 + 0x788) < (int)param_2[2]) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x700),&local_58);
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_68,PTR_PTR_02005488);
    FUN_00b8e650(uVar3,&local_60,L"HDLStrings.Msg_PsgExceed",local_68);
    FUN_00416cd0(&local_50,3,local_58,&DAT_0140f0ac,local_60);
    FUN_0140e8d0(param_1,local_50);
  }
  if ((int)(uint)*(ushort *)(param_1 + 0x788) < param_3[1]) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x728),&local_78);
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_88,PTR_PTR_02005488);
    FUN_00b8e650(uVar3,&local_80,L"HDLStrings.Msg_PsgExceed",local_88);
    FUN_00416cd0(&local_70,3,local_78,&DAT_0140f0ac,local_80);
    FUN_0140e8d0(param_1,local_70);
  }
  FUN_00414560(&local_88,2);
  FUN_00414560(&local_78,2);
  FUN_00414560(&local_68,2);
  FUN_00414560(&local_58,8);
  return;
}

