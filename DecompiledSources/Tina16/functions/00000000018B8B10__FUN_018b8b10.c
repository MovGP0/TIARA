/* Ghidra address: 018b8b10 */
/* Ghidra symbol: FUN_018b8b10 */


void FUN_018b8b10(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x18) != '\0') {
    cVar1 = FUN_01978990(*(longlong *)(param_1 + 0x28));
    if (cVar1 != '\0') goto LAB_018b8ba5;
  }
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  uVar2 = FUN_01803bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28),L"logicalpagenumbers");
  lVar3 = FUN_01803a30(uVar2);
  FUN_00414ad0(lVar3 + 0x20,L"page");
  FUN_0043f750(local_20,*(undefined4 *)(param_1 + 0x6c));
  FUN_01803ed0(lVar3,&LAB_018b8c30,local_20[0]);
LAB_018b8ba5:
  FUN_00414480(local_20);
  return;
}

