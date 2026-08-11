/* Ghidra address: 014335c0 */
/* Ghidra symbol: FUN_014335c0 */


void FUN_014335c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  double local_10;
  
  local_40 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    local_10 = (double)FUN_00b8f030(param_2);
    if ((local_10 < -1e+50) || (1e+50 < local_10)) {
      uVar3 = FUN_00b89270();
      FUN_00b8e520(uVar3,&local_28,0x132);
      local_30 = 0x11;
      local_38 = param_2;
      FUN_00442f70(local_20,local_28,&local_38,0);
      uVar3 = FUN_0044d490(&PTR_FUN_004355d0,1,local_20[0]);
      FUN_004134c0(uVar3);
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      cVar1 = (**(code **)(param_1 + 0x60))
                        (*(undefined8 *)(param_1 + 0x68),&local_10,*(undefined4 *)(param_1 + 0x18));
      if (cVar1 == '\0') {
        uVar3 = FUN_00b89270();
        FUN_00b8e520(uVar3,&local_48,0x133);
        local_30 = 0x11;
        local_38 = param_2;
        FUN_00442f70(&local_40,local_48,&local_38,0);
        uVar3 = FUN_0044d490(&PTR_FUN_004355d0,1,local_40);
        FUN_004134c0(uVar3);
      }
    }
    *(double *)(param_1 + 0x70) = local_10;
  }
  else {
    uVar2 = FUN_0043fc00(param_2);
    *(undefined4 *)(param_1 + 0x78) = uVar2;
  }
  FUN_00414560(&local_48,2);
  FUN_00414560(&local_28,2);
  return;
}

