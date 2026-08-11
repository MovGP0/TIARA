/* Ghidra address: 00821960 */
/* Ghidra symbol: FUN_00821960 */


bool FUN_00821960(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = FUN_00821f80(param_1,param_2);
  if (cVar2 == '\0') {
    bVar3 = true;
  }
  else {
    lVar1 = FUN_00821e60(param_1,param_2);
    bVar3 = *(char *)(lVar1 + 0x11) == '\0';
  }
  return bVar3;
}

