/* Ghidra address: 00c69760 */
/* Ghidra symbol: FUN_00c69760 */


void FUN_00c69760(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int local_44;
  undefined8 local_40;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  longlong *local_20;
  
  local_50 = auStack_a8;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_34 = 0;
  local_28 = *(undefined8 *)(param_2 + 8);
  local_2c = thunk_FUN_03fe6811(local_28,0xffffffff,0,0);
  local_20 = (longlong *)FUN_007fc180(&PTR_FUN_00c66d78,1,*(undefined8 *)PTR_DAT_02004030);
  local_44 = 0;
  iVar2 = local_2c;
  if (-1 < local_2c + -1) {
    do {
      local_30 = thunk_FUN_03fe6811(local_28,local_44,0,0);
      local_40 = FUN_00442b60(local_30 + 2);
      thunk_FUN_03fe6811(local_28,local_44);
      FUN_004167d0(&local_58,local_40);
      FUN_0064de00(local_20[0xe9],local_58);
      FUN_00c65ce0(*(undefined8 *)(local_20[0xe9] + 0x4f0));
      (**(code **)(*(longlong *)local_20[0xec] + 0x268))((longlong *)local_20[0xec],0);
      FUN_004167d0(&local_68,local_40);
      FUN_00441920(&local_60,local_68);
      FUN_0064de00(local_20[0xda],local_60);
      FUN_004167d0(&local_78,local_40);
      FUN_00441920(&local_70,local_78);
      FUN_0064de00(local_20[0xdc],local_70);
      FUN_0064de00(local_20[0xde],L"Shell32.dll");
      FUN_00c67db0(local_20,param_1);
      FUN_004167d0(&local_80,local_40);
      cVar1 = FUN_00b96de0(local_80);
      if (cVar1 == '\0') {
        FUN_008483b0(local_20[0xe0],0);
        FUN_008483b0(local_20[0xe2],0);
      }
      else {
        FUN_008483b0(local_20[0xe0],3);
        FUN_00848960(local_20[0xe0],3);
        FUN_008483b0(local_20[0xe2],4);
        FUN_00848960(local_20[0xe2],4);
      }
      local_20[0xee] = *(longlong *)(param_1 + 0x6e8);
      FUN_0080e820(*(undefined8 *)PTR_DAT_02004030);
      local_20[0xef] = 0;
      (**(code **)(*local_20 + 0x2d0))(local_20);
      FUN_00442c30(local_40);
      local_44 = local_44 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(local_20);
  FUN_00c6ffe0(*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(param_1 + 0x6d8));
  FUN_00414560(&local_80,6);
  return;
}

