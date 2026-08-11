/* Ghidra address: 01431500 */
/* Ghidra symbol: FUN_01431500 */


void FUN_01431500(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  double local_20 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_20[0] = (double)FUN_00b8f030(param_2);
  if (((local_20[0] < -1e+50) || (1e+50 < local_20[0])) ||
     (((char)param_1[0x10] != '\0' &&
      ((local_20[0] < (double)param_1[0xe] ||
       ((double)param_1[0xf] <= local_20[0] && local_20[0] != (double)param_1[0xf])))))) {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_38,0x132);
    local_40 = 0x11;
    local_48 = param_2;
    FUN_00442f70(local_30,local_38,&local_48,0);
    uVar2 = FUN_0044d490(&PTR_FUN_004355d0,1,local_30[0]);
    FUN_004134c0(uVar2);
  }
  if (param_1[0xc] != 0) {
    cVar1 = (*(code *)param_1[0xc])(param_1[0xd],local_20,(int)param_1[3]);
    if (cVar1 == '\0') {
      uVar2 = FUN_00b89270();
      FUN_00b8e520(uVar2,&local_58,0x133);
      local_40 = 0x11;
      local_48 = param_2;
      FUN_00442f70(&local_50,local_58,&local_48,0);
      uVar2 = FUN_0044d490(&PTR_FUN_004355d0,1,local_50);
      FUN_004134c0(uVar2);
    }
  }
  (**(code **)(*param_1 + 0x40))(param_1,local_20[0]);
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_38,2);
  return;
}

