/* Ghidra address: 019a43f0 */
/* Ghidra symbol: FUN_019a43f0 */


undefined8 FUN_019a43f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_38 = param_1;
  FUN_00414610(param_2);
  iVar2 = FUN_004170c0(&LAB_019a44d4,local_res10,1);
  if (0 < iVar2) {
    FUN_00416dc0(&local_res10,local_res10,1,iVar2 + -1);
  }
  uVar4 = 0;
  iVar2 = *(int *)(local_38 + 0x10);
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = FUN_00b94e60(local_38,iVar5);
      cVar1 = FUN_019a42b0(auStack_58,uVar3);
      if (cVar1 != '\0') {
        uVar4 = FUN_00b94e60(local_38,iVar5);
        break;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_30 = uVar4;
  FUN_00414480(&local_res10);
  return local_30;
}

