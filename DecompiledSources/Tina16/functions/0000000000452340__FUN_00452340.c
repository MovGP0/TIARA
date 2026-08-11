/* Ghidra address: 00452340 */
/* Ghidra symbol: FUN_00452340 */


undefined8 FUN_00452340(undefined8 *param_1)

{
  int iVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (iVar1 = (**(code **)*param_1)(param_1), iVar1 == 0)) {
    return 1;
  }
  return 0;
}

