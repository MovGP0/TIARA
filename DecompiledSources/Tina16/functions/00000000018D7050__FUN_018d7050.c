/* Ghidra address: 018d7050 */
/* Ghidra symbol: FUN_018d7050 */


void FUN_018d7050(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_5;
  uVar2 = param_5[1];
  uVar3 = *param_6;
  uVar4 = param_6[1];
  *(undefined8 *)(param_1 + 0x90) = param_2;
  *(undefined8 *)(param_1 + 0x98) = param_3;
  *(undefined8 *)(param_1 + 0x70) = param_4;
  *(undefined8 *)(param_1 + 0x4c) = uVar1;
  *(undefined8 *)(param_1 + 0x54) = uVar2;
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  return;
}

