/* Ghidra address: 018068a0 */
/* Ghidra symbol: FUN_018068a0 */


undefined8 FUN_018068a0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((-1 < param_2) && (param_2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x10))) {
    lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30));
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 8);
    }
  }
  return uVar2;
}

