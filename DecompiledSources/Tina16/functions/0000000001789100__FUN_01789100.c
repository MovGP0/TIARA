/* Ghidra address: 01789100 */
/* Ghidra symbol: FUN_01789100 */


void FUN_01789100(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x720) == 0x1fffffff) {
    uVar2 = FUN_00f025f0(*(undefined8 *)(param_1 + 0x6d0));
    *(undefined4 *)(param_1 + 0x720) = uVar2;
  }
  if (param_3 == 7) {
    lVar1 = *(longlong *)(param_1 + 0x738);
    uVar3 = param_4 - *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4c0);
    if (*(uint *)(lVar1 + 0x10) <= uVar3) {
      FUN_00594f90();
    }
    FUN_00f025b0(*(undefined8 *)(param_1 + 0x6d0),
                 *(undefined4 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar3 * 4));
  }
  else {
    FUN_00f025b0(*(undefined8 *)(param_1 + 0x6d0),*(undefined4 *)(param_1 + 0x720));
  }
  return;
}

