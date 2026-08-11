/* Ghidra address: 01d3d650 */
/* Ghidra symbol: FUN_01d3d650 */


int FUN_01d3d650(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int local_24;
  undefined8 local_20;
  
  local_20 = 0;
  local_24 = 0;
  iVar3 = 0;
  puVar4 = &DAT_01ffb048;
  do {
    FUN_004169a0(&local_20,puVar4);
    iVar2 = FUN_00416db0(*param_1,local_20);
    iVar1 = iVar3;
    if (iVar2 == 0) break;
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 0xb;
    iVar1 = local_24;
  } while (iVar3 != 8);
  local_24 = iVar1;
  FUN_00414480(&local_20);
  return local_24;
}

