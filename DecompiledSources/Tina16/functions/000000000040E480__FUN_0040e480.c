/* Ghidra address: 0040e480 */
/* Ghidra symbol: FUN_0040e480 */


void FUN_0040e480(undefined8 param_1)

{
  char cVar1;
  char local_19;
  
  cVar1 = FUN_0040d560(param_1,&local_19,DAT_02006a28);
  FUN_0040d780(param_1);
  do {
    while( true ) {
      if ((cVar1 == '\n') || (local_19 != '\0')) {
        return;
      }
      if (cVar1 == '\r') break;
      cVar1 = FUN_0040d560(param_1,&local_19,DAT_02006a28);
      FUN_0040d780(param_1);
    }
    cVar1 = FUN_0040d560(param_1,&local_19,DAT_02006a28);
    FUN_0040d780(param_1);
    if (cVar1 == '\n') {
      return;
    }
  } while (local_19 == '\0');
  return;
}

