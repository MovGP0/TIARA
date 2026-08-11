/* Ghidra address: 0040e520 */
/* Ghidra symbol: FUN_0040e520 */


bool FUN_0040e520(undefined8 *param_1)

{
  char cVar1;
  
  *(undefined2 *)(param_1 + 1) = 0xd7b0;
  cVar1 = FUN_0040caf0(*param_1);
  if (cVar1 == '\0') {
    FUN_00409950();
  }
  return cVar1 == '\0';
}

