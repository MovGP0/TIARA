/* Ghidra address: 00c28c30 */
/* Ghidra symbol: FUN_00c28c30 */


bool FUN_00c28c30(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    cVar1 = FUN_00c2a4a0(param_1);
    if (cVar1 != '\0') {
      FUN_00c28ba0(param_1);
      FUN_00c29a40(param_1);
    }
  }
  return *(longlong *)(param_1 + 0x18) != 0;
}

