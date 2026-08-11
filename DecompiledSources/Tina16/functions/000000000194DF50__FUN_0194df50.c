/* Ghidra address: 0194df50 */
/* Ghidra symbol: FUN_0194df50 */


undefined8 FUN_0194df50(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 0) {
    param_1 = 0;
  }
  else if (param_3 != 0) {
    FUN_0197bdf0(DAT_02110740);
    iVar5 = *(int *)(DAT_02110740 + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar3 = FUN_004aeac0(DAT_02110740,iVar4);
        iVar2 = FUN_0043e6d0(*(undefined8 *)(lVar3 + 0x1c8),param_2);
        if ((iVar2 == 0) &&
           (((cVar1 = FUN_004113d0(param_3,&PTR_FUN_0193aeb8), cVar1 == '\0' ||
             (cVar1 = FUN_004113d0(*(undefined8 *)(lVar3 + 8),&PTR_FUN_0193aeb8), cVar1 == '\0')) ||
            (*(longlong *)(lVar3 + 8) == param_3)))) {
          param_1 = FUN_004aeac0(DAT_02110740,iVar4);
          break;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_0197be00(DAT_02110740);
  }
  return param_1;
}

