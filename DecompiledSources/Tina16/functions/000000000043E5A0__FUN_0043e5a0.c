/* Ghidra address: 0043e5a0 */
/* Ghidra symbol: FUN_0043e5a0 */


longlong * FUN_0043e5a0(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_00414ad0(param_1);
  if (*param_1 != 0) {
    FUN_00414e00(param_1);
    uVar2 = 0;
    if (*param_1 != 0) {
      uVar2 = *(undefined4 *)(*param_1 + -4);
    }
    uVar1 = FUN_00416740(*param_1);
    thunk_FUN_0407424e(uVar1,uVar2);
  }
  return param_1;
}

