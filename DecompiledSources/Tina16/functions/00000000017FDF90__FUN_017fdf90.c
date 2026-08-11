/* Ghidra address: 017fdf90 */
/* Ghidra symbol: FUN_017fdf90 */


undefined1 FUN_017fdf90(longlong param_1,undefined8 param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined8 local_28;
  longlong local_20 [2];
  undefined8 local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if ((*(char *)(param_1 + 0x708) == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x6c0) + 0x78) == '\0')) {
    if (*(char *)(param_1 + 0x708) == '\0') {
      bVar1 = false;
    }
    else {
      FUN_00c4d340(*(undefined8 *)(param_1 + 0x6c8),local_20);
      iVar2 = 0;
      if (local_20[0] != 0) {
        iVar2 = *(int *)(local_20[0] + -4);
      }
      bVar1 = 0 < iVar2;
    }
    if (bVar1) {
      FUN_00c4d340(*(undefined8 *)(param_1 + 0x6c8),&local_28);
      iVar2 = FUN_004170c0(L"Busy",local_28,1);
      if ((iVar2 == 1) && (param_3 != '\0')) {
        (**(code **)(**(longlong **)PTR_DAT_020014c0 + 0x78))
                  (*(longlong **)PTR_DAT_020014c0,local_res10[0]);
      }
    }
  }
  else if (param_3 != '\0') {
    (**(code **)(**(longlong **)PTR_DAT_020014c0 + 0x78))
              (*(longlong **)PTR_DAT_020014c0,local_res10[0]);
  }
  FUN_00414560(&local_28,2);
  FUN_004144d0(&local_10);
  FUN_00414480(local_res10);
  return 0;
}

