/* Ghidra address: 00c76df0 */
/* Ghidra symbol: FUN_00c76df0 */


undefined8 FUN_00c76df0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(char *)(*(longlong *)(param_1 + 0x1d0) + 8) == '\x01') &&
     (*(char *)(*(longlong *)(param_1 + 0x1d0) + 0x29) == '\0')) {
    uVar2 = 1;
  }
  else if ((*(char *)(*(longlong *)(param_1 + 0x1d0) + 8) == '\x01') &&
          (*(char *)(*(longlong *)(param_1 + 0x1d0) + 0x29) == '\x01')) {
    cVar1 = FUN_00c762d0();
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
  }
  return uVar2;
}

