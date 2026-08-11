/* Ghidra address: 01d04dd0 */
/* Ghidra symbol: FUN_01d04dd0 */


undefined4 FUN_01d04dd0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_01d04d40(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x1a8) + 100);
  }
  return uVar2;
}

