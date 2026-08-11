/* Ghidra address: 00f492c0 */
/* Ghidra symbol: FUN_00f492c0 */


void FUN_00f492c0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = FUN_0198a580(param_2);
    if ((cVar1 == '\x05') && (*(longlong *)(param_2 + 0x3f0) != 0)) {
      cVar1 = FUN_017c50e0(*(undefined8 *)(param_2 + 0x3f0),*(undefined4 *)(param_1 + 0x78));
      if (cVar1 != '\0') {
        *(longlong *)(param_1 + 0x38) = param_2;
      }
    }
  }
  return;
}

