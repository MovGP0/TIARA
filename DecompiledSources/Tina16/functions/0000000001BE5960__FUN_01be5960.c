/* Ghidra address: 01be5960 */
/* Ghidra symbol: FUN_01be5960 */


void FUN_01be5960(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_2 == 0) {
    return;
  }
  if (*(longlong *)(param_2 + 800) == 0) {
    return;
  }
  lVar2 = FUN_01c02450(param_1,*(undefined8 *)(param_2 + 800));
  lVar3 = FUN_01c01690(param_1,*(undefined8 *)(param_2 + 800));
  cVar1 = FUN_01bfea90(*(undefined8 *)(param_2 + 800));
  if (cVar1 != '\0') {
    uVar4 = 0;
    if (((*(char *)((longlong)param_1 + 0x591) != '\0') &&
        ((lVar2 == 0 || (cVar1 = FUN_01bfea90(lVar2), cVar1 == '\0')))) &&
       (lVar2 = (**(code **)(*param_1 + 0x350))(param_1), *(longlong *)(param_2 + 800) != lVar2)) {
      uVar4 = 2;
    }
    if (((*(char *)((longlong)param_1 + 0x591) != '\0') &&
        ((lVar3 == 0 || (cVar1 = FUN_01bfea90(lVar3), cVar1 == '\0')))) &&
       (lVar2 = (**(code **)(*param_1 + 0x298))(param_1), *(longlong *)(param_2 + 800) != lVar2)) {
      uVar4 = uVar4 | 8;
    }
    FUN_01be9ef0(param_2,uVar4);
    return;
  }
  if (((lVar2 != 0) && (cVar1 = FUN_01bfea90(lVar2), cVar1 != '\0')) &&
     (cVar1 = FUN_004113d0(*(undefined8 *)(lVar2 + 0x80),&PTR_FUN_01bdf860), cVar1 != '\0')) {
    FUN_01be9ef0(*(longlong *)(lVar2 + 0x80),*(byte *)(*(longlong *)(lVar2 + 0x80) + 0x360) | 8);
  }
  if (lVar3 == 0) {
    return;
  }
  cVar1 = FUN_01bfea90(lVar3);
  if (cVar1 == '\0') {
    return;
  }
  cVar1 = FUN_004113d0(*(undefined8 *)(lVar3 + 0x80),&PTR_FUN_01bdf860);
  if (cVar1 == '\0') {
    return;
  }
  FUN_01be9ef0(*(longlong *)(lVar3 + 0x80),*(byte *)(*(longlong *)(lVar3 + 0x80) + 0x360) | 2);
  return;
}

