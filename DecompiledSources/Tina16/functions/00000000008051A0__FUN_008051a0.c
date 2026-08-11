/* Ghidra address: 008051a0 */
/* Ghidra symbol: FUN_008051a0 */


void FUN_008051a0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = (code *)FUN_00411550(param_1,0xffa0);
  cVar2 = (*pcVar1)(param_1,param_2);
  if (cVar2 == '\0') {
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    *(undefined8 *)(param_2 + 0x18) = 1;
  }
  return;
}

