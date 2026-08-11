/* Ghidra address: 019668b0 */
/* Ghidra symbol: FUN_019668b0 */


undefined4 FUN_019668b0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x2e0) == 0) {
    FUN_01966c80(param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  if (lVar1 != 0) {
    uVar3 = FUN_019667e0(param_1);
    uVar2 = (**(code **)(lVar1 + 0xb8))(lVar1,uVar3);
  }
  return uVar2;
}

