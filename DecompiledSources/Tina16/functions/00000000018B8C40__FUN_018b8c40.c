/* Ghidra address: 018b8c40 */
/* Ghidra symbol: FUN_018b8c40 */


void FUN_018b8c40(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_30 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x18) != '\0') {
    cVar1 = FUN_01978990(*(longlong *)(param_1 + 0x28));
    if (cVar1 != '\0') goto LAB_018b8d3f;
  }
  uVar3 = FUN_01803bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28),L"logicalpagenumbers");
  iVar5 = *(int *)(param_1 + 0xc);
  iVar6 = *(int *)(param_1 + 100) + 1;
  if (iVar6 <= iVar5) {
    iVar6 = (iVar6 - iVar5) + -1;
    do {
      if (-1 < iVar5) {
        iVar2 = FUN_01803a10(uVar3);
        if (iVar5 < iVar2) {
          uVar4 = FUN_018039f0(uVar3,iVar5);
          FUN_0043f750(&local_30,*(undefined4 *)(param_1 + 0x6c));
          FUN_01803ed0(uVar4,&DAT_018b8dbc,local_30);
          FUN_01803cc0(uVar4,&local_38,&DAT_018b8dcc);
          iVar2 = FUN_00416db0(local_38,&DAT_018b8ddc);
          if (iVar2 == 0) break;
        }
      }
      iVar5 = iVar5 + -1;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
LAB_018b8d3f:
  FUN_00414560(&local_38,2);
  return;
}

