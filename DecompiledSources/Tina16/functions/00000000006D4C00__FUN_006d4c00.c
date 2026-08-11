/* Ghidra address: 006d4c00 */
/* Ghidra symbol: FUN_006d4c00 */


void FUN_006d4c00(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x490);
  *(undefined8 *)(param_1 + 0x490) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x4c8);
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x4b8);
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x4a0);
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  FUN_00410f20(uVar1);
  FUN_00652b60(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

