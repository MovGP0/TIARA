/* Ghidra address: 01870260 */
/* Ghidra symbol: FUN_01870260 */


undefined8
FUN_01870260(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
            undefined1 *param_6,longlong param_7)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  double dVar6;
  
  uVar4 = 0;
  uVar3 = 0;
  *param_6 = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_0192c3a0);
  lVar5 = 0;
  if (cVar2 != '\0') {
    lVar5 = lVar1;
  }
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_006b9fb0);
  if ((cVar2 != '\0') && (lVar5 != 0)) {
    dVar6 = (double)FUN_019508b0(lVar5);
    if (dVar6 * *(double *)(param_1 + 0x48) < (double)param_3) {
      dVar6 = (double)FUN_019508b0(lVar5);
      uVar4 = uVar3;
      if ((double)param_3 < (dVar6 + *(double *)(lVar5 + 0xa8)) * *(double *)(param_1 + 0x48)) {
        dVar6 = (double)FUN_01950860(lVar5);
        if ((dVar6 - *(double *)(lVar5 + 0x1f8)) * *(double *)(param_1 + 0x48) < (double)param_4) {
          dVar6 = (double)FUN_01950860(lVar5);
          if ((double)param_4 < dVar6 * *(double *)(param_1 + 0x48)) {
            *param_6 = 1;
            uVar4 = 1;
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x70) = *param_6;
  *(undefined1 *)(param_7 + 8) = 1;
  return uVar4;
}

