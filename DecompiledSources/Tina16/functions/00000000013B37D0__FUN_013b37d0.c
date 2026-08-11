/* Ghidra address: 013b37d0 */
/* Ghidra symbol: FUN_013b37d0 */


void FUN_013b37d0(undefined8 param_1,undefined2 param_2,undefined2 param_3)

{
  longlong lVar1;
  undefined8 local_3b8;
  undefined1 local_3b0 [256];
  undefined8 local_2b0;
  undefined1 local_2a8;
  undefined1 local_2a7 [663];
  
  local_3b8 = 0;
  local_2b0 = 0;
  FUN_00416780(&local_2b0,param_2);
  FUN_00416910(local_3b0,local_2b0,0xff);
  lVar1 = FUN_013b3e30(param_1,local_3b0,1);
  if (lVar1 != 0) {
    FUN_013b49d0(param_1,lVar1,&local_2a8);
    FUN_00416780(&local_3b8,param_3);
    FUN_00416910(local_2a7,local_3b8,0xff);
    FUN_013b4b10(param_1,lVar1,&local_2a8);
  }
  FUN_00414480(&local_3b8);
  FUN_00414480(&local_2b0);
  return;
}

