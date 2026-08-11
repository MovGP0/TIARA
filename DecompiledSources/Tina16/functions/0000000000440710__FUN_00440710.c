/* Ghidra address: 00440710 */
/* Ghidra symbol: FUN_00440710 */


undefined8 FUN_00440710(undefined8 param_1,ulonglong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = param_2;
  iVar1 = thunk_FUN_041d1ccf(param_1,param_2 & 0xffffffff,(longlong)&local_10 + 4,param_3);
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == -1) {
    iVar1 = thunk_FUN_03ce33a6();
    if (iVar1 != 0) {
      local_10 = CONCAT44(0xffffffff,(undefined4)local_10);
    }
  }
  return local_10;
}

