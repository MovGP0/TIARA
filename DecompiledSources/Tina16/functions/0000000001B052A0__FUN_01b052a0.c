/* Ghidra address: 01b052a0 */
/* Ghidra symbol: FUN_01b052a0 */


void FUN_01b052a0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      iVar2 = 1;
      for (uVar3 = (uint)*(byte *)(param_1 + 4); uVar3 != 0; uVar3 = uVar3 - 1) {
        FUN_016e9160(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + -8 + (longlong)iVar2 * 8));
        iVar2 = iVar2 + 1;
      }
      FUN_004095f0(*(undefined8 *)(param_1 + 0x40),(ulonglong)*(byte *)(param_1 + 4) << 3);
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_004095f0(*(longlong *)(param_1 + 0x38),(uint)*(byte *)(param_1 + 5) * 4);
    }
    if (*(char *)(param_1 + 0x111) != '\0') {
      (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0x60));
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_004095f0(*(undefined8 *)(param_1 + 0x70),
                   (longlong)(int)((uint)*(ushort *)(param_1 + 0x58) + *(int *)PTR_DAT_020036d8 * 2)
                  );
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_004095f0(*(longlong *)(param_1 + 0x68),*(undefined2 *)(param_1 + 0x58));
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x130) = 0;
    FUN_00410f20(uVar1);
    FUN_004095f0(param_1);
  }
  return;
}

