/* Ghidra address: 017fe120 */
/* Ghidra symbol: FUN_017fe120 */


char FUN_017fe120(longlong param_1,undefined8 param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  char local_31;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20 [2];
  undefined8 local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_31 = '\0';
  if ((*(char *)(param_1 + 0x709) == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x6d0) + 0x78) == '\0')) {
    if (*(char *)(param_1 + 0x709) == '\0') {
      bVar1 = false;
    }
    else {
      FUN_00c4d340(*(undefined8 *)(param_1 + 0x6d8),local_20);
      iVar2 = 0;
      if (local_20[0] != 0) {
        iVar2 = *(int *)(local_20[0] + -4);
      }
      bVar1 = 0 < iVar2;
    }
    if (bVar1) {
      FUN_00c4d340(*(undefined8 *)(param_1 + 0x6d8),&local_28);
      iVar2 = FUN_004170c0(L"Busy",local_28,1);
      if (iVar2 == 1) {
        if (param_3 != '\0') {
          (**(code **)(**(longlong **)PTR_DAT_02004df0 + 0x78))
                    (*(longlong **)PTR_DAT_02004df0,local_res10[0]);
        }
        goto LAB_017fe325;
      }
    }
    if ((*(char *)(param_1 + 0x709) != '\0') && (*(char *)(param_1 + 0x70b) == '\0')) {
      if (param_3 != '\0') {
        iVar2 = (**(code **)(**(longlong **)PTR_DAT_02004df0 + 0x28))
                          (*(longlong **)PTR_DAT_02004df0);
        if (0 < iVar2) {
          (**(code **)(**(longlong **)PTR_DAT_02004df0 + 0x78))
                    (*(longlong **)PTR_DAT_02004df0,local_res10[0]);
          goto LAB_017fe325;
        }
      }
      FUN_00415dd0(&local_10,local_res10[0],0);
      uVar3 = FUN_00415ab0(local_10);
      local_31 = FUN_00c4ca50(*(undefined8 *)(param_1 + 0x6d0),uVar3,1);
      if (local_31 == '\0') {
        FUN_0072d440(L"Tina SendDDEMessage failed to PCBViewer!",1,4,0);
        *(undefined1 *)(param_1 + 0x70b) = 1;
      }
      else {
        FUN_00416ba0(&local_30,L"Tina DDE Log - DDE Message sent: ",local_res10[0]);
        FUN_0135b9c0(*(undefined8 *)PTR_DAT_020058b0,local_30);
      }
    }
  }
  else if (param_3 != '\0') {
    (**(code **)(**(longlong **)PTR_DAT_02004df0 + 0x78))
              (*(longlong **)PTR_DAT_02004df0,local_res10[0]);
  }
LAB_017fe325:
  FUN_00414560(&local_30,3);
  FUN_004144d0(&local_10);
  FUN_00414480(local_res10);
  return local_31;
}

