/* Ghidra address: 01b24710 */
/* Ghidra symbol: FUN_01b24710 */


void FUN_01b24710(longlong *param_1,undefined8 param_2,char *param_3)

{
  undefined4 uVar1;
  undefined8 local_res10;
  char *local_res18;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  longlong local_28;
  int local_1c;
  
  local_40 = auStack_68;
  local_30 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_1c = 0;
  local_28 = 0;
  *local_res18 = '\0';
  do {
    local_28 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res10,0xff10);
    *local_res18 = '\x01';
    if (*local_res18 == '\0') {
      uVar1 = FUN_005273a0(200,300);
      thunk_FUN_0419965d(uVar1);
    }
  } while ((*local_res18 == '\0') && (local_1c < 5));
  if (local_28 != 0) {
    (**(code **)(*param_1 + 0x110))(param_1,local_28);
    FUN_00410f20(local_28);
  }
  FUN_00414480(&local_30);
  FUN_00414480(&local_res10);
  return;
}

