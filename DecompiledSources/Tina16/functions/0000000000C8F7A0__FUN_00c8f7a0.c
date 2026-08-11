/* Ghidra address: 00c8f7a0 */
/* Ghidra symbol: FUN_00c8f7a0 */


bool FUN_00c8f7a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 local_12 [2];
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00c8fb90(param_1,1);
  lVar1 = FUN_0089bfa0(*(undefined8 *)PTR_DAT_020050b0,param_2,&local_10,local_12);
  if (lVar1 != -1) {
    FUN_00c8fd40(param_1,lVar1);
    FUN_00c8fb10(param_1);
    FUN_00c8fb50(param_1);
  }
  FUN_00414480(&local_10);
  return lVar1 != -1;
}

