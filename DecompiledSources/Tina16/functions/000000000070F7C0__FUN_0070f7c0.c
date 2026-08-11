/* Ghidra address: 0070f7c0 */
/* Ghidra symbol: FUN_0070f7c0 */


char FUN_0070f7c0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_00692610(param_1,param_2);
  if (cVar1 == '\0') {
    uVar2 = FUN_00786090(param_1);
    lVar3 = thunk_FUN_041b2403(uVar2,0x407,0,0);
    if ((lVar3 == 0) || (param_2 != lVar3)) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
  }
  return cVar1;
}

