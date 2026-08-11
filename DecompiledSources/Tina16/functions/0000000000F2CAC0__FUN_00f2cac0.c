/* Ghidra address: 00f2cac0 */
/* Ghidra symbol: FUN_00f2cac0 */


void FUN_00f2cac0(longlong param_1,short param_2)

{
  short sVar1;
  short *psVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  FUN_00414480(&local_10);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 2;
  do {
    if (*(ulonglong *)(param_1 + 0x10) <= *(ulonglong *)(param_1 + 8)) {
      FUN_00f2cc20(param_1,PTR_PTR_02003a28);
LAB_00f2cbca:
      FUN_00414560(&local_28,2);
      FUN_00414480(&local_10);
      return;
    }
    psVar2 = *(short **)(param_1 + 8);
    sVar1 = *psVar2;
    if (((sVar1 == 0x5c) && (psVar2 + 1 < *(short **)(param_1 + 0x10))) && (psVar2[1] == param_2)) {
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 2;
      FUN_00416780(local_20,param_2);
      FUN_00416ad0(&local_10,local_20[0]);
    }
    else {
      if (sVar1 == param_2) {
        *(undefined1 *)(param_1 + 0x28) = 1;
        FUN_00414ad0(param_1 + 0x20,local_10);
        goto LAB_00f2cbca;
      }
      FUN_00416780(&local_28,sVar1);
      FUN_00416ad0(&local_10,local_28);
    }
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 2;
  } while( true );
}

