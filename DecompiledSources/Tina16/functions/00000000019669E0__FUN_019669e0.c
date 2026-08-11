/* Ghidra address: 019669e0 */
/* Ghidra symbol: FUN_019669e0 */


undefined4 FUN_019669e0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined4 *)(param_1 + 0x2d4);
  if (*(longlong *)(param_1 + 0x2e0) == 0) {
    FUN_01966c80(param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  if (lVar1 != 0) {
    uVar4 = FUN_019667e0(param_1);
    cVar2 = (**(code **)(lVar1 + 0xb8))(lVar1,uVar4);
    if ((cVar2 != '\0') && (*(int *)(param_1 + 0x2d4) == 0x1fffffff)) {
      uVar4 = FUN_019667e0(param_1);
      uVar3 = (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0xf0))
                        (*(longlong *)(param_1 + 0x2e0),uVar4);
    }
  }
  return uVar3;
}

