/* Ghidra address: 0161c060 */
/* Ghidra symbol: FUN_0161c060 */


undefined8 FUN_0161c060(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_20 [8];
  
  cVar1 = FUN_0161bb80(param_1);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_0161be50(param_1,param_2,local_20,0);
    if ((lVar2 == 0) || (*(char *)(lVar2 + 0x28) != 'f')) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

