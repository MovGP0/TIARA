/* Ghidra address: 016ee260 */
/* Ghidra symbol: FUN_016ee260 */


void FUN_016ee260(longlong param_1,ulonglong *param_2,ushort param_3,longlong param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (param_4 == 0) {
    param_4 = param_1;
  }
  if (*(ulonglong *)(param_4 + 0x60) == 0) {
    if (param_3 == 0) {
      FUN_01b04d70(0x212,&LAB_016ee324,0);
    }
    else {
      uVar1 = FUN_00409570((longlong)(int)((uint)param_3 + *(int *)PTR_DAT_020036d8 * 2));
      *(undefined8 *)(param_4 + 0x70) = uVar1;
      uVar2 = *(longlong *)(param_4 + 0x70) + (longlong)(*(int *)PTR_DAT_020036d8 + -1) &
              (longlong)-*(int *)PTR_DAT_020036d8;
      *(ulonglong *)(param_4 + 0x60) = uVar2;
      *param_2 = uVar2;
      *(ushort *)(param_4 + 0x58) = param_3;
    }
  }
  else if (*(short *)(param_4 + 0x58) == 0) {
    FUN_01b04d70(0x212,&LAB_016ee324,0);
  }
  else {
    *param_2 = *(ulonglong *)(param_4 + 0x60);
  }
  return;
}

