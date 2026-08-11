/* Ghidra address: 00a9d1c0 */
/* Ghidra symbol: FUN_00a9d1c0 */


void FUN_00a9d1c0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x440));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x520));
  if (*(longlong *)(param_1 + 0x550) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x38) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x550);
    *(undefined8 *)(param_1 + 0x550) = 0;
    FUN_00410f20(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_00410f20(uVar1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x530));
  FUN_00a93170(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

