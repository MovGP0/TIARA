/* Ghidra address: 006885e0 */
/* Ghidra symbol: FUN_006885e0 */


void FUN_006885e0(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (char)param_1[0x98]) {
    *(char *)(param_1 + 0x98) = param_2;
    if (param_1[0x9d] != 0) {
      uVar1 = FUN_007d56e0(param_1[0x9d]);
      FUN_006886b0(param_1,uVar1);
    }
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

