/* Ghidra address: 00850630 */
/* Ghidra symbol: FUN_00850630 */


void FUN_00850630(longlong param_1,longlong param_2)

{
  char cVar1;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0x530) != '\0') {
    local_20 = (int)*(short *)(param_2 + 0x10);
    local_1c = (int)*(short *)(param_2 + 0x12);
    cVar1 = FUN_00850600(param_1,&local_20);
    if (cVar1 != '\0') {
      return;
    }
  }
  FUN_00650b30(param_1,param_2);
  return;
}

