/* Ghidra address: 017fdb10 */
/* Ghidra symbol: FUN_017fdb10 */


byte FUN_017fdb10(longlong param_1,undefined8 param_2,char param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_res10 [3];
  byte local_51;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30 [2];
  undefined8 local_20 [2];
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_51 = 0;
  bVar2 = 0;
  if (((*(char *)(param_1 + 0x708) != '\0') &&
      (*(char *)(*(longlong *)(param_1 + 0x6c0) + 0x78) != '\0')) ||
     ((*(char *)(param_1 + 0x709) != '\0' &&
      (*(char *)(*(longlong *)(param_1 + 0x6d0) + 0x78) != '\0')))) {
    if (param_3 != '\0') {
      if (*(char *)(param_1 + 0x708) != '\0') {
        (**(code **)(**(longlong **)PTR_DAT_020014c0 + 0x78))
                  (*(longlong **)PTR_DAT_020014c0,local_res10[0]);
      }
      if (*(char *)(param_1 + 0x709) != '\0') {
        (**(code **)(**(longlong **)PTR_DAT_02004df0 + 0x78))
                  (*(longlong **)PTR_DAT_02004df0,local_res10[0]);
      }
    }
    goto LAB_017fde55;
  }
  if (*(char *)(param_1 + 0x708) == '\0') {
    bVar1 = false;
  }
  else {
    FUN_00c4d340(*(undefined8 *)(param_1 + 0x6c8),local_30);
    iVar3 = 0;
    if (local_30[0] != 0) {
      iVar3 = *(int *)(local_30[0] + -4);
    }
    bVar1 = 0 < iVar3;
  }
  if (bVar1) {
    FUN_00c4d340(*(undefined8 *)(param_1 + 0x6c8),&local_38);
    iVar3 = FUN_004170c0(L"Busy",local_38,1);
    if (iVar3 != 1) goto LAB_017fdc7b;
    bVar1 = true;
  }
  else {
LAB_017fdc7b:
    if (*(char *)(param_1 + 0x709) == '\0') {
      bVar1 = false;
    }
    else {
      FUN_00c4d340(*(undefined8 *)(param_1 + 0x6d8),&local_40);
      iVar3 = 0;
      if (local_40 != 0) {
        iVar3 = *(int *)(local_40 + -4);
      }
      bVar1 = 0 < iVar3;
    }
    if (bVar1) {
      FUN_00c4d340(*(undefined8 *)(param_1 + 0x6d8),&local_48);
      iVar3 = FUN_004170c0(L"Busy",local_48,1);
      if (iVar3 == 1) {
        bVar1 = true;
        goto LAB_017fdcec;
      }
    }
    bVar1 = false;
  }
LAB_017fdcec:
  if (bVar1) {
    if (param_3 != '\0') {
      if (*(char *)(param_1 + 0x708) != '\0') {
        (**(code **)(**(longlong **)PTR_DAT_020014c0 + 0x78))
                  (*(longlong **)PTR_DAT_020014c0,local_res10[0]);
      }
      if (*(char *)(param_1 + 0x709) != '\0') {
        (**(code **)(**(longlong **)PTR_DAT_02004df0 + 0x78))
                  (*(longlong **)PTR_DAT_02004df0,local_res10[0]);
      }
    }
    goto LAB_017fde55;
  }
  if ((*(char *)(param_1 + 0x709) != '\0') && (*(char *)(param_1 + 0x70b) == '\0')) {
    if (param_3 != '\0') {
      iVar3 = (**(code **)(**(longlong **)PTR_DAT_02004df0 + 0x28))(*(longlong **)PTR_DAT_02004df0);
      if (0 < iVar3) {
        (**(code **)(**(longlong **)PTR_DAT_02004df0 + 0x78))
                  (*(longlong **)PTR_DAT_02004df0,local_res10[0]);
        goto LAB_017fde0e;
      }
    }
    FUN_00415dd0(local_20,local_res10[0],0);
    uVar4 = FUN_00415ab0(local_20[0]);
    bVar2 = FUN_00c4ca50(*(undefined8 *)(param_1 + 0x6d0),uVar4,1);
    if (bVar2 == 0) {
      FUN_0072d440(L"Tina SendDDEMessage failed to PCBViewer!",1,4,0);
      *(undefined1 *)(param_1 + 0x70b) = 1;
    }
  }
LAB_017fde0e:
  local_51 = *(byte *)(param_1 + 0x709) & bVar2;
  if ((local_51 & *(byte *)(param_1 + 0x709)) != 0) {
    FUN_00416ba0(&local_50,L"Tina DDE Log - DDE Message sent: ",local_res10[0]);
    FUN_0135b9c0(*(undefined8 *)PTR_DAT_020058b0,local_50);
  }
LAB_017fde55:
  FUN_00414560(&local_50,5);
  FUN_004144d0(local_20);
  FUN_00414480(local_res10);
  return local_51;
}

