/* Ghidra address: 00adf750 */
/* Ghidra symbol: FUN_00adf750 */


void FUN_00adf750(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x2a0);
  uVar2 = FUN_00a4a4f0(param_2);
  FUN_00ac0ab0(*(undefined8 *)(lVar1 + 0xe8),uVar2);
  FUN_00ad4730(*(undefined8 *)(param_1 + 0x2a0));
  return;
}

