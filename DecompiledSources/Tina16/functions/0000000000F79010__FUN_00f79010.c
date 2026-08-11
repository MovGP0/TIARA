/* Ghidra address: 00f79010 */
/* Ghidra symbol: FUN_00f79010 */


void FUN_00f79010(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x90) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x90),iVar2);
      if (*(char *)(lVar1 + 0x30) != '\n') {
        FUN_00f78e10(param_1,local_30,1);
        FUN_00414ad0(lVar1 + 0xf8,local_30[0]);
        if (*(char *)(lVar1 + 0x30) == '\x05') {
          FUN_00f78e10(param_1,&local_38,0);
          FUN_00414ad0(lVar1 + 0x100,local_38);
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_38,2);
  return;
}

