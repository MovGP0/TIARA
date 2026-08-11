/* Ghidra address: 018c7b00 */
/* Ghidra symbol: FUN_018c7b00 */


void FUN_018c7b00(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_0197fc10(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x48),*(undefined8 *)(param_2 + 0x10)
              );
  iVar2 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x30))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x20))
                        (*(longlong **)(param_2 + 0x80),iVar5);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01925478);
      if (cVar1 != '\0') {
        lVar4 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x20))
                          (*(longlong **)(param_2 + 0x80),iVar5);
        FUN_0046f180(&local_40);
        FUN_00461840(lVar4 + 0x398,&local_40);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00460ba0(&local_40);
  return;
}

