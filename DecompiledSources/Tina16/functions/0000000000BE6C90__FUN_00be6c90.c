/* Ghidra address: 00be6c90 */
/* Ghidra symbol: FUN_00be6c90 */


undefined8 FUN_00be6c90(longlong param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_20;
  int iStack_1c;
  
  iVar3 = param_2[1];
  if (*(int *)(param_1 + 0x30) < iVar3) {
    local_20 = *param_2;
    iStack_1c = FUN_00be7fe0(param_1);
    iStack_1c = iStack_1c + (iVar3 - *(int *)(param_1 + 0x30));
  }
  else {
    if (iVar3 == 1) {
      iStack_1c = 0;
    }
    else {
      iStack_1c = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar3 + -2) * 4);
    }
    iVar1 = 0;
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar3 + -1) * 4) + -1;
    if (iStack_1c <= iVar3) {
      iVar3 = (iVar3 - iStack_1c) + 1;
      do {
        uVar2 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)iStack_1c * 2);
        iVar1 = iVar1 + uVar2;
        if (*param_2 <= iVar1) {
          local_20 = (*param_2 - iVar1) + uVar2;
          iStack_1c = iStack_1c + 1;
          goto LAB_00be6d65;
        }
        iStack_1c = iStack_1c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iStack_1c = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(param_2[1] + -1) * 4);
    local_20 = (*param_2 - iVar1) +
               (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)(iStack_1c + -1) * 2);
  }
LAB_00be6d65:
  return CONCAT44(iStack_1c,local_20);
}

