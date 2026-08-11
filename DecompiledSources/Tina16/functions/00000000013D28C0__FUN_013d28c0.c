/* Ghidra address: 013d28c0 */
/* Ghidra symbol: FUN_013d28c0 */


void FUN_013d28c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  FUN_013d2900();
  return;
}

