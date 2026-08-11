/* Ghidra address: 013670f0 */
/* Ghidra symbol: FUN_013670f0 */


void FUN_013670f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_38 = 0;
  local_40 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x27a8);
  iVar4 = *(int *)(lVar1 + 0x10);
  iVar3 = 0;
  local_30 = lVar1;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_00b94e60(lVar1,iVar3);
      FUN_01366f30(auStack_68,uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    FUN_00b95360(local_30);
  }
  *(undefined1 *)(local_30 + 0xd1) = 0;
  FUN_01365020(param_1);
  FUN_017baf30();
  FUN_00414560(&local_40,2);
  return;
}

