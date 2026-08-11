/* Ghidra address: 01561270 */
/* Ghidra symbol: FUN_01561270 */


void FUN_01561270(longlong param_1)

{
  char cVar1;
  double *pdVar2;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19 [9];
  
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    cVar1 = FUN_01569690(param_1);
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x802) != '\0')) {
      pdVar2 = (double *)
               FUN_01cfde70(*(undefined8 *)(param_1 + 0x6c0),1,0,local_19,&local_1a,&local_1b);
      if (*(char *)(param_1 + 0x953) == '\0') {
        *pdVar2 = *pdVar2 * 100.0;
      }
    }
  }
  return;
}

