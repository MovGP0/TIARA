/* Ghidra address: 00c03980 */
/* Ghidra symbol: FUN_00c03980 */


void FUN_00c03980(longlong param_1,undefined4 param_2,undefined2 param_3)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  ushort uVar4;
  
  iVar2 = FUN_00bd7560(*(undefined8 *)(param_1 + 0x5d8),*(undefined2 *)(param_1 + 0x640),
                       *(undefined2 *)(param_1 + 0x642),param_2,param_3);
  if (iVar2 < 0) {
    iVar2 = FUN_00bd74c0(*(undefined8 *)(param_1 + 0x5d8),param_2,param_3);
    if (iVar2 < 0) {
      sVar1 = 0;
    }
    else {
      lVar3 = FUN_00bd7720(*(undefined8 *)(param_1 + 0x5d8),iVar2);
      sVar1 = *(short *)(lVar3 + 0x20);
    }
  }
  else {
    lVar3 = FUN_00bd7720(*(undefined8 *)(param_1 + 0x5d8),iVar2);
    sVar1 = *(short *)(lVar3 + 0x20);
  }
  if (((sVar1 == 0) && (uVar4 = (ushort)param_2, 0x1d < uVar4)) && (uVar4 < 0x92)) {
    *(ushort *)(param_1 + 0x640) = uVar4;
    *(undefined2 *)(param_1 + 0x642) = param_3;
  }
  else {
    *(undefined2 *)(param_1 + 0x640) = 0;
    *(undefined2 *)(param_1 + 0x642) = 0;
  }
  return;
}

