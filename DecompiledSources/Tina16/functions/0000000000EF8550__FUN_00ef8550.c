/* Ghidra address: 00ef8550 */
/* Ghidra symbol: FUN_00ef8550 */


undefined8 FUN_00ef8550(undefined8 param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  
  do {
    if (param_2 == (char *)0x0) {
      return 0;
    }
    bVar1 = 0;
    cVar2 = *param_2;
    do {
      if (*(short *)(param_2 + (ulonglong)bVar1 * 2 + 2) == 2) {
        return 1;
      }
      bVar1 = bVar1 + 1;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    param_2 = *(char **)(param_2 + 0x3f0);
  } while( true );
}

