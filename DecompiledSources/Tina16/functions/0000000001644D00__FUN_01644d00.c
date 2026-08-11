/* Ghidra address: 01644d00 */
/* Ghidra symbol: FUN_01644d00 */


void FUN_01644d00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar3 = *(int *)(*(longlong *)(param_2 + 0x608) + 0x10);
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + *(int *)(param_2 + 8);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x608),iVar2);
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(lVar1 + 8));
      if (*(char *)(lVar1 + 0x5b8) == '\x01') {
        *(undefined4 *)(lVar1 + 0x14) = *(undefined4 *)(param_1 + 0x90);
        FUN_00414b50(local_30,*(undefined8 *)(lVar1 + 0x638));
        FUN_016448f0(param_1,param_2,lVar1);
        if ((*(char *)(lVar1 + 0x5b8) == '\x01') && (*(int *)(lVar1 + 0x5c8) != 2)) {
          FUN_01644d00(param_1,lVar1);
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(local_30);
  return;
}

