/* Ghidra address: 00700700 */
/* Ghidra symbol: FUN_00700700 */


longlong * FUN_00700700(longlong param_1,undefined2 param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0;
  iVar3 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x4b0) + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b0),iVar3);
      cVar1 = FUN_004113d0(uVar2,&PTR_FUN_006cb0d0);
      if (((cVar1 != '\0') &&
          (local_28 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b0),iVar3),
          *(char *)((longlong)local_28 + 0xa9) != '\0')) &&
         (cVar1 = (**(code **)(*local_28 + 0xf0))(local_28), cVar1 != '\0')) {
        FUN_0064dd90(local_28,&local_20);
        cVar1 = FUN_007f9a80(param_2,local_20);
        if (cVar1 != '\0') goto LAB_007007ce;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_28 = (longlong *)0x0;
LAB_007007ce:
  FUN_00414480(&local_20);
  return local_28;
}

