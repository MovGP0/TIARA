/* Ghidra address: 018981f0 */
/* Ghidra symbol: FUN_018981f0 */


void FUN_018981f0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_006e3f30(param_1,param_2);
  if (*(char *)(param_1 + 0x6e0) == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_01894f80);
    if ((cVar1 != '\0') && (*(longlong *)(param_2 + 0x40) == 0)) {
      lVar2 = FUN_00410e60(&DAT_01894cd8,1);
      *(longlong *)(param_2 + 0x40) = lVar2;
      *(longlong *)(lVar2 + 0x38) = param_2;
      lVar3 = FUN_006dd390(param_2);
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(param_1 + 0x6f8);
      }
      else {
        lVar3 = FUN_006dd390(param_2);
        lVar3 = *(longlong *)(lVar3 + 0x40);
      }
      *(longlong *)(lVar2 + 8) = lVar3;
      FUN_00414ad0(lVar2 + 0x40,*(undefined8 *)(param_2 + 0x10));
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x18);
      if (*(char *)(param_2 + 0x48) != '\0') {
        *(undefined1 *)(param_2 + 0x48) = 0;
        lVar4 = FUN_006dd580(param_2);
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x40) != 0)) {
          *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar4 + 0x40);
          *(longlong *)(*(longlong *)(lVar4 + 0x40) + 8) = lVar2;
        }
      }
      lVar4 = FUN_006dd430(param_2);
      if (lVar4 == 0) {
        *(undefined8 *)(lVar2 + 0x20) = 0;
        if (lVar3 == 0) {
          lVar3 = FUN_006dd390(param_2);
          if (lVar3 != 0) {
            lVar3 = FUN_006dd390(param_2);
            *(undefined1 *)(lVar3 + 0x48) = 1;
          }
        }
        else {
          *(longlong *)(lVar3 + 0x10) = lVar2;
        }
      }
      else {
        lVar3 = *(longlong *)(lVar4 + 0x40);
        *(longlong *)(lVar2 + 0x20) = lVar3;
        *(longlong *)(lVar3 + 0x18) = lVar2;
      }
      lVar3 = FUN_006dd3e0(param_2);
      if (lVar3 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x40);
        *(longlong *)(lVar3 + 0x20) = lVar2;
        *(longlong *)(lVar2 + 0x18) = lVar3;
      }
    }
  }
  return;
}

