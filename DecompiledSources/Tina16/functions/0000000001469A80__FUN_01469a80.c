/* Ghidra address: 01469a80 */
/* Ghidra symbol: FUN_01469a80 */


void FUN_01469a80(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong local_20 [2];
  
  local_20[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4d8);
  (**(code **)(*plVar1 + 0x38))(plVar1,local_20);
  uVar2 = 0;
  if (local_20[0] != 0) {
    uVar2 = (ulonglong)*(uint *)(local_20[0] + -4);
  }
  (**(code **)(**(longlong **)(param_1 + 0x708) + 0x128))
            (*(longlong **)(param_1 + 0x708),CONCAT71((int7)(uVar2 >> 8),0 < (int)uVar2));
  FUN_00414480(local_20);
  return;
}

