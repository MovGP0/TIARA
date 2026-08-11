/* Ghidra address: 0152fa50 */
/* Ghidra symbol: FUN_0152fa50 */


undefined1 FUN_0152fa50(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_38 = 0;
  local_10 = 0;
  local_39 = 1;
  if (*(char *)(*(longlong *)(param_1 + 0x958) + 0x5e0) != '\0') {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,local_20,0x81);
    FUN_00441920(&local_38,*(undefined8 *)(param_1 + 0x968));
    local_30 = local_38;
    local_28 = 0x11;
    FUN_00442f70(&local_10,local_20[0],&local_30,0);
    iVar1 = FUN_0072d440(local_10,3,0xb,0);
    if (iVar1 == 2) {
      local_39 = 0;
    }
    else if (iVar1 == 6) {
      FUN_01532020(param_1,param_2);
    }
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return local_39;
}

