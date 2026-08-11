/* Ghidra address: 017dd0a0 */
/* Ghidra symbol: FUN_017dd0a0 */


void FUN_017dd0a0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x2d8);
    local_30 = 1;
    if (0 < iVar3) {
      do {
        lVar1 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x2b0) + -8 + (longlong)local_30 * 8
                 );
        local_2c = 1;
        for (uVar4 = (uint)*(byte *)(lVar1 + 4); uVar4 != 0; uVar4 = uVar4 - 1) {
          lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x40) + -8 + (longlong)local_2c * 8);
          FUN_017dd020(auStack_58,*(undefined8 *)(lVar2 + 0x58),*(undefined8 *)(lVar2 + 0x60),
                       *(undefined4 *)(lVar2 + 0x68));
          if (*(char *)(lVar1 + 0x11b) != '\0') {
            (**(code **)(lVar1 + 0xf0))
                      (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xd8),lVar1,param_2,
                       *(undefined8 *)(lVar1 + 0x60));
          }
          local_2c = local_2c + 1;
        }
        local_30 = local_30 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

