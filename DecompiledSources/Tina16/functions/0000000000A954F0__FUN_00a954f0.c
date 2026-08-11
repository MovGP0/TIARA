/* Ghidra address: 00a954f0 */
/* Ghidra symbol: FUN_00a954f0 */


void FUN_00a954f0(longlong *param_1,byte param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = auStack_68;
  local_28 = 0;
  local_20[0] = 0;
  FUN_00411a80(param_1,param_2);
  cVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  if (cVar2 == '\0') {
    if ((param_1[0x32] != 0) && (param_1[0x34] != 0)) {
      FUN_00414480(&local_28);
      local_30 = param_1[0x32];
      FUN_0043ea00(&local_28,local_30);
      FUN_00414480(local_20);
      FUN_0043e5a0(local_20,local_28);
      FUN_00a2a110(*(undefined8 *)(param_1[3] + 0x2a8),local_20[0]);
      FUN_00414480(local_20);
      FUN_00414480(&local_28);
    }
    lVar1 = param_1[0x33];
    cVar2 = FUN_004113d0(lVar1,&PTR_FUN_00a438f8);
    if ((cVar2 != '\0') && (*(char *)(*(longlong *)(lVar1 + 0x18) + 0xcd) != '\0')) {
      FUN_00410f20(lVar1);
    }
  }
  FUN_00a93170(param_1,param_2 & 0xfc);
  FUN_00414560(&local_28,2);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

