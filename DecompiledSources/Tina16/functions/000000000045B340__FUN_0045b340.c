/* Ghidra address: 0045b340 */
/* Ghidra symbol: FUN_0045b340 */


undefined8 FUN_0045b340(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 local_238 [24];
  undefined1 local_220 [528];
  
  iVar1 = thunk_FUN_039cdc91(*(undefined4 *)(param_1 + 0x10),0,local_238);
  if (iVar1 == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00416830(param_2,local_220,0x104);
  }
  return param_2;
}

