/* Ghidra address: 017c55a0 */
/* Ghidra symbol: FUN_017c55a0 */


void FUN_017c55a0(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 local_68 [9];
  
  puVar2 = local_68;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_017c51d0(param_1,param_3);
  cVar3 = '\b';
  puVar2 = local_68;
  do {
    FUN_017c51d0(*puVar2,param_3);
    puVar2 = puVar2 + 1;
    cVar3 = cVar3 + -1;
  } while (cVar3 != '\0');
  return;
}

