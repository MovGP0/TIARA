/* Ghidra address: 00a94980 */
/* Ghidra symbol: FUN_00a94980 */


undefined8 FUN_00a94980(longlong param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x10) <= iVar3) break;
    lVar2 = FUN_004aeac0(param_1,iVar3);
    iVar1 = *(int *)(lVar2 + 0x30);
    iVar3 = iVar3 + 1;
  } while (iVar1 < param_2);
  iVar4 = iVar3 + -1;
  if (param_2 < iVar1) {
    iVar4 = iVar3 + -2;
  }
  lVar2 = FUN_004aeac0(param_1,iVar4);
  *param_3 = *(undefined4 *)(lVar2 + 0x54);
  return *(undefined8 *)(lVar2 + 0x38);
}

