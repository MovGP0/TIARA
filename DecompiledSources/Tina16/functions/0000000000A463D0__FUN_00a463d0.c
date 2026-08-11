/* Ghidra address: 00a463d0 */
/* Ghidra symbol: FUN_00a463d0 */


longlong FUN_00a463d0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00410e60(&DAT_00a46330,1);
  *(int *)(lVar1 + 0x10) = param_2;
  if (param_2 < 0xff00) {
    uVar2 = FUN_004095c0((longlong)param_2);
    *(undefined8 *)(lVar1 + 8) = uVar2;
  }
  else {
    uVar2 = thunk_FUN_0412a7bb(*(undefined2 *)PTR_DAT_02004bb0,(longlong)param_2);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
    if (*(longlong *)(lVar1 + 0x18) == 0) {
      FUN_0044d440();
    }
    uVar2 = thunk_FUN_0416a623(*(undefined8 *)(lVar1 + 0x18));
    *(undefined8 *)(lVar1 + 8) = uVar2;
  }
  return lVar1;
}

