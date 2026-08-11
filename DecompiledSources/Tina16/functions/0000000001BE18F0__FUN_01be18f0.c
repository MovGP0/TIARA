/* Ghidra address: 01be18f0 */
/* Ghidra symbol: FUN_01be18f0 */


void FUN_01be18f0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_48 [24];
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  local_20 = *param_2;
  if (((*(longlong *)PTR_DAT_02003ec8 != 0) &&
      (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x5a8) + 0x578) != '\0')) ||
     (*(char *)(param_1 + 0x48) == '\0')) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x5b0);
    local_28 = *(undefined4 *)(lVar1 + 0x90);
    local_24 = *(undefined4 *)(lVar1 + 0x94);
    uVar3 = FUN_0064d1f0(lVar1,&local_28);
    *(undefined8 *)(param_1 + 0x24) = uVar3;
    if ((*(char *)(*(longlong *)(param_1 + 0x40) + 0x579) != '\x03') ||
       (*(char *)(param_1 + 0x48) != '\0')) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x5b0);
      cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01bdf860);
      if (cVar2 == '\0') {
        FUN_0064d000(lVar1,local_48);
        uVar3 = FUN_0064d1f0(*(undefined8 *)(lVar1 + 0x78),local_48);
        *(undefined8 *)(param_1 + 0x24) = uVar3;
      }
      else {
        local_30 = *(int *)(lVar1 + 0x90) + *(int *)(*(longlong *)(lVar1 + 0x78) + 0x90);
        iStack_2c = *(int *)(lVar1 + 0x94) + *(int *)(*(longlong *)(lVar1 + 0x78) + 0x94);
        *(ulonglong *)(param_1 + 0x24) = CONCAT44(iStack_2c,local_30);
      }
      uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x40));
      (**(code **)PTR_DAT_02003ec8)
                (uVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x5f0),
                 *(uint *)((longlong)&local_20 +
                          (ulonglong)
                          (*(int *)(*(longlong *)(param_1 + 0x40) + 0x94) + 2 <
                          *(int *)(param_1 + 0x28)) * 4) |
                 *(uint *)(&DAT_01fe11a0 + (ulonglong)*(byte *)(param_1 + 0x48) * 4));
    }
  }
  return;
}

