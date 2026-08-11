/* Ghidra address: 005ebe90 */
/* Ghidra symbol: FUN_005ebe90 */


undefined8 FUN_005ebe90(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  int local_24 [7];
  
  cVar1 = FUN_005eb020(param_1,local_24);
  if ((cVar1 == '\0') || (local_24[0] < 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

