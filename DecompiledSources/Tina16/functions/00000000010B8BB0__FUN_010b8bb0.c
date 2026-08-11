/* Ghidra address: 010b8bb0 */
/* Ghidra symbol: FUN_010b8bb0 */


undefined1 FUN_010b8bb0(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  double local_38;
  double local_30;
  char local_22;
  undefined1 local_21;
  longlong *local_20;
  
  local_40 = auStack_78;
  local_50 = 0;
  local_48 = 0;
  local_21 = 0;
  local_20 = (longlong *)FUN_007fc180(&PTR_FUN_010b59b8,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_00b90440(local_20[0xdc],(double)param_1[0xb] * 100.0);
  FUN_00b90440(local_20[0xdd],(double)param_1[0xc] * 100.0);
  *(int *)(local_20 + 0xf3) = (int)param_1[0xd];
  FUN_00c5a4c0(local_20[0xe0],(longlong)(char)param_1[0x10]);
  *(undefined4 *)((longlong)local_20 + 0x79c) = *(undefined4 *)((longlong)param_1 + 0x6c);
  FUN_004169a0(&local_48,(longlong)param_1 + 0x82);
  FUN_0064de00(local_20[0xee],local_48);
  (**(code **)(*(longlong *)local_20[0xdf] + 0x128))
            ((longlong *)local_20[0xdf],*(char *)((longlong)param_1 + 0x81) == '\0');
  iVar2 = (**(code **)(*local_20 + 0x2d0))(local_20);
  if (iVar2 == 1) {
    local_21 = 1;
    local_30 = (double)FUN_00b90090(local_20[0xdc]);
    local_30 = local_30 / 100.0;
    local_38 = (double)FUN_00b90090(local_20[0xdd]);
    local_38 = local_38 / 100.0;
    FUN_0064dd90(local_20[0xee],&local_50);
    FUN_00416910((longlong)param_1 + 0x82,local_50,0xff);
    local_22 = (char)param_1[1];
    (**(code **)(*param_1 + 0xa8))(param_1,param_2);
    param_1[0xb] = (longlong)local_30;
    param_1[0xc] = (longlong)local_38;
    *(int *)(param_1 + 0xd) = (int)local_20[0xf3];
    uVar1 = FUN_00c5a450(local_20[0xe0]);
    *(undefined1 *)(param_1 + 0x10) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)local_20 + 0x79c);
    if (local_22 != '\0') {
      (**(code **)(*param_1 + 0xa0))(param_1,param_2);
    }
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_50);
  FUN_00414480(&local_48);
  return local_21;
}

