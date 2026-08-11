/* Ghidra address: 004113f0 */
/* Ghidra symbol: FUN_004113f0 */


longlong FUN_004113f0(longlong param_1)

{
  char cVar1;
  undefined8 unaff_retaddr;
  
  if (param_1 != 0) {
    cVar1 = FUN_004113d0();
    if (cVar1 == '\0') {
      FUN_00409880(10,unaff_retaddr);
    }
  }
  return param_1;
}

