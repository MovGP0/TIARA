/* Ghidra address: 01628450 */
/* Ghidra symbol: FUN_01628450 */


longlong * FUN_01628450(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 *local_20;
  
  plVar1 = (longlong *)FUN_01628160(0x40b,param_1,param_2);
  (**(code **)(*plVar1 + 0x2d0))(plVar1,0,&local_20);
  *local_20 = *(undefined1 *)(param_2 + 0xa8);
  return plVar1;
}

