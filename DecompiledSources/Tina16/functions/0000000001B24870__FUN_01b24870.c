/* Ghidra address: 01b24870 */
/* Ghidra symbol: FUN_01b24870 */


void FUN_01b24870(undefined8 param_1,longlong *param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_res8;
  longlong *local_res10;
  char *local_res18;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  longlong local_28;
  int local_1c;
  
  local_40 = auStack_68;
  local_30 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  local_1c = 0;
  local_28 = 0;
  *local_res18 = '\x01';
  do {
    cVar1 = FUN_00440a20(local_res8,1);
    if (cVar1 == '\0') {
      *local_res18 = '\0';
    }
    else {
      local_28 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res8,0x10);
    }
    *local_res18 = '\x01';
    if (*local_res18 == '\0') {
      uVar2 = FUN_005273a0(200,300);
      thunk_FUN_0419965d(uVar2);
    }
  } while ((*local_res18 == '\0') && (local_1c < 5));
  if (local_28 != 0) {
    (**(code **)(*local_res10 + 0xe8))(local_res10,local_28);
    FUN_00410f20(local_28);
  }
  FUN_00414480(&local_30);
  FUN_00414480(&local_res8);
  return;
}

