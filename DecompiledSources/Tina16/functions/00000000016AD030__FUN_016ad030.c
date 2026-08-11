/* Ghidra address: 016ad030 */
/* Ghidra symbol: FUN_016ad030 */


void FUN_016ad030(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x40));
  uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x40))(*(undefined8 **)(param_1 + 0x40));
  FUN_016ad020(param_1,(iVar1 - *(int *)(param_1 + 0x8454)) + *(int *)(param_1 + 0x8450),uVar2);
  return;
}

