/* Ghidra address: 019710e0 */
/* Ghidra symbol: FUN_019710e0 */


void FUN_019710e0(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  (**(code **)(*param_2 + 0x90))(param_2);
  iVar2 = FUN_004b2060();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_0196d410(*(undefined8 *)(param_1 + 0x170),iVar5);
      if (*(longlong *)(lVar3 + 0x18) != 0) {
        if (param_3 != '\0') {
          lVar3 = FUN_0196d410(*(undefined8 *)(param_1 + 0x170),iVar5);
          cVar1 = FUN_004113d0(*(undefined8 *)(lVar3 + 0x18),&PTR_FUN_0191e2f0);
          if (cVar1 != '\0') goto LAB_019711b8;
        }
        lVar3 = FUN_0196d410(*(undefined8 *)(param_1 + 0x170),iVar5);
        lVar4 = FUN_0196d410(*(undefined8 *)(param_1 + 0x170),iVar5);
        (**(code **)(*param_2 + 0x80))
                  (param_2,*(undefined8 *)(*(longlong *)(lVar3 + 0x18) + 0x1c8),
                   *(undefined8 *)(lVar4 + 0x18));
      }
LAB_019711b8:
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

