/* Ghidra address: 00a72890 */
/* Ghidra symbol: FUN_00a72890 */


undefined8 FUN_00a72890(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_00a72910(param_1,iVar3);
      if (*(char *)(lVar1 + 8) == (char)param_2) {
        uVar2 = FUN_00a72910(param_1,iVar3);
        *param_3 = uVar2;
        return CONCAT71((uint7)(uint3)((uint)param_2 >> 8),1);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

