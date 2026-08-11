/* Ghidra address: 00f53f30 */
/* Ghidra symbol: FUN_00f53f30 */


undefined8 FUN_00f53f30(longlong param_1,char param_2,char param_3)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    uVar1 = 0;
  }
  else if (((param_2 == '\x01') || (param_2 == '\x03')) || (param_2 == '\x04')) {
    uVar1 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,*(undefined8 *)(param_1 + 0xb0));
  }
  else if (param_3 == '\0') {
    uVar1 = FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,*(undefined8 *)(param_1 + 0xb0));
  }
  else {
    uVar1 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,*(undefined8 *)(param_1 + 0xb0));
  }
  return uVar1;
}

