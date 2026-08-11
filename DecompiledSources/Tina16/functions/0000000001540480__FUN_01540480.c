/* Ghidra address: 01540480 */
/* Ghidra symbol: FUN_01540480 */


undefined8 FUN_01540480(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined8 local_20;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_20 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_01d347d0(param_1,iVar3);
      iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 0x10),local_res10[0]);
      if (iVar1 == 0) {
        local_20 = FUN_01d347d0(param_1,iVar3);
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(local_res10);
  return local_20;
}

