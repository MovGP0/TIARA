/* Ghidra address: 01b24310 */
/* Ghidra symbol: FUN_01b24310 */


undefined8 FUN_01b24310(undefined8 param_1)

{
  int iVar1;
  undefined1 local_222 [530];
  
  FUN_00414480(param_1);
  FUN_0040d200(local_222,0x20a,0);
  iVar1 = thunk_FUN_0418dd92(0x105,local_222);
  if (iVar1 != 0) {
    thunk_FUN_03b9e632(local_222,local_222,0x20a);
    FUN_004167d0(param_1,local_222);
  }
  return param_1;
}

