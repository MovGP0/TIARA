/* Ghidra address: 0155fc00 */
/* Ghidra symbol: FUN_0155fc00 */


void FUN_0155fc00(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_4c;
  longlong local_40 [2];
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x8f0) + 0x10);
  local_4c = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x8f0),local_4c);
      iVar6 = *(int *)(*(longlong *)(lVar2 + 0x28) + 0x10);
      iVar4 = 0;
      if (-1 < iVar6 + -1) {
        do {
          lVar3 = FUN_01571ee0(*(undefined8 *)(lVar2 + 0x28),iVar4);
          cVar1 = FUN_015755e0(*(undefined8 *)(param_1 + 0x8d0),*(undefined4 *)(lVar3 + 0x30),
                               local_40);
          if (cVar1 == '\0') {
            *(undefined4 *)(param_1 + 0x928) = 1;
          }
          else {
            FUN_00414ad0(local_40[0] + 0x40,*(undefined8 *)(lVar3 + 0x20));
          }
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_4c = local_4c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

