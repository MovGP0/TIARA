/* Ghidra address: 014b4700 */
/* Ghidra symbol: FUN_014b4700 */


void FUN_014b4700(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if ((*(char *)(param_1 + 0x896) == '\0') &&
     (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2770) != 0)) {
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x2770) + 0x288))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x2770),&local_38);
    local_30 = local_38;
    local_28 = 0x11;
    FUN_00442f70(local_20,*(undefined8 *)(param_1 + 0x8d8),&local_30,0);
    FUN_0064de00(param_1,local_20[0]);
    FUN_00414480(param_1 + 0x870);
  }
  else {
    FUN_00441920(&local_48,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
    local_30 = local_48;
    local_28 = 0x11;
    FUN_00442f70(&local_40,*(undefined8 *)(param_1 + 0x8d8),&local_30,0);
    FUN_0064de00(param_1,local_40);
    FUN_00414ad0(param_1 + 0x870,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
  }
  FUN_00414ad0(*(longlong *)(param_1 + 0x8b0) + 0x360,*(undefined8 *)(param_1 + 0x870));
  FUN_00414560(&local_48,3);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return;
}

