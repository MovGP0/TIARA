/* Ghidra address: 00409da0 */
/* Ghidra symbol: FUN_00409da0 */


longlong * FUN_00409da0(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_222 [522];
  
  FUN_00414480(param_1);
  if (param_2 == 0) {
    uVar1 = thunk_FUN_041b94f3(0,local_222,0x105);
    FUN_00414740(param_1,local_222,uVar1);
  }
  else {
    uVar2 = thunk_FUN_04151e44();
    while( true ) {
      uVar2 = FUN_00409c30(uVar2,param_1);
      if ((param_2 == 0) || (*param_1 == 0)) break;
      param_2 = param_2 + -1;
    }
  }
  return param_1;
}

