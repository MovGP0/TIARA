/* Ghidra address: 00b33660 */
/* Ghidra symbol: FUN_00b33660 */


void FUN_00b33660(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_004144d0(&local_20);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x12);
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_00b19790(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x38),&local_28);
      if (iVar1 == 0) {
        FUN_00414c70(&local_20,local_28);
      }
      else {
        FUN_004153d0(&local_30,*PTR_DAT_020012a0,0);
        FUN_00415980(&local_20,3,local_28,local_30,local_20);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00415980(&local_20,4,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 10),&DAT_00b337a8,
               local_20,&LAB_00b337b8);
  FUN_00b19730(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x38),local_20);
  FUN_00414590(&local_30,3);
  return;
}

