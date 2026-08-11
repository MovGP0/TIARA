/* Ghidra address: 01a8b520 */
/* Ghidra symbol: FUN_01a8b520 */


void FUN_01a8b520(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined8 uVar1;
  
  if (*param_3 == 0xd) {
    uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0xe00));
    FUN_01ae24a0(*(undefined8 *)(param_1 + 0x798),0,uVar1);
    *param_3 = 0;
  }
  return;
}

