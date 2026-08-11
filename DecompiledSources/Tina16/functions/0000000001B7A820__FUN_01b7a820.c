/* Ghidra address: 01b7a820 */
/* Ghidra symbol: FUN_01b7a820 */


void FUN_01b7a820(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00416cd0(local_20,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01b7ab74,L"TINA.INI");
  uVar1 = FUN_005da0f0(&PTR_FUN_005d5a90,1,local_20[0]);
  *(undefined8 *)(param_1 + 0x800) = uVar1;
  if (*PTR_DAT_02002480 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x768) + 0x268))(*(longlong **)(param_1 + 0x768),1);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x770) + 0x268))(*(longlong **)(param_1 + 0x770),1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x778) + 0x268))
            (*(longlong **)(param_1 + 0x778),*PTR_DAT_02001560);
  FUN_0074b490(*(undefined8 *)(param_1 + 0x6d0),*PTR_DAT_02002de8);
  if (*PTR_DAT_020033c0 == '\x01') {
    FUN_0074b490(*(undefined8 *)(param_1 + 0x6c8),0);
  }
  else {
    FUN_0074b490(*(undefined8 *)(param_1 + 0x6c8),1);
  }
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),*(undefined8 *)PTR_DAT_020031c8);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),*(undefined8 *)PTR_DAT_020034b8);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x708),*(undefined8 *)PTR_DAT_02001ae0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x718),*(undefined8 *)PTR_DAT_02005330);
  FUN_01b7aca0(param_1,*(undefined8 *)PTR_DAT_02001b00);
  FUN_01b7b890(param_1);
  FUN_0074b490(*(undefined8 *)(param_1 + 0x7b8),*PTR_DAT_02005700);
  (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x268))
            (*(longlong **)(param_1 + 0x7c0),*PTR_DAT_02002038);
  (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x268))
            (*(longlong **)(param_1 + 0x7d8),*PTR_DAT_020048d0);
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0x268))
            (*(longlong **)(param_1 + 0x748),*PTR_DAT_020045f0);
  (**(code **)(**(longlong **)(param_1 + 0x750) + 0x268))
            (*(longlong **)(param_1 + 0x750),*PTR_DAT_020050f8);
  (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))
            (*(longlong **)(param_1 + 0x758),*PTR_DAT_02001798 == '\0');
  (**(code **)(**(longlong **)(param_1 + 0x788) + 0x268))
            (*(longlong **)(param_1 + 0x788),*PTR_DAT_020041d0);
  FUN_00c5a4c0(*(undefined8 *)(param_1 + 0x7a0),
               (longlong)*(int *)PTR_DAT_02002718 / 60000 & 0xffffffff);
  FUN_00c5a4c0(*(undefined8 *)(param_1 + 0x7f0),*(undefined4 *)PTR_DAT_02003b90);
  (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x268))
            (*(longlong **)(param_1 + 0x7e8),*PTR_DAT_02003180 == '\0');
  (**(code **)(**(longlong **)(param_1 + 0x780) + 0x268))
            (*(longlong **)(param_1 + 0x780),*PTR_DAT_02005c00);
  FUN_0064cf60(param_1,0x425);
  FUN_00414480(local_20);
  return;
}

