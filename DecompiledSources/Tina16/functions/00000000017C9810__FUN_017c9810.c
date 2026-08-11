/* Ghidra address: 017c9810 */
/* Ghidra symbol: FUN_017c9810 */


void FUN_017c9810(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong *local_40 [2];
  
  uVar6 = (uint)*(byte *)(param_2 + 5);
  iVar4 = 0;
  if (-1 < (int)(uVar6 - 1)) {
    do {
      iVar1 = *(int *)(*(longlong *)(param_2 + 0x38) + -4 + (longlong)(iVar4 + 1) * 4);
      if ((-1 < iVar1) && (iVar1 <= *(int *)(param_1 + 0x2f0) + -1)) {
        plVar2 = (longlong *)FUN_004095c0(0x10);
        *plVar2 = param_2;
        *(int *)(plVar2 + 1) = iVar4 + 1;
        lVar5 = (longlong)iVar1;
        if (*(longlong *)(*(longlong *)(param_1 + 0x598) + lVar5 * 8) == 0) {
          uVar3 = FUN_01b13e50(&PTR_FUN_01aff7a8,1);
          *(undefined8 *)(*(longlong *)(param_1 + 0x598) + lVar5 * 8) = uVar3;
        }
        local_40[0] = plVar2;
        FUN_00597e50(*(longlong *)(*(longlong *)(param_1 + 0x598) + lVar5 * 8) + 8,local_40);
      }
      iVar4 = iVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

