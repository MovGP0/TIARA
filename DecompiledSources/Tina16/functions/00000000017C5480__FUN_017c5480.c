/* Ghidra address: 017c5480 */
/* Ghidra symbol: FUN_017c5480 */


void FUN_017c5480(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 local_78 [9];
  
  puVar2 = local_78;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  if (param_4 != 0) {
    cVar3 = '\b';
    puVar2 = local_78;
    do {
      FUN_017c51d0(*puVar2,param_4);
      puVar2 = puVar2 + 1;
      cVar3 = cVar3 + -1;
    } while (cVar3 != '\0');
    FUN_017c51d0(param_2,param_4);
    FUN_017c51d0(param_3,param_4);
  }
  return;
}

