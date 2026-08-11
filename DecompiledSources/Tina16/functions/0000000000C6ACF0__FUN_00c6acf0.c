/* Ghidra address: 00c6acf0 */
/* Ghidra symbol: FUN_00c6acf0 */


void FUN_00c6acf0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x348));
  uVar1 = FUN_0060ce20(*(undefined8 *)(param_1 + 0x350));
  thunk_FUN_041dba40(uVar1);
  uVar1 = FUN_0060ce20(*(undefined8 *)(param_1 + 0x358));
  thunk_FUN_041dba40(uVar1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x350));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x358));
  FUN_0064ac70();
  FUN_0065f1b0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

