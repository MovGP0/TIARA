/* Ghidra address: 0072e510 */
/* Ghidra symbol: FUN_0072e510 */


undefined8 FUN_0072e510(longlong param_1)

{
  char cVar1;
  
  if (((*(int *)(param_1 + 0x508) != 2) && (*(longlong *)(param_1 + 0x6b0) != 0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x18))
                        (*(longlong **)(param_1 + 0x6b0)), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

