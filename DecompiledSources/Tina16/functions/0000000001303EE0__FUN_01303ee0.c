/* Ghidra address: 01303ee0 */
/* Ghidra symbol: FUN_01303ee0 */


void FUN_01303ee0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00654c00(*(undefined8 *)(param_1 + 0x850));
  if (iVar1 != 0) {
    iVar1 = FUN_00654c00(*(undefined8 *)(param_1 + 0x850));
    iVar1 = iVar1 + -1;
    if (-1 < iVar1) {
      do {
        uVar2 = FUN_00654bc0(*(undefined8 *)(param_1 + 0x850),iVar1);
        FUN_00410f20(uVar2);
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x850) + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xad4) = 0;
  return;
}

