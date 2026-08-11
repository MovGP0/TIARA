/* Ghidra address: 015124f0 */
/* Ghidra symbol: FUN_015124f0 */


void FUN_015124f0(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined4 uVar1;
  
  if (*param_3 == 0xd) {
    *param_3 = 0;
    uVar1 = FUN_00f04d50(*(undefined8 *)(param_1 + 0xd70));
    *(undefined4 *)(*(longlong *)(param_1 + 0xed8) + 0x38) = uVar1;
  }
  return;
}

