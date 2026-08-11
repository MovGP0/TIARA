/* Ghidra address: 0086cd80 */
/* Ghidra symbol: FUN_0086cd80 */


undefined8 FUN_0086cd80(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  iVar2 = FUN_0086cd70();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 8);
      (**(code **)*puVar1)(puVar1,&local_30);
      iVar3 = FUN_00416db0(param_2,local_30);
      if (iVar3 == 0) {
        local_38 = *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 8);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(&local_30);
  return local_38;
}

