/* Ghidra address: 00c36b00 */
/* Ghidra symbol: FUN_00c36b00 */


undefined8 FUN_00c36b00(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_00c36630();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (*DAT_02019b98)(param_1,param_2);
  }
  return uVar2;
}

