/* Ghidra address: 0196fd80 */
/* Ghidra symbol: FUN_0196fd80 */


void FUN_0196fd80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa8),iVar3);
      iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 0x18),local_res10);
      if (iVar1 == 0) {
        FUN_00414ad0(lVar2 + 0x18,local_res18);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_res10,2);
  return;
}

