/* Ghidra address: 00f489b0 */
/* Ghidra symbol: FUN_00f489b0 */


undefined8 FUN_00f489b0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_017c50e0(param_2,(longlong)*(short *)(param_1 + 8));
    if (cVar1 == '\0') {
      if (*(longlong *)(param_1 + 0x38) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_00f489b0(*(longlong *)(param_1 + 0x38),param_2);
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

