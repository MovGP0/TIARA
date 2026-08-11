/* Ghidra address: 00a73340 */
/* Ghidra symbol: FUN_00a73340 */


undefined8
FUN_00a73340(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4,
            undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  *param_4 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar4);
      cVar1 = FUN_00a73210(lVar2,param_2,param_3);
      if (cVar1 != '\0') {
        if (*(longlong *)(lVar2 + 8) == 0) {
          return 0;
        }
        lVar3 = FUN_00a72ca0(&DAT_00a69b68,1);
        *param_4 = lVar3;
        FUN_00414ad0(*param_4 + 8,*(undefined8 *)(lVar2 + 8));
        FUN_00414ad0(*param_4 + 0x10,*(undefined8 *)(lVar2 + 0x18));
        FUN_00414ad0(param_5,*(undefined8 *)(lVar2 + 0x20));
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

