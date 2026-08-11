/* Ghidra address: 004113d0 */
/* Ghidra symbol: FUN_004113d0 */


undefined8 FUN_004113d0(undefined8 *param_1)

{
  char cVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (cVar1 = FUN_00411580(*param_1), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

