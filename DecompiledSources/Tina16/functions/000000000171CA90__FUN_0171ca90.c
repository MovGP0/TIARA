/* Ghidra address: 0171ca90 */
/* Ghidra symbol: FUN_0171ca90 */


void FUN_0171ca90(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong local_30;
  
  local_30 = 0;
  FUN_004194b0(&local_30,param_1[1],&DAT_0170df20);
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_00419430(param_1 + 1,&DAT_0170df20);
  FUN_0171bcd0(param_1,0);
  *(undefined4 *)(param_1 + 4) = 0;
  iVar3 = 0;
  if (local_30 != 0) {
    iVar3 = (int)*(undefined8 *)(local_30 + -8);
  }
  iVar1 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar2 = (longlong)iVar1;
      if (*(int *)(local_30 + lVar2 * 0x10) != -1) {
        (**(code **)(*param_1 + 0x10))(param_1,*(undefined1 *)(local_30 + 4 + lVar2 * 0x10),5);
        (**(code **)(*param_1 + 0x18))(param_1,*(undefined8 *)(local_30 + 8 + lVar2 * 0x10),5);
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00419430(&local_30,&DAT_0170df20);
  return;
}

