/* Ghidra address: 018d4630 */
/* Ghidra symbol: FUN_018d4630 */


void FUN_018d4630(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0x28))(*(longlong **)(param_1 + 0x208));
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x208) + 0x18))
                (*(longlong **)(param_1 + 0x208),local_30,iVar2);
      iVar3 = FUN_00416db0(local_30[0],local_res10);
      if (iVar3 == 0) {
        FUN_018d4470(auStack_78,iVar2);
        iVar2 = iVar2 + -1;
        if (-1 < iVar2) goto LAB_018d470f;
        break;
      }
      FUN_018d44d0(auStack_78,&local_50,iVar2);
      FUN_00414b50(&local_20,local_50);
      iVar4 = FUN_00414cb0(local_res10);
      iVar5 = FUN_00414cb0(local_res18);
      iVar3 = *(int *)(param_1 + 0x1fc);
      FUN_004168e0(&local_58,local_20);
      FUN_00416550(local_58,*(undefined8 *)(param_1 + 0x228),iVar3 + iVar4 + iVar5 + 3);
      iVar3 = FUN_00414cb0(local_20);
      piVar1 = (int *)(*(longlong *)(param_1 + 0x220) + 0x28);
      *piVar1 = *piVar1 - iVar3;
      FUN_018d4470(auStack_78,iVar2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  goto code_r0x018d489d;
  while (iVar2 = iVar2 + -1, iVar2 != -1) {
LAB_018d470f:
    (**(code **)(**(longlong **)(param_1 + 0x208) + 0x18))
              (*(longlong **)(param_1 + 0x208),&local_38,iVar2);
    iVar3 = FUN_00416db0(local_38,local_res10);
    if (iVar3 == 0) {
      FUN_018d44d0(auStack_78,&local_40,iVar2);
      FUN_00414b50(&local_20,local_40);
      iVar4 = FUN_00414cb0(local_res10);
      iVar5 = FUN_00414cb0(local_res18);
      iVar3 = *(int *)(param_1 + 0x1fc);
      FUN_004168e0(&local_48,local_20);
      FUN_00416550(local_48,*(undefined8 *)(param_1 + 0x228),iVar3 + iVar4 + iVar5 + 3);
      iVar3 = FUN_00414cb0(local_20);
      piVar1 = (int *)(*(longlong *)(param_1 + 0x220) + 0x28);
      *piVar1 = *piVar1 - iVar3;
      FUN_018d4470(auStack_78,iVar2);
      break;
    }
  }
code_r0x018d489d:
  FUN_00414520(&local_58);
  FUN_00414480(&local_50);
  FUN_00414520(&local_48);
  FUN_00414560(&local_40,3);
  FUN_00414480(&local_20);
  FUN_00414560(&local_res10,2);
  return;
}

