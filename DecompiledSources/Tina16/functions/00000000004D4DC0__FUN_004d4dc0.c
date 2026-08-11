/* Ghidra address: 004d4dc0 */
/* Ghidra symbol: FUN_004d4dc0 */


void FUN_004d4dc0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong local_38;
  longlong local_30;
  
  local_38 = *param_2;
  local_30 = param_2[1];
  if ((local_38 != param_1[0x13]) || (local_30 != param_1[0x14])) {
    iVar4 = *(int *)(param_1[0xf] + 0x10);
    uVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar1 = param_1[0xf];
        if (*(uint *)(lVar1 + 0x10) <= uVar3) {
          FUN_00594f90();
        }
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar3 * 8);
        (**(code **)(*plVar2 + 0x20))(plVar2,&local_38);
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    param_1[0x13] = local_38;
    param_1[0x14] = local_30;
    (**(code **)(*param_1 + 0x88))(param_1);
  }
  return;
}

