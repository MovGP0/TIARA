/* Ghidra address: 00663b20 */
/* Ghidra symbol: FUN_00663b20 */


void FUN_00663b20(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x88) = param_2;
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x28));
  FUN_00664e30(DAT_020122b8,uVar2);
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  uVar2 = thunk_FUN_03dfb93b(*(undefined8 *)(param_1 + 0x80),0,0x412);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  FUN_00663cf0(param_1);
  return;
}

