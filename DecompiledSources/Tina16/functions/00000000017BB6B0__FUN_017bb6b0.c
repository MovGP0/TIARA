/* Ghidra address: 017bb6b0 */
/* Ghidra symbol: FUN_017bb6b0 */


void FUN_017bb6b0(longlong param_1,uint param_2)

{
  undefined1 auStack_38 [32];
  
  FUN_00411a80(param_1,param_2);
  FUN_017bb600(auStack_38,*(undefined8 *)(param_1 + 0x20));
  FUN_017bb600(auStack_38,*(undefined8 *)(param_1 + 0x30));
  FUN_017bb660(auStack_38,*(undefined8 *)(param_1 + 0x28));
  FUN_017bb660(auStack_38,*(undefined8 *)(param_1 + 0x38));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  FUN_017bb280(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

