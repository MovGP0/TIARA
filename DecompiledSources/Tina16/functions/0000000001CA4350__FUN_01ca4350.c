/* Ghidra address: 01ca4350 */
/* Ghidra symbol: FUN_01ca4350 */


undefined1
FUN_01ca4350(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined8 local_res20;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong *local_30;
  undefined1 local_21;
  undefined8 local_20;
  undefined2 local_12;
  
  local_40 = auStack_98;
  local_50 = 0;
  local_48 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  local_12 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  local_21 = 0;
  local_20 = FUN_01bbc1a0(&DAT_01bb94f8,1);
  FUN_01bbc650(local_20,local_res10,0);
  FUN_015fcb30(&local_48,PTR_DAT_02004770);
  FUN_00414ad0(param_1 + 0x2740,local_48);
  FUN_00b96df0(*(undefined8 *)(param_1 + 0x2740));
  FUN_00416ba0(local_res18,*(undefined8 *)(param_1 + 0x2740),L"\\temp.cir");
  local_30 = (longlong *)FUN_007fc180(&PTR_FUN_01bbfee8,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_01bc17a0(local_30,local_20);
  iVar1 = (**(code **)(*local_30 + 0x2d0))(local_30);
  if (iVar1 == 1) {
    local_78 = local_30[0xe9];
    local_70 = (undefined4)local_30[0xe7];
    local_68 = local_res20;
    FUN_01bbf630(local_20,*local_res18,local_30[0xe6],local_30[0xe8]);
    FUN_0064dd90(local_30[0xe0],&local_50);
    FUN_00414ad0(param_5,local_50);
    local_21 = 1;
  }
  FUN_00410f20(local_30);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_12;
  FUN_00410f20(local_20);
  FUN_00414480(&local_50);
  FUN_00414480(&local_48);
  FUN_00414480(&local_res10);
  return local_21;
}

