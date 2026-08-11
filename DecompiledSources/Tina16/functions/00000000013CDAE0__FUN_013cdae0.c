/* Ghidra address: 013cdae0 */
/* Ghidra symbol: FUN_013cdae0 */


void FUN_013cdae0(longlong param_1)

{
  undefined1 uVar1;
  bool bVar2;
  
  if ((*(char *)(param_1 + 0x931) != '\0') && (*(char *)(param_1 + 0x932) == '\0')) {
    bVar2 = *(int *)(*(longlong *)(param_1 + 0x870) + 0x4a8) == 1;
    *(bool *)(*(longlong *)(param_1 + 0x900) + 0x30a) = bVar2;
    if (bVar2) {
      (**(code **)(**(longlong **)(param_1 + 0x728) + 0x268))(*(longlong **)(param_1 + 0x728),1);
    }
    if (*(char *)(*(longlong *)(param_1 + 0x900) + 0x30a) == '\0') {
      FUN_013ce430(param_1,0,*(undefined8 *)(param_1 + 0x8c8),0,0);
    }
    else {
      if (*(char *)(param_1 + 0x8e8) == '\0') {
        uVar1 = FUN_013d0630(param_1);
        *(undefined1 *)(param_1 + 0x8e8) = uVar1;
      }
      FUN_013ce430(param_1,0,*(undefined8 *)(param_1 + 0x8d0),0,0);
    }
  }
  return;
}

