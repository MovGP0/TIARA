/* Ghidra address: 01545190 */
/* Ghidra symbol: FUN_01545190 */


undefined1 FUN_01545190(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_21 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x28),iVar3);
      FUN_017ff4a0(*(undefined8 *)(lVar2 + 0x18),&local_20);
      iVar1 = FUN_00416db0(local_20,local_res10[0]);
      if (iVar1 == 0) {
        local_21 = 1;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return local_21;
}

