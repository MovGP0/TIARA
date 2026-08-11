/* Ghidra address: 018c6a90 */
/* Ghidra symbol: FUN_018c6a90 */


void FUN_018c6a90(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10);
  local_3c = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa8),local_3c);
      cVar1 = FUN_004113d0(lVar2,&PTR_FUN_0192d4e8);
      if (cVar1 != '\0') {
        if (0 < local_3c) {
          uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa8),local_3c + -1);
          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0192e210);
          if (cVar1 != '\0') {
            *(undefined8 *)(lVar2 + 0x210) = uVar3;
            FUN_004aedb0(*(undefined8 *)(param_1 + 0xa8),local_3c + -1,0);
          }
        }
        if (local_3c < *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10) + -1) {
          uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa8),local_3c + 1);
          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0192e818);
          if (cVar1 != '\0') {
            *(undefined8 *)(lVar2 + 0x218) = uVar3;
            FUN_004aedb0(*(undefined8 *)(param_1 + 0xa8),local_3c + 1,0);
          }
        }
      }
      local_3c = local_3c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_018c6850(param_1);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10);
  local_3c = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa8),local_3c);
      cVar1 = FUN_004113d0(lVar2,&PTR_FUN_0192e210);
      if ((cVar1 != '\0') || (cVar1 = FUN_004113d0(lVar2,&PTR_FUN_0192e818), cVar1 != '\0')) {
        uVar3 = FUN_0180bfb0();
        FUN_01809b60(uVar3,&local_38,L"enUnconnHeader");
        FUN_00416cd0(&local_30,3,local_38,&LAB_018c6d34,*(undefined8 *)(lVar2 + 0x10));
        (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))
                  (*(longlong **)(param_1 + 0xe8),local_30);
        FUN_004aedb0(*(undefined8 *)(param_1 + 0xa8),local_3c,0);
      }
      local_3c = local_3c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_018c6850(param_1);
  FUN_00414560(&local_38,2);
  return;
}

