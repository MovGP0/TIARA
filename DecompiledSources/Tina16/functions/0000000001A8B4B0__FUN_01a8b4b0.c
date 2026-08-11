/* Ghidra address: 01a8b4b0 */
/* Ghidra symbol: FUN_01a8b4b0 */


void FUN_01a8b4b0(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined8 uVar1;
  
  if (*param_3 == 0xd) {
    uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0xdc8));
    FUN_01ae24a0(*(undefined8 *)(param_1 + 0x798),1,uVar1);
    *param_3 = 0;
  }
  return;
}

