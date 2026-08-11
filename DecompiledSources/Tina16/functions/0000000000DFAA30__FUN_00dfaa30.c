/* Ghidra address: 00dfaa30 */
/* Ghidra symbol: FUN_00dfaa30 */


void FUN_00dfaa30(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  
  if ((*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0xdf0) != 0) &&
     (*(double *)(param_1 + 0x450) == 0.0)) {
    FUN_01b053c0((undefined8 *)(param_1 + 0x550),param_1 + 0x558,param_1 + 0x560);
    *(undefined1 *)(param_1 + 0x548) = 1;
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0xdf0) + 0x10);
    *(int *)(param_1 + 0x560) = iVar5;
    uVar3 = FUN_00409570((longlong)(iVar5 * 8));
    *(undefined8 *)(param_1 + 0x550) = uVar3;
    uVar3 = FUN_00409570((longlong)(*(int *)(param_1 + 0x560) * 8));
    *(undefined8 *)(param_1 + 0x558) = uVar3;
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0xdf0) + 0x10);
    uVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0xdf0);
        if (*(uint *)(lVar2 + 0x10) <= uVar4) {
          FUN_00594f90();
        }
        uVar1 = *(undefined4 *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar4 * 4);
        *(ulonglong *)(*(longlong *)(param_1 + 0x558) + -8 + (longlong)(int)(uVar4 + 1) * 8) =
             CONCAT44(uVar1,uVar1);
        FUN_017dcb20(*(undefined8 *)(param_1 + 0xd8),uVar1,uVar1);
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

