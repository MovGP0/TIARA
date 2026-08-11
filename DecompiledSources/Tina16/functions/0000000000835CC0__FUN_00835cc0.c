/* Ghidra address: 00835cc0 */
/* Ghidra symbol: FUN_00835cc0 */


void FUN_00835cc0(undefined8 param_1)

{
  char cVar1;
  int local_20;
  int local_1c [3];
  
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_008355d0(param_1);
    if (cVar1 != '\0') {
      FUN_00835860(param_1,local_1c,&local_20);
      if (local_1c[0] == local_20) {
        FUN_008358c0(param_1,local_1c[0]);
      }
    }
  }
  return;
}

