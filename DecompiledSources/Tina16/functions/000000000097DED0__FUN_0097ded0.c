/* Ghidra address: 0097ded0 */
/* Ghidra symbol: FUN_0097ded0 */


void FUN_0097ded0(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  undefined2 *puVar2;
  longlong lVar3;
  uint uVar4;
  
  *param_3 = 0;
  *param_4 = 0;
  puVar2 = (undefined2 *)FUN_00415f70(param_2);
  while( true ) {
    cVar1 = FUN_008ff320(*puVar2);
    if (cVar1 != '\0') break;
    puVar2 = puVar2 + 1;
  }
  lVar3 = FUN_00415f70(param_2);
  FUN_004147a0(param_3,lVar3,((longlong)puVar2 - lVar3) / 2 & 0xffffffff);
  while( true ) {
    cVar1 = FUN_008ff300(*puVar2);
    if (cVar1 == '\0') break;
    puVar2 = puVar2 + 1;
  }
  uVar4 = 0;
  if (param_2 != 0) {
    uVar4 = *(uint *)(param_2 + -4) >> 1;
  }
  lVar3 = FUN_00415f70(param_2);
  FUN_00416430(param_4,param_2,((longlong)puVar2 - lVar3) / 2 + 1,uVar4);
  return;
}

