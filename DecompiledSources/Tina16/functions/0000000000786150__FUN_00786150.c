/* Ghidra address: 00786150 */
/* Ghidra symbol: FUN_00786150 */


void FUN_00786150(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_0065be20(*(undefined8 *)(param_1 + 0x10));
  if (cVar2 != '\0') {
    uVar1 = FUN_00786090(param_1);
    thunk_FUN_041b2403(uVar1,0x85,0,0);
  }
  return;
}

