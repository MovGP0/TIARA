/* Ghidra address: 00c086e0 */
/* Ghidra symbol: FUN_00c086e0 */


void FUN_00c086e0(longlong param_1,char param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x5f5) != param_2) {
    cVar1 = FUN_00bf2c80(param_1);
    if (cVar1 != '\0') {
      FUN_00bf3bb0(param_1);
    }
    *(char *)(param_1 + 0x5f5) = param_2;
    cVar1 = FUN_00bf2c80(param_1);
    if (cVar1 != '\0') {
      FUN_00bf3bb0(param_1);
    }
    FUN_00c0a950(param_1,0x80);
  }
  return;
}

