/* Ghidra address: 00614540 */
/* Ghidra symbol: FUN_00614540 */


void FUN_00614540(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    iVar2 = FUN_006146c0(param_1);
    uVar3 = iVar2 - 1;
    if (-1 < (int)uVar3) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x80);
        if (*(uint *)(lVar1 + 0x10) <= uVar3) {
          FUN_00594f90();
        }
        FUN_00614a30(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar3 * 8),0);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0xffffffff);
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  FUN_004d2470(param_1);
  return;
}

