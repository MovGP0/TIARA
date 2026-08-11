/* Ghidra address: 00813e30 */
/* Ghidra symbol: FUN_00813e30 */


void FUN_00813e30(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xc1) != param_2) {
    *(char *)(param_1 + 0xc1) = param_2;
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    if ((param_2 == '\0') && (*(longlong *)(param_1 + 0x28) != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = 0;
      FUN_00410f20(uVar1);
    }
    FUN_00814f60(param_1);
  }
  return;
}

