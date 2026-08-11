/* Ghidra address: 00f70050 */
/* Ghidra symbol: FUN_00f70050 */


undefined8 FUN_00f70050(undefined8 param_1,int param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  lVar3 = FUN_00f6f040();
  iVar1 = DAT_0202eec0 * 2;
  if ((iVar1 < param_2 - *(int *)(lVar3 + 0xa0)) && (cVar2 = FUN_00f6e2e0(lVar3), cVar2 != '\0')) {
    *param_4 = 0;
    return 1;
  }
  if ((iVar1 < *(int *)(lVar3 + 0xa0) - param_2) && (cVar2 = FUN_00f6e2e0(lVar3), cVar2 != '\0')) {
    *param_4 = 1;
    return 1;
  }
  if ((iVar1 < param_3 - *(int *)(lVar3 + 0xa4)) && (cVar2 = FUN_00f6e2c0(lVar3), cVar2 != '\0')) {
    *param_4 = 2;
    return 1;
  }
  if ((iVar1 < *(int *)(lVar3 + 0xa4) - param_3) && (cVar2 = FUN_00f6e2c0(lVar3), cVar2 != '\0')) {
    *param_4 = 3;
    uVar4 = 1;
  }
  return uVar4;
}

