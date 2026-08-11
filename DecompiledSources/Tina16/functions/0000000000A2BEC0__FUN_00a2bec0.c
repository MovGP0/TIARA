/* Ghidra address: 00a2bec0 */
/* Ghidra symbol: FUN_00a2bec0 */


undefined8 FUN_00a2bec0(undefined8 param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  
  cVar2 = '\0';
  puVar3 = &DAT_01e71158;
  do {
    iVar1 = FUN_00416db0(*puVar3,param_1);
    if (iVar1 == 0) {
      *param_2 = cVar2;
      return 1;
    }
    cVar2 = cVar2 + '\x01';
    puVar3 = puVar3 + 1;
  } while (cVar2 != '\x12');
  return 0;
}

