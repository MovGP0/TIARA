/* Ghidra address: 019c05e0 */
/* Ghidra symbol: FUN_019c05e0 */


longlong * FUN_019c05e0(longlong *param_1,ulonglong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  uVar1 = *param_2;
  local_30 = (int)uVar1;
  local_38 = (int)*param_3;
  iStack_2c = (int)(uVar1 >> 0x20);
  iStack_34 = (int)((ulonglong)*param_3 >> 0x20);
  if (local_30 == local_38) {
    uVar4 = iStack_34 - iStack_2c >> 0x1f;
    iVar5 = (iStack_34 - iStack_2c ^ uVar4) - uVar4;
    FUN_00419260(param_1,&DAT_0147b748,1,(longlong)(iVar5 + 1));
    if (iStack_34 < iStack_2c) {
      iVar2 = 0;
      if (-1 < iVar5) {
        iVar5 = iVar5 + 1;
        do {
          uVar3 = FUN_00498310(uVar1 & 0xffffffff,iStack_2c - iVar2);
          *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar3;
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else {
      iVar2 = 0;
      if (-1 < iVar5) {
        iVar5 = iVar5 + 1;
        do {
          uVar3 = FUN_00498310(uVar1 & 0xffffffff,iStack_2c + iVar2);
          *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar3;
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  else if (iStack_2c == iStack_34) {
    uVar4 = local_38 - local_30 >> 0x1f;
    iVar5 = (local_38 - local_30 ^ uVar4) - uVar4;
    FUN_00419260(param_1,&DAT_0147b748,1,(longlong)(iVar5 + 1));
    if (local_38 < local_30) {
      iVar2 = 0;
      if (-1 < iVar5) {
        iVar5 = iVar5 + 1;
        do {
          uVar3 = FUN_00498310(local_30 - iVar2,iStack_2c);
          *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar3;
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else {
      iVar2 = 0;
      if (-1 < iVar5) {
        iVar5 = iVar5 + 1;
        do {
          uVar3 = FUN_00498310(local_30 + iVar2,iStack_2c);
          *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar3;
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  else {
    FUN_00419430(param_1,&DAT_0147b748);
  }
  return param_1;
}

