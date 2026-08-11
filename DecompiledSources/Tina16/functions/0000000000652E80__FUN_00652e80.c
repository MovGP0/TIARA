/* Ghidra address: 00652e80 */
/* Ghidra symbol: FUN_00652e80 */


void FUN_00652e80(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  FUN_00654400(param_1);
  FUN_0064c4b0(param_1,param_2);
  FUN_00654410(param_1);
  FUN_00652d40(param_1);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_0064fca0(param_1,0xb011,0,0);
  }
  FUN_00655e40(param_1);
  return;
}

