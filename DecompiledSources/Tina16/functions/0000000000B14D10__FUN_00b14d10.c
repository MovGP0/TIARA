/* Ghidra address: 00b14d10 */
/* Ghidra symbol: FUN_00b14d10 */


longlong FUN_00b14d10(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + -4);
  }
  uVar2 = FUN_00415ab0();
  iVar1 = thunk_FUN_04139c29(DAT_020147d8,0,uVar2,uVar3,param_2,param_3 + -1);
  *(undefined2 *)(param_2 + (longlong)iVar1 * 2) = 0;
  return param_2;
}

