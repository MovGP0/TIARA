/* Ghidra address: 00d40da0 */
/* Ghidra symbol: FUN_00d40da0 */


void FUN_00d40da0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0x40) = 0;
  cVar1 = FUN_00788df0(param_1);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x2a) != '\0')) {
    cVar1 = FUN_00d3f270(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_00d3f6a0(param_1);
      if (cVar1 != '\0') {
        FUN_00d3d4e0(param_1,param_2);
      }
    }
  }
  return;
}

