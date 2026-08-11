/* Ghidra address: 00d01990 */
/* Ghidra symbol: FUN_00d01990 */


void FUN_00d01990(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_0041b910(param_5);
  lVar2 = FUN_00d05e00(param_1);
  if (*(longlong *)(lVar2 + 0x70) != 0) {
    uVar3 = FUN_00d05e00(param_1);
    cVar1 = FUN_00d00530(uVar3);
    if (cVar1 == '\0') goto LAB_00d01a15;
  }
  uVar3 = FUN_00d05e00(param_1);
  FUN_00ce1e60(uVar3,L"application/x-www-form-urlencoded");
LAB_00d01a15:
  if (local_res18 == 0) {
    FUN_00d00e60(param_1,local_res10,0,local_res20);
  }
  else {
    local_18 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_00d014a0(param_1,&local_28,local_res18,param_5);
    local_38 = 0;
    FUN_00878970(local_18,local_28,0xffffffff,1);
    FUN_004b6dc0(local_18,0);
    FUN_00d00e60(param_1,local_res10,local_18,local_res20);
    uVar3 = local_18;
    local_10 = local_18;
    local_18 = 0;
    FUN_00410f20(uVar3);
  }
  FUN_00414480(&local_28);
  FUN_00414480(&local_res10);
  FUN_0041b800(&param_5);
  return;
}

