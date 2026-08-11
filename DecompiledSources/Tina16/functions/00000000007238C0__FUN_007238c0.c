/* Ghidra address: 007238c0 */
/* Ghidra symbol: FUN_007238c0 */


undefined8 FUN_007238c0(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 0x110) {
    *(undefined8 *)(DAT_01e050f0 + 0x80) = param_1;
    uVar1 = thunk_FUN_03c9d277(param_1,0xfffffffc,*(undefined8 *)(DAT_01e050f0 + 0xc0));
    *(undefined8 *)(DAT_01e050f0 + 0xb8) = uVar1;
    thunk_FUN_03a65bf1(*(undefined8 *)(DAT_01e050f0 + 0xc0),param_1,0x110,param_3,param_4);
    DAT_01e050f0 = 0;
  }
  else if ((param_2 == 0x4e) && (*(int *)(param_4 + 0x10) == -0x259)) {
    uVar1 = thunk_FUN_04118143(param_1,0xfffffff8);
    FUN_00721d20(uVar1);
  }
  return 0;
}

