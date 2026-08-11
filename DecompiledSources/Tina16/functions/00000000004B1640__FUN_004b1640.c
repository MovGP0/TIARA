/* Ghidra address: 004b1640 */
/* Ghidra symbol: FUN_004b1640 */


void FUN_004b1640(longlong param_1,uint param_2)

{
  longlong *plVar1;
  
  FUN_00411a80(param_1,param_2);
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 8));
  }
  FUN_004b16a0(param_1);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

