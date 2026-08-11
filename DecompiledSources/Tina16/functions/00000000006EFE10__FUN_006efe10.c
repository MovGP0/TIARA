/* Ghidra address: 006efe10 */
/* Ghidra symbol: FUN_006efe10 */


void FUN_006efe10(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_0065be20(*(undefined8 *)(param_1 + 8));
  if (cVar2 != '\0') {
    uVar1 = FUN_006efc90(param_1);
    thunk_FUN_041b2403(uVar1,0x1009,0,0);
  }
  return;
}

