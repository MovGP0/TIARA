/* Ghidra address: 016ad080 */
/* Ghidra symbol: FUN_016ad080 */


undefined8 FUN_016ad080(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)(param_1 + 0x50) + 0x8450) ==
      *(int *)(*(longlong *)(param_1 + 0x50) + 0x8454)) {
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x50) + 0x40);
    lVar2 = (**(code **)*puVar1)(puVar1);
    lVar3 = FUN_004b6da0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x40));
    if (lVar2 == lVar3) {
      return 1;
    }
  }
  return 0;
}

