/* Ghidra address: 008b0310 */
/* Ghidra symbol: FUN_008b0310 */


undefined8 FUN_008b0310(undefined8 param_1)

{
  int iVar1;
  undefined4 local_3c;
  undefined1 local_38 [40];
  
  FUN_00414480(param_1);
  local_3c = 0xf;
  iVar1 = thunk_FUN_04179f25(local_38,&local_3c);
  if (iVar1 != 0) {
    FUN_00414740(param_1,local_38,local_3c);
  }
  return param_1;
}

