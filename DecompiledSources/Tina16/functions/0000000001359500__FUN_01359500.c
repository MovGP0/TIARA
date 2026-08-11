/* Ghidra address: 01359500 */
/* Ghidra symbol: FUN_01359500 */


void FUN_01359500(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = FUN_0198a580(param_2);
    if (cVar1 == '\x04') {
      FUN_01358e20(param_2,*(undefined8 *)(param_1 + 0x28));
    }
  }
  return;
}

