/* Ghidra address: 00f100d0 */
/* Ghidra symbol: FUN_00f100d0 */


void FUN_00f100d0(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined8 uVar1;
  
  if (*param_3 == 0xd) {
    uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0x770));
    FUN_01ae24a0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),0,uVar1);
    *param_3 = 0;
  }
  return;
}

