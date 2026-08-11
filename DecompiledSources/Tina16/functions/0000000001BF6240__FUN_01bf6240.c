/* Ghidra address: 01bf6240 */
/* Ghidra symbol: FUN_01bf6240 */


undefined8 *
FUN_01bf6240(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)param_1,param_3,param_4);
  *(undefined4 *)param_1 = uVar1;
  uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)((longlong)param_1 + 4),param_3,param_4);
  *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 1),param_3,param_4);
  *(undefined4 *)(param_1 + 1) = uVar1;
  uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)((longlong)param_1 + 0xc),param_3,param_4);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  return param_1;
}

