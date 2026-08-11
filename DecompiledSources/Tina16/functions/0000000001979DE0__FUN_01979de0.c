/* Ghidra address: 01979de0 */
/* Ghidra symbol: FUN_01979de0 */


longlong * FUN_01979de0(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + -0x30))(*param_1);
  FUN_01979e40(plVar1,0xff);
  *(undefined1 *)((longlong)plVar1 + 0xd2) = param_2;
  (**(code **)(*plVar1 + 0xf8))(plVar1,param_1);
  plVar1[0x1e] = (longlong)param_1;
  (**(code **)(*plVar1 + 0x100))(plVar1,param_1);
  return plVar1;
}

