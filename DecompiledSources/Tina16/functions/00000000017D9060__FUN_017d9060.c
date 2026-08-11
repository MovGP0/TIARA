/* Ghidra address: 017d9060 */
/* Ghidra symbol: FUN_017d9060 */


void FUN_017d9060(undefined8 param_1,int param_2)

{
  char cVar1;
  int local_20;
  int local_1c;
  
  FUN_017d8440(param_1,param_2);
  cVar1 = FUN_017d88b0(param_1,param_2,&local_1c,&local_20);
  if (cVar1 == '\0') {
    cVar1 = FUN_017d8be0(param_1,param_2,&local_1c);
    if (cVar1 == '\0') {
      FUN_017d8db0(param_1,param_2,&local_1c,&local_20);
    }
    else {
      local_20 = local_1c;
    }
  }
  if (param_2 != local_20) {
    FUN_017d8100(param_1,param_2,local_20);
  }
  if (param_2 != local_1c) {
    FUN_017d8010(param_1,param_2,local_1c);
  }
  return;
}

