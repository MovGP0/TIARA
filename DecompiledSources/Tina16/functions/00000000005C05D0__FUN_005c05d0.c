/* Ghidra address: 005c05d0 */
/* Ghidra symbol: FUN_005c05d0 */


longlong FUN_005c05d0(undefined8 *param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  char *local_78;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 *local_50;
  char local_39;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_50 = auStack_98;
  local_20[0] = 0;
  local_78 = &local_39;
  (**(code **)*param_1)(param_1,param_2,&local_30,&local_38);
  if (local_39 == '\x03') {
    FUN_00414480(local_20);
    FUN_0044a350(local_20,param_2,PTR_DAT_02004830);
    local_60 = local_20[0];
    local_58 = 0x11;
    local_78 = (char *)((ulonglong)local_78 & 0xffffffff00000000);
    uVar1 = FUN_0044d8d0(&PTR_FUN_005bb0a8,1,PTR_PTR_02005628,&local_60);
    FUN_004134c0(uVar1);
    FUN_00414480(local_20);
  }
  else if ((local_39 == '\x01') || ((param_3 & local_39 == '\x02') != 0)) {
    local_28 = local_30 + local_38;
  }
  else {
    local_28 = local_30;
  }
  FUN_00414480(local_20);
  return local_28;
}

