/* Ghidra address: 017dd6b0 */
/* Ghidra symbol: FUN_017dd6b0 */


void FUN_017dd6b0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
  
  if (*(char *)(param_1 + 0x18) == '\x04') {
    FUN_004095f0(*(undefined8 *)(param_1 + 0x1c8));
    if (param_2 == '\0') {
      uVar3 = FUN_00409570((longlong)(*(int *)(param_1 + 8) * 8));
      *(undefined8 *)(param_1 + 0x1c8) = uVar3;
    }
    else {
      uVar3 = FUN_00409570((longlong)(*(int *)(param_1 + 8) << 4));
      *(undefined8 *)(param_1 + 0x1c8) = uVar3;
    }
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x2d8);
    local_30 = 1;
    if (0 < iVar4) {
      do {
        lVar1 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x2b0) + -8 + (longlong)local_30 * 8
                 );
        local_2c = 1;
        for (uVar5 = (uint)*(byte *)(lVar1 + 4); uVar5 != 0; uVar5 = uVar5 - 1) {
          lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x40) + -8 + (longlong)local_2c * 8);
          FUN_017dd630(auStack_58,*(undefined8 *)(lVar2 + 0x58),*(undefined8 *)(lVar2 + 0x60),
                       *(undefined4 *)(lVar2 + 0x68));
          if (*(char *)(lVar1 + 0x11d) != '\0') {
            (**(code **)(lVar1 + 0x100))
                      (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xd8),lVar1,param_2,
                       *(undefined8 *)(lVar1 + 0x60));
          }
          local_2c = local_2c + 1;
        }
        local_30 = local_30 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

