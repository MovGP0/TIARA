/* Ghidra address: 005c02e0 */
/* Ghidra symbol: FUN_005c02e0 */


undefined8 FUN_005c02e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 *local_40;
  undefined1 local_38 [8];
  undefined1 local_30 [15];
  char local_21;
  undefined8 local_20 [2];
  
  local_40 = auStack_88;
  local_20[0] = 0;
  local_68 = &local_21;
  (**(code **)*param_1)(param_1,param_3,local_30,local_38);
  if (local_21 == '\x03') {
    FUN_00414480(local_20);
    FUN_0044a350(local_20,param_3,PTR_DAT_02004830);
    local_50 = local_20[0];
    local_48 = 0x11;
    local_68 = (char *)((ulonglong)local_68 & 0xffffffff00000000);
    uVar1 = FUN_0044d8d0(&PTR_FUN_005bb0a8,1,PTR_PTR_02005628,&local_50);
    FUN_004134c0(uVar1);
    FUN_00414480(local_20);
  }
  (**(code **)(*param_1 + 8))(param_1,param_2,param_3,param_4);
  FUN_00414480(local_20);
  return param_2;
}

