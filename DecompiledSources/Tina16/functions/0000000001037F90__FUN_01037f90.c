/* Ghidra address: 01037f90 */
/* Ghidra symbol: FUN_01037f90 */


undefined4 FUN_01037f90(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar2 = FUN_00442620(param_1 + 0xb2,local_res10[0]);
  uVar1 = _get_mcu_bank(*(undefined8 *)(param_1 + 0x8f0),uVar2);
  FUN_00414480(local_res10);
  return uVar1;
}

