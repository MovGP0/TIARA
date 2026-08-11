/* Ghidra address: 0072ea50 */
/* Ghidra symbol: FUN_0072ea50 */


undefined1 FUN_0072ea50(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 local_41;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_40[0] = 0;
  local_30 = 0;
  local_41 = 1;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_00419260(&local_30,&DAT_0072e5e0,1,(longlong)*(int *)(param_1 + 0x20));
    iVar6 = 0;
    iVar2 = FUN_00654c00();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = FUN_00654bc0(*(undefined8 *)(param_1 + 0x18),iVar5);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0066b990);
        if (cVar1 != '\0') {
          FUN_0064dd90(uVar3,local_40);
          FUN_00414ad0(local_30 + (longlong)iVar6 * 8,local_40[0]);
          iVar6 = iVar6 + 1;
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    lVar4 = 0;
    if (local_30 != 0) {
      lVar4 = *(longlong *)(local_30 + -8);
    }
    local_41 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))
                         (*(longlong **)(param_1 + 0x28),local_30,lVar4 + -1);
  }
  FUN_00414480(local_40);
  FUN_00419430(&local_30,&DAT_0072e5e0);
  return local_41;
}

