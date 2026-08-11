/* Ghidra address: 00f75660 */
/* Ghidra symbol: FUN_00f75660 */


void FUN_00f75660(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_004b89e0(param_2,param_1 + 0x10,4);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      puVar1 = (undefined8 *)FUN_004aeac0(param_1,iVar2);
      FUN_004b89e0(param_2,puVar1 + 6,1);
      (**(code **)*puVar1)(puVar1,param_2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

