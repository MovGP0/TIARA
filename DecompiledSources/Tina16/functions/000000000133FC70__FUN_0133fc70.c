/* Ghidra address: 0133fc70 */
/* Ghidra symbol: FUN_0133fc70 */


void FUN_0133fc70(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_2c;
  
  iVar4 = *(int *)(param_1 + 0x2d8);
  local_2c = 1;
  if (0 < iVar4) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)local_2c * 8);
      if (*(char *)(lVar1 + 0x118) != '\0') {
        (**(code **)(lVar1 + 0xd8))(lVar1,param_1,*(undefined8 *)(lVar1 + 0x60));
      }
      if (*(ushort *)(lVar1 + 0x10) != 0) {
        iVar3 = 1;
        for (uVar5 = (uint)*(ushort *)(lVar1 + 0x10); uVar5 != 0; uVar5 = uVar5 - 1) {
          plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x28) + -8 + (longlong)iVar3 * 8);
          (**(code **)(*plVar2 + 0x20))(plVar2);
          iVar3 = iVar3 + 1;
        }
      }
      local_2c = local_2c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

