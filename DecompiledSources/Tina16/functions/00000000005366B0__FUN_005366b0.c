/* Ghidra address: 005366b0 */
/* Ghidra symbol: FUN_005366b0 */


longlong FUN_005366b0(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    FUN_00536400(param_1);
  }
  else {
    FUN_00536090(param_1,&DAT_00401428);
    *(longlong *)(param_1 + 0x10) = param_2;
  }
  return param_1;
}

