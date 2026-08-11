/* Ghidra address: 00d78760 */
/* Ghidra symbol: FUN_00d78760 */


void FUN_00d78760(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = 0;
  FUN_00410f20(uVar1);
  FUN_00d75a80(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

