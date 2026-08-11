/* Ghidra address: 00f207f0 */
/* Ghidra symbol: FUN_00f207f0 */


void FUN_00f207f0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int local_3c [3];
  
  local_3c[0] = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  FUN_01d311c0(*param_2,local_3c,4);
  iVar2 = 0;
  iVar3 = local_3c[0];
  if (-1 < local_3c[0] + -1) {
    do {
      puVar1 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar2);
      (**(code **)*puVar1)(puVar1,param_2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

