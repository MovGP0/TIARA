/* Ghidra address: 00b94dc0 */
/* Ghidra symbol: FUN_00b94dc0 */


longlong * FUN_00b94dc0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  plVar1 = (longlong *)FUN_00410920(param_1,local_res10);
  if (plVar1 != (longlong *)0xffffffffffffffff) {
    FUN_00b94d80(plVar1,0);
    plVar1[1] = 0;
    *(undefined4 *)(plVar1 + 2) = 0;
    *(undefined4 *)((longlong)plVar1 + 0x14) = 0;
    *(undefined4 *)(plVar1 + 3) = param_4;
    (**(code **)(*plVar1 + 0x28))(plVar1,param_3);
    param_1 = plVar1;
  }
  return param_1;
}

