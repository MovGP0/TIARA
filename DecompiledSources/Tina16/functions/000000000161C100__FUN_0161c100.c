/* Ghidra address: 0161c100 */
/* Ghidra symbol: FUN_0161c100 */


undefined8 FUN_0161c100(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_3 = 0;
  cVar1 = FUN_0161bb80(param_1);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_0161be50(param_1,param_2,param_3,1);
    if ((lVar2 == 0) || (*(char *)(lVar2 + 0x28) != 'o')) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

