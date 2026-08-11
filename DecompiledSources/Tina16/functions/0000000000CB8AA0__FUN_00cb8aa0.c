/* Ghidra address: 00cb8aa0 */
/* Ghidra symbol: FUN_00cb8aa0 */


void FUN_00cb8aa0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = 0;
  FUN_00410f20(uVar1);
  FUN_00c8d2a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

