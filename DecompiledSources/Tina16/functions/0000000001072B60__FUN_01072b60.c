/* Ghidra address: 01072b60 */
/* Ghidra symbol: FUN_01072b60 */


void FUN_01072b60(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_20 = 0;
  local_38 = 0;
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_10);
  uVar1 = FUN_01072e30(param_1,local_10);
  *(undefined4 *)(param_1 + 0x6d8) = uVar1;
  if (*(char *)(param_1 + 0x6e8) != '\0') {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_20,0x131);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b0),&local_38);
    local_30 = local_38;
    local_28 = 0x11;
    FUN_00442f70(&local_18,local_20,&local_30,0);
    FUN_016fd940(local_18);
  }
  FUN_00414480(&local_38);
  FUN_00414560(&local_20,2);
  FUN_00414480(&local_10);
  return;
}

