/* Ghidra address: 016284a0 */
/* Ghidra symbol: FUN_016284a0 */


longlong * FUN_016284a0(undefined8 param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  undefined1 *local_30 [2];
  
  plVar1 = (longlong *)FUN_01628160(0x40a,param_1,param_2);
  (**(code **)(*plVar1 + 0x2d0))(plVar1,0,local_30);
  *local_30[0] = *(undefined1 *)(param_2 + 0xa8);
  if (param_3 != '\0') {
    (**(code **)(*plVar1 + 0x2d0))(plVar1,10,local_30);
    *local_30[0] = 1;
  }
  return plVar1;
}

