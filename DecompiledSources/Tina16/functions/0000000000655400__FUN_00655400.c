/* Ghidra address: 00655400 */
/* Ghidra symbol: FUN_00655400 */


void FUN_00655400(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_0411ba23(*(undefined4 *)((longlong)param_2 + 0xc),param_2 + 0xf,*param_2,
                             *(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 2),
                             *(undefined4 *)((longlong)param_2 + 0x14),*(undefined4 *)(param_2 + 3),
                             *(undefined4 *)((longlong)param_2 + 0x1c),param_2[4],0,param_2[9],
                             param_2[5]);
  *(undefined8 *)(param_1 + 0x468) = uVar1;
  return;
}

