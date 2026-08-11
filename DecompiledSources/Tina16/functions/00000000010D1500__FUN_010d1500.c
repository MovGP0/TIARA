/* Ghidra address: 010d1500 */
/* Ghidra symbol: FUN_010d1500 */


void FUN_010d1500(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_013b4b30(param_1,0,&local_10);
  iVar1 = FUN_00416db0(local_10,&LAB_010d15a4);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x10) < 2) {
      *param_2 = 0;
    }
    else {
      *param_2 = 2;
    }
  }
  else {
    *param_2 = 1;
  }
  FUN_00414480(&local_10);
  return;
}

