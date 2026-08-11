/* Ghidra address: 00f873d0 */
/* Ghidra symbol: FUN_00f873d0 */


void FUN_00f873d0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_20 = 0;
  local_28 = 0;
  local_40 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c8),&local_10);
  cVar1 = FUN_00f87190(param_1,local_10,param_1 + 0x6f0,1);
  *(bool *)(param_1 + 0x6f4) = cVar1 == '\0';
  if (cVar1 == '\0') {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_50,0x131);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_58);
    local_38 = local_58;
    local_30 = 0x11;
    FUN_00442f70(&local_48,local_50,&local_38,0);
    FUN_016fd940(local_48);
  }
  else {
    *(undefined4 *)(param_1 + 0x704) = *(undefined4 *)(param_1 + 0x6f0);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),&local_18);
    cVar1 = FUN_00f87190(param_1,local_18,param_1 + 0x6f0,0);
    *(bool *)(param_1 + 0x6f4) = cVar1 == '\0';
    if (cVar1 == '\0') {
      uVar2 = FUN_00b89270();
      FUN_00b8e520(uVar2,&local_28,0x131);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_40);
      local_38 = local_40;
      local_30 = 0x11;
      FUN_00442f70(&local_20,local_28,&local_38,0);
      FUN_016fd940(local_20);
    }
    else {
      *(undefined4 *)(param_1 + 0x700) = *(undefined4 *)(param_1 + 0x6f0);
    }
  }
  FUN_00414480(&local_58);
  FUN_00414560(&local_50,2);
  FUN_00414480(&local_40);
  FUN_00414560(&local_28,2);
  FUN_00414560(&local_18,2);
  return;
}

