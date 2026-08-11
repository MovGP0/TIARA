/* Ghidra address: 016ee330 */
/* Ghidra symbol: FUN_016ee330 */


void FUN_016ee330(longlong param_1,ulonglong *param_2,ushort param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (param_4 == 0) {
    param_4 = param_1;
  }
  if (*(ulonglong *)(param_4 + 0x60) == 0) {
    uVar2 = FUN_00409570((longlong)(int)((uint)param_3 + *(int *)PTR_DAT_020036d8 * 2));
    *(undefined8 *)(param_4 + 0x70) = uVar2;
    uVar3 = *(longlong *)(param_4 + 0x70) + (longlong)(*(int *)PTR_DAT_020036d8 + -1) &
            (longlong)-*(int *)PTR_DAT_020036d8;
    *(ulonglong *)(param_4 + 0x60) = uVar3;
    *param_2 = uVar3;
    *(ushort *)(param_4 + 0x58) = param_3;
  }
  else if (*(ushort *)(param_4 + 0x58) == param_3) {
    *param_2 = *(ulonglong *)(param_4 + 0x60);
  }
  else if (*(ushort *)(param_4 + 0x58) == param_3) {
    FUN_01b04d70(0x210,&LAB_016ee46c,0);
  }
  else {
    lVar1 = *(longlong *)(param_4 + 0x70);
    FUN_00409620(param_4 + 0x70,(longlong)(int)((uint)param_3 + *(int *)PTR_DAT_020036d8 * 2));
    uVar3 = *(longlong *)(param_4 + 0x70) + (longlong)(*(int *)PTR_DAT_020036d8 + -1) &
            (longlong)-*(int *)PTR_DAT_020036d8;
    *(ulonglong *)(param_4 + 0x60) = uVar3;
    if (lVar1 != *(longlong *)(param_4 + 0x70)) {
      FUN_00409a70((*param_2 - lVar1) + *(longlong *)(param_4 + 0x70),uVar3,
                   *(undefined2 *)(param_4 + 0x58));
    }
    *param_2 = *(ulonglong *)(param_4 + 0x60);
    *(ushort *)(param_4 + 0x58) = param_3;
  }
  return;
}

