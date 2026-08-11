/* Ghidra address: 011a46d0 */
/* Ghidra symbol: FUN_011a46d0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011a46d0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar1 = (**(code **)(*(longlong *)param_1[0xe2] + 0x260))((longlong *)param_1[0xe2]);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x8407) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x8407) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x4203a) = 0;
  FUN_00414480(&DAT_020c6308);
  _DAT_020c6310 = *(undefined4 *)(*(longlong *)PTR_DAT_02001d60 + 0x718);
  FUN_0043f750(local_20,*(undefined4 *)(*(longlong *)PTR_DAT_02003af0 + 0x764));
  FUN_0064de00(param_1[0xda],local_20[0]);
  *(undefined1 *)((longlong)param_1 + 0x42039) = 1;
  if ((char)param_1[0x8407] == '\0') {
    FUN_0064de00(param_1[0x103],*(undefined8 *)(*(longlong *)PTR_DAT_02003af0 + 0x7a8));
  }
  else {
    FUN_0064de00(param_1[0x103],*(undefined8 *)(*(longlong *)PTR_DAT_02003af0 + 0x7a0));
  }
  (**(code **)(*param_1 + 0x118))(param_1,0);
  DAT_020c6328 = param_1[0xe6];
  DAT_020c6330 = param_1[0xf2];
  DAT_020c6338 = param_1[0xf3];
  _DAT_020c6340 = param_1[0xfb];
  _DAT_020c6348 = param_1[0xfc];
  _DAT_020c6350 = param_1[0x100];
  _DAT_020c6358 = param_1[0x101];
  DAT_020c6378 = param_1[0xe7];
  DAT_020c6380 = param_1[0xf1];
  _DAT_020c6388 = param_1[0xf4];
  _DAT_020c6390 = param_1[0xfa];
  _DAT_020c6398 = param_1[0xfd];
  _DAT_020c63a0 = param_1[0xff];
  DAT_020c63c8 = param_1[0xe8];
  DAT_020c63d0 = param_1[0xf0];
  _DAT_020c63d8 = param_1[0xf5];
  _DAT_020c63e0 = param_1[0xf9];
  _DAT_020c63e8 = param_1[0xfe];
  DAT_020c6418 = param_1[0xe9];
  DAT_020c6420 = param_1[0xef];
  _DAT_020c6428 = param_1[0xf6];
  _DAT_020c6430 = param_1[0xf8];
  DAT_020c6468 = param_1[0xea];
  DAT_020c6470 = param_1[0xee];
  _DAT_020c6478 = param_1[0xf7];
  DAT_020c64b8 = param_1[0xeb];
  DAT_020c64c0 = param_1[0xed];
  DAT_020c6508 = param_1[0xec];
  FUN_0119a360();
  if (*PTR_DAT_02004418 == '\x01') {
    *(bool *)(param_1 + 0x8407) = (char)param_1[0x8407] == '\0';
    FUN_011a4d50(param_1,param_2);
    *(bool *)(param_1 + 0x8407) = (char)param_1[0x8407] == '\0';
    FUN_011a4d50(param_1,param_2);
    FUN_00805990(*(undefined8 *)PTR_DAT_020040c0);
  }
  *(undefined4 *)PTR_DAT_02004708 = 4000;
  FUN_00414480(local_20);
  return;
}

