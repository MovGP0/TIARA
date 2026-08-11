/* Ghidra address: 005b3750 */
/* Ghidra symbol: FUN_005b3750 */


void FUN_005b3750(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    while (lVar1 = *(longlong *)(param_1 + 0x78), 0 < *(int *)(lVar1 + 0x10)) {
      uVar3 = *(uint *)(lVar1 + 0x10) - 1;
      if (*(uint *)(lVar1 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      FUN_00410f20(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar3 * 8));
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_00410f20(uVar2);
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

