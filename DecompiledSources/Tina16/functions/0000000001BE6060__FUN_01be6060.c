/* Ghidra address: 01be6060 */
/* Ghidra symbol: FUN_01be6060 */


void FUN_01be6060(longlong *param_1)

{
  longlong *plVar1;
  
  while( true ) {
    plVar1 = (longlong *)FUN_01be0910(*(undefined8 *)(param_1[0xba] + 0x648));
    if (plVar1 == param_1) break;
    FUN_01be0920(*(undefined8 *)(param_1[0xba] + 0x648));
  }
  (**(code **)(*param_1 + 0x3d8))(param_1,1);
  return;
}

