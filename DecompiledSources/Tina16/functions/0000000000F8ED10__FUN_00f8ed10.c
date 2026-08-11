/* Ghidra address: 00f8ed10 */
/* Ghidra symbol: FUN_00f8ed10 */


undefined4 FUN_00f8ed10(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_1c [3];
  
  local_28 = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00f8b940(param_1,&local_30,local_res10[0],&local_28);
  cVar2 = FUN_015fbbb0(local_30,local_1c);
  uVar3 = FUN_00442620(param_1 + 0x2be0,local_res10[0]);
  _SelectMCUModel(*(undefined8 *)(param_1 + 0x60),uVar3);
  if (cVar2 == '\0') {
    local_1c[0] = _get_mcu_code(*(undefined8 *)(param_1 + 0x60));
  }
  uVar1 = local_1c[0];
  FUN_00414560(&local_30,2);
  FUN_00414480(local_res10);
  return uVar1;
}

