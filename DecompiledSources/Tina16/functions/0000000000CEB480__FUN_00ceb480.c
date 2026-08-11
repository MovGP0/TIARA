/* Ghidra address: 00ceb480 */
/* Ghidra symbol: FUN_00ceb480 */


void FUN_00ceb480(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_00410f20(uVar1);
  FUN_004b17c0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

