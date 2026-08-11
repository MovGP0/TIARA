/* Ghidra address: 01b24510 */
/* Ghidra symbol: FUN_01b24510 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01b24510(undefined8 param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  char *local_res18;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28 [2];
  longlong *local_18;
  int local_c;
  
  local_40 = auStack_68;
  local_28[1] = 0;
  local_28[0] = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00415dd0(local_28,local_res8,0);
  local_c = 0;
  local_18 = (longlong *)0x0;
  *local_res18 = '\0';
  do {
    cVar1 = FUN_00440a20(local_res10,1);
    if (cVar1 == '\0') {
      local_18 = (longlong *)FUN_004b9860(&PTR_FUN_0047c498,1,local_res10,0xff10);
    }
    else {
      local_18 = (longlong *)FUN_004b9860(&PTR_FUN_0047c498,1,local_res10,0x12);
    }
    *local_res18 = '\x01';
    if (*local_res18 == '\0') {
      uVar2 = FUN_00409e80(200);
      thunk_FUN_0419965d(uVar2);
    }
  } while ((*local_res18 == '\0') && (local_c < 5));
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x48))(local_18,0,2);
    local_38 = FUN_00414df0(local_28);
    local_30 = 0;
    if (local_28[0] != 0) {
      local_30 = *(undefined4 *)(local_28[0] + -4);
    }
    (**(code **)(*local_18 + 0x20))(local_18,local_38,local_30);
    FUN_00410f20(local_18);
  }
  FUN_004144d0(local_28);
  FUN_00414480(local_28 + 1);
  FUN_00414560(&local_res8,2);
  return;
}

