/* Ghidra address: 00f018d0 */
/* Ghidra symbol: FUN_00f018d0 */


void FUN_00f018d0(longlong param_1,short *param_2,short param_3)

{
  undefined8 uVar1;
  
  if (((*(char *)(param_1 + 0x530) == '\x01') && (*param_2 == 0xd)) && (param_3 == 4)) {
    FUN_00f024c0(*(undefined8 *)(param_1 + 0x508));
    uVar1 = FUN_0065b870(param_1);
    FUN_00f00aa0(uVar1,0x102);
  }
  else {
    FUN_0083e0a0(param_1,param_2,param_3);
  }
  return;
}

