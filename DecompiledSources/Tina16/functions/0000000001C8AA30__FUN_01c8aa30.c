/* Ghidra address: 01c8aa30 */
/* Ghidra symbol: FUN_01c8aa30 */


void FUN_01c8aa30(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x2780) != 0) && (*(longlong *)(param_1 + 0x1b38) != 0)) {
    iVar1 = FUN_004aeba0(*(longlong *)(param_1 + 0x2780),*(undefined8 *)(param_1 + 0x1b38));
    if (iVar1 != -1) {
      iVar1 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x2780),*(undefined8 *)(param_1 + 0x1b38));
      iVar2 = FUN_01c8a290(param_1,*(undefined8 *)(param_1 + 0x2770),
                           *(undefined8 *)(param_1 + 0x2788));
      if (iVar1 != iVar2) {
        lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar1);
        lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar1);
        FUN_01c8ab30(param_1,*(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar4 + 0x10));
      }
    }
  }
  return;
}

