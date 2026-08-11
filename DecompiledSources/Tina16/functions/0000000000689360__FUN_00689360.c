/* Ghidra address: 00689360 */
/* Ghidra symbol: FUN_00689360 */


undefined8 FUN_00689360(longlong param_1)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = (code *)FUN_00411550(param_1,0xffc5);
  cVar1 = (*pcVar2)(param_1);
  if (cVar1 == '\0') {
    uVar3 = 1;
  }
  else if (*(char *)(param_1 + 0x498) == '\x01') {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

