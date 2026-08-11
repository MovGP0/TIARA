/* Ghidra address: 00f2f530 */
/* Ghidra symbol: FUN_00f2f530 */


void FUN_00f2f530(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_28 [32];
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_00453560(param_2,0x22);
    cVar1 = FUN_00f2f4a0(auStack_28);
    if (cVar1 == '\0') {
      FUN_00453060(param_2,*(undefined8 *)(param_1 + 0x10));
    }
    else {
      FUN_00f2f2a0(auStack_28);
    }
    FUN_00453560(param_2,0x22);
  }
  return;
}

