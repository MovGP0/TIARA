/* Ghidra address: 0150f200 */
/* Ghidra symbol: FUN_0150f200 */


void FUN_0150f200(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  FUN_00414480(&local_20);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar2 = (uint)(byte)((*(char *)(*(longlong *)(param_1 + 0x40) + 0x40) -
                         *(char *)(*(longlong *)(param_1 + 0x40) + 0x3c)) + 1);
    iVar1 = 0;
    if (-1 < (int)(uVar2 - 1)) {
      do {
        FUN_00416780(local_30,*(undefined2 *)
                               (PTR_DAT_02004598 +
                               (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1)
                               * 2));
        FUN_00416ea0(local_30[0],&local_20,iVar1 + 1);
        iVar1 = iVar1 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    FUN_00416ea0(&DAT_0150f344,&local_20,1);
    iVar1 = 0;
    if (local_20 != 0) {
      iVar1 = *(int *)(local_20 + -4);
    }
    FUN_00416ea0(&LAB_0150f354,&local_20,iVar1 + 1);
    FUN_00414ad0(param_1 + 0x30,local_20);
  }
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return;
}

