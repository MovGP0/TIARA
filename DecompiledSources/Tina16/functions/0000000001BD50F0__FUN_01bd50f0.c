/* Ghidra address: 01bd50f0 */
/* Ghidra symbol: FUN_01bd50f0 */


void FUN_01bd50f0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x360);
  *(undefined8 *)(param_1 + 0x360) = 0;
  FUN_00410f20(uVar1);
  FUN_01c04100(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

