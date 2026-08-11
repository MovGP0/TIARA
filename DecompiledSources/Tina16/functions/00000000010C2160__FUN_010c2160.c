/* Ghidra address: 010c2160 */
/* Ghidra symbol: FUN_010c2160 */


longlong * FUN_010c2160(longlong *param_1,undefined8 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  plVar2 = (longlong *)FUN_00410920(param_1,local_res10);
  if (plVar2 != (longlong *)0xffffffffffffffff) {
    *(undefined2 *)((longlong)plVar2 + 0xba) = param_3;
    uVar1 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
    lVar3 = FUN_00409570(uVar1);
    plVar2[0x18] = lVar3;
    param_1 = plVar2;
  }
  return param_1;
}

