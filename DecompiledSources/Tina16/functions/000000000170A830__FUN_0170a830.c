/* Ghidra address: 0170a830 */
/* Ghidra symbol: FUN_0170a830 */


void FUN_0170a830(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [32];
  
  FUN_00411a80(param_1,param_2);
  FUN_0170a7d0(auStack_38,param_1 + 8);
  FUN_0170a7d0(auStack_38,param_1 + 0x10);
  FUN_0170a7d0(auStack_38,param_1 + 0x18);
  FUN_0170a7d0(auStack_38,param_1 + 0x20);
  FUN_0170a7d0(auStack_38,param_1 + 0x28);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

