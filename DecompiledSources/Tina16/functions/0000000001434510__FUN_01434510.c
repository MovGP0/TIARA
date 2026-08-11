/* Ghidra address: 01434510 */
/* Ghidra symbol: FUN_01434510 */


void FUN_01434510(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  int local_c;
  
  local_40 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_c = FUN_0043fc00(param_2);
  if ((local_c < 0) || (0xff < local_c)) {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_28,0x132);
    local_30 = 0x11;
    local_38 = param_2;
    FUN_00442f70(local_20,local_28,&local_38,0);
    uVar2 = FUN_0044d490(&PTR_FUN_004355d0,1,local_20[0]);
    FUN_004134c0(uVar2);
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    cVar1 = (**(code **)(param_1 + 0x60))
                      (*(undefined8 *)(param_1 + 0x68),&local_c,*(undefined4 *)(param_1 + 0x18));
    if (cVar1 == '\0') {
      uVar2 = FUN_00b89270();
      FUN_00b8e520(uVar2,&local_48,0x133);
      local_30 = 0x11;
      local_38 = param_2;
      FUN_00442f70(&local_40,local_48,&local_38,0);
      uVar2 = FUN_0044d490(&PTR_FUN_004355d0,1,local_40);
      FUN_004134c0(uVar2);
    }
  }
  FUN_014344d0(param_1,(undefined1)local_c);
  FUN_00414560(&local_48,2);
  FUN_00414560(&local_28,2);
  return;
}

