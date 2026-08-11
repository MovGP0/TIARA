/* Ghidra address: 00de0e30 */
/* Ghidra symbol: FUN_00de0e30 */


void FUN_00de0e30(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  FUN_0065a2f0(param_1,param_2);
  if (((*(uint *)(*(longlong *)(param_1 + 0x490) + 0x38) & 1) != 0) &&
     (*(char *)(param_1 + 0x509) == '\0')) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x509) = 1;
      FUN_00ddfe20(param_1,0xfffffe0b,*(undefined4 *)(param_1 + 200));
      *(undefined1 *)(param_1 + 0x509) = 0;
    }
  }
  return;
}

