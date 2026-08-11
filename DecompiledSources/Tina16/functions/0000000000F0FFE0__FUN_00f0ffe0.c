/* Ghidra address: 00f0ffe0 */
/* Ghidra symbol: FUN_00f0ffe0 */


void FUN_00f0ffe0(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined8 uVar1;
  
  if (*param_3 == 0xd) {
    uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6d0));
    FUN_01ae24a0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),1,uVar1);
    *param_3 = 0;
  }
  return;
}

