/* Ghidra address: 0173cca0 */
/* Ghidra symbol: FUN_0173cca0 */


char FUN_0173cca0(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  char local_19 [9];
  
  cVar2 = *(char *)(param_1 + 0xd1);
  local_19[0] = cVar2;
  lVar1 = FUN_01d06f50(param_1,param_2 == '\0',param_3,local_19);
  if ((lVar1 != 0) && (local_19[0] != cVar2)) {
    cVar2 = '\0';
  }
  return cVar2;
}

