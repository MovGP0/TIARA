/* Ghidra address: 00d007d0 */
/* Ghidra symbol: FUN_00d007d0 */


void FUN_00d007d0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x210) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x208) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x218) = 0;
  FUN_00410f20(uVar1);
  FUN_00d05650(param_1,0);
  FUN_00cbcf10(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

