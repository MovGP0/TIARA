/* Ghidra address: 00a932a0 */
/* Ghidra symbol: FUN_00a932a0 */


char FUN_00a932a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  char local_41;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_40[0] = 0;
  local_30 = 0;
  local_41 = FUN_00a93280(param_1,param_2);
  if ((local_41 == '\0') && (lVar1 = *(longlong *)(param_1 + 0x30), lVar1 != 0)) {
    iVar4 = *(int *)(lVar1 + 0x10);
    iVar5 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar3 = FUN_00a72910(lVar1,iVar5);
        if (*(char *)(lVar3 + 8) == '\x12') {
          bVar2 = true;
          local_30 = FUN_00a72910(lVar1,iVar5);
          goto code_r0x00a9332f;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    bVar2 = false;
code_r0x00a9332f:
    if (bVar2) {
      FUN_0043e1a0(local_40,*(undefined8 *)(local_30 + 0x28));
      local_41 = FUN_00a2bf10(local_40[0],param_2);
    }
  }
  FUN_00414480(local_40);
  return local_41;
}

