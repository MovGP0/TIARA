/* Ghidra address: 01c3c5b0 */
/* Ghidra symbol: FUN_01c3c5b0 */


void FUN_01c3c5b0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x6c0)) {
    cVar1 = FUN_01c3c010(param_1);
    if (cVar1 == '\x03') {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x7c8),param_2);
    }
    else {
      cVar1 = FUN_01c3c010(param_1);
      if (cVar1 == '\x04') {
        FUN_00414ad0(param_1 + 0x918,param_2);
      }
    }
  }
  else {
    FUN_00414ad0(param_1 + 0x910,param_2);
  }
  return;
}

