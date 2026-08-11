/* Ghidra address: 0040cb10 */
/* Ghidra symbol: FUN_0040cb10 */


undefined8 FUN_0040cb10(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  *(undefined2 *)(param_1 + 1) = 0xd7b0;
  cVar1 = FUN_0040caf0(*param_1);
  if (cVar1 == '\0') {
    uVar2 = thunk_FUN_03ce33a6();
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

