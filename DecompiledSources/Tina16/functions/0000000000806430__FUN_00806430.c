/* Ghidra address: 00806430 */
/* Ghidra symbol: FUN_00806430 */


undefined8 FUN_00806430(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x80))
                        (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10)),
     cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

