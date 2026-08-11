/* Ghidra address: 00652b20 */
/* Ghidra symbol: FUN_00652b20 */


longlong * FUN_00652b20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(param_1 + -0x30))(param_1);
  plVar1[0x6b] = param_2;
  (**(code **)(*plVar1 + 0x78))(plVar1,0xff,0);
  return plVar1;
}

