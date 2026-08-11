/* Ghidra address: 00cf27d0 */
/* Ghidra symbol: FUN_00cf27d0 */


void FUN_00cf27d0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 == 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_020031e8);
    uVar1 = FUN_0086dfd0(&PTR_FUN_00cf00c0,1,local_10);
    FUN_004134c0(uVar1);
  }
  if ((*(longlong *)(param_1 + 0x40) != 0) && (*(char *)(param_1 + 0x50) != '\0')) {
    FUN_00410f20(*(longlong *)(param_1 + 0x40));
  }
  FUN_00414480(param_1 + 0x48);
  *(longlong *)(param_1 + 0x40) = param_2;
  *(undefined1 *)(param_1 + 0x50) = 0;
  FUN_00414480(&local_10);
  return;
}

