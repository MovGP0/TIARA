/* Ghidra address: 012e2590 */
/* Ghidra symbol: FUN_012e2590 */


undefined8 FUN_012e2590(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610();
  if (*(longlong *)(param_1 + 0x10) == 0) {
    local_28 = 0;
  }
  else {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
    if ((iVar4 != 0) && (iVar3 = 0, -1 < iVar4 + -1)) {
      do {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar3);
        FUN_012dcac0(uVar2,&local_20);
        iVar1 = FUN_00416db0(local_20,local_res10[0]);
        if (iVar1 == 0) {
          local_28 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar3);
          break;
        }
        local_28 = 0;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return local_28;
}

