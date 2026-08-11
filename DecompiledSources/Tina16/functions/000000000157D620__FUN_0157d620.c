/* Ghidra address: 0157d620 */
/* Ghidra symbol: FUN_0157d620 */


undefined8 FUN_0157d620(undefined8 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 *local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_68;
  local_10 = 0;
  puVar1 = auStack_68;
  if (*(char *)(param_1 + 1) == '\0') {
    uVar2 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_02001f60);
    FUN_004134c0(uVar2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  if (*(char *)(param_1 + 9) == '\0') {
    local_18 = (**(code **)*param_1)(param_1);
  }
  else {
    local_18 = FUN_0045ae90();
  }
  FUN_00414480(&local_10);
  local_20 = param_1[7];
  local_28 = local_20;
  if (local_20 != 0) {
    local_28 = *(longlong *)(local_20 + -8);
  }
  local_48 = (undefined4)local_28;
  FUN_0045aba0(local_18,&local_10,local_20,0);
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(&local_10);
  return param_2;
}

