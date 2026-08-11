/* Ghidra address: 00b223b0 */
/* Ghidra symbol: FUN_00b223b0 */


ulonglong FUN_00b223b0(longlong param_1,undefined2 param_2,undefined1 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar5);
      cVar1 = FUN_00b21880(param_2,param_3,uVar2);
      if (cVar1 != '\0') {
        puVar3 = (undefined4 *)FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar5);
        *param_4 = *puVar3;
        *(undefined2 *)(param_4 + 1) = *(undefined2 *)(puVar3 + 1);
        *(undefined1 *)((longlong)param_4 + 6) = *(undefined1 *)((longlong)puVar3 + 6);
        uVar4 = CONCAT71((int7)((ulonglong)((longlong)puVar3 + 7) >> 8),1);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return uVar4 & 0xffffffff;
}

