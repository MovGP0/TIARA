/* Ghidra address: 01695bf0 */
/* Ghidra symbol: FUN_01695bf0 */


undefined1 FUN_01695bf0(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 local_res10 [3];
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00c53500(&local_30,local_res10[0]);
  FUN_00414b50(local_res10,local_30);
  iVar2 = 1;
  iVar3 = *(int *)(param_1 + 0x31c);
  if (0 < iVar3) {
    do {
      iVar4 = iVar2 + (iVar3 - iVar2) / 2;
      lVar5 = (longlong)iVar4;
      FUN_004169a0(&local_38,*(longlong *)(param_1 + 0x2f8) + -9 + lVar5 * 9);
      iVar1 = FUN_00416db0(local_res10[0],local_38);
      if (iVar1 == 0) {
        local_41 = 1;
        *param_3 = *(int *)(*(longlong *)(param_1 + 0x300) + -4 + lVar5 * 4);
        if ((*param_3 == 0x125) && (*(int *)(param_1 + 0x318) == 1)) {
          *(undefined1 *)(param_1 + 0x339) = 1;
        }
        goto LAB_01695d3d;
      }
      FUN_004169a0(&local_40,*(longlong *)(param_1 + 0x2f8) + -9 + lVar5 * 9);
      iVar1 = FUN_00416d10(local_res10[0],local_40);
      if (iVar1 < 1) {
        iVar3 = iVar4 + -1;
      }
      else {
        iVar2 = iVar4 + 1;
      }
    } while (iVar2 <= iVar3);
  }
  local_41 = 0;
LAB_01695d3d:
  FUN_00414560(&local_40,3);
  FUN_00414480(local_res10);
  return local_41;
}

