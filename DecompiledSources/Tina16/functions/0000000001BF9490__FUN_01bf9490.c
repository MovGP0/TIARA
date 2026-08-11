/* Ghidra address: 01bf9490 */
/* Ghidra symbol: FUN_01bf9490 */


undefined8 FUN_01bf9490(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x18) == 0) {
    FUN_004b18b0(param_1,param_2);
  }
  else {
    FUN_01bf9430(param_1,param_2);
  }
  return param_2;
}

