/* Ghidra address: 00b952f0 */
/* Ghidra symbol: FUN_00b952f0 */


void FUN_00b952f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = (**(code **)*param_2)(param_2);
    FUN_004095f0(uVar1);
  }
  return;
}

