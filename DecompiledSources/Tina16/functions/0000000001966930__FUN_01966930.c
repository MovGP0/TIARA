/* Ghidra address: 01966930 */
/* Ghidra symbol: FUN_01966930 */


undefined4 FUN_01966930(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x2e0) == 0) {
    FUN_01966c80(param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(lVar1 + 0xd0))(lVar1);
  }
  return uVar2;
}

