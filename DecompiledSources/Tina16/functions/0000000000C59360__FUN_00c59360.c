/* Ghidra address: 00c59360 */
/* Ghidra symbol: FUN_00c59360 */


longlong * FUN_00c59360(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_00829530(&PTR_FUN_00c58ed8,1,param_1);
  plVar1[0x40] = param_1;
  plVar1[0x3f] = (longlong)FUN_00c59920;
  plVar1[0x2c] = param_1;
  plVar1[0x2b] = (longlong)FUN_00c59860;
  FUN_0064dbe0(plVar1,1);
  (**(code **)(*plVar1 + 0x128))(plVar1,1);
  *(undefined1 *)(plVar1 + 0x69) = 2;
  *(undefined1 *)((longlong)plVar1 + 0x349) = param_2;
  (**(code **)(*plVar1 + 0x130))(plVar1,param_1);
  return plVar1;
}

