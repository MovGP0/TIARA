/* Ghidra address: 0040e730 */
/* Ghidra symbol: FUN_0040e730 */


undefined8 FUN_0040e730(undefined8 param_1)

{
  byte bVar1;
  char local_19;
  
  while( true ) {
    bVar1 = FUN_0040d560(param_1,&local_19,DAT_02006a28);
    if (0x20 < bVar1) {
      return 0;
    }
    if (local_19 != '\0') break;
    FUN_0040d780(param_1);
  }
  return 1;
}

