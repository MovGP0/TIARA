/* Ghidra address: 00d00e60 */
/* Ghidra symbol: FUN_00d00e60 */


void FUN_00d00e60(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 **local_50;
  undefined4 local_48;
  undefined1 *local_30 [2];
  undefined1 local_19;
  
  local_30[0] = auStack_78;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  local_19 = (undefined1)param_1[0x3f];
  if ((*(ushort *)((longlong)param_1 + 0x205) & 2) == 0) {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar1 != '\0') {
      FUN_00cbdf10(param_1);
    }
    *(undefined1 *)(param_1 + 0x3f) = 0;
  }
  local_58 = local_res20;
  local_50 = local_30;
  local_48 = 0xffffffff;
  (**(code **)(*param_1 + 0x170))(param_1,L"POST",local_res10,local_res18);
  *(undefined1 *)(param_1 + 0x3f) = local_19;
  FUN_00414480(&local_res10);
  return;
}

