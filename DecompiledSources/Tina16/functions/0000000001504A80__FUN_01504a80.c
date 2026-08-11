/* Ghidra address: 01504a80 */
/* Ghidra symbol: FUN_01504a80 */


void FUN_01504a80(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 local_48 [12];
  int local_3c;
  longlong local_38;
  longlong local_30;
  
  FUN_01538880(&local_38,&local_3c,0,0,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
  if ((*(longlong **)(param_1 + 8) != (longlong *)0x0) && (local_38 != 0)) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                          (*(longlong **)(param_1 + 8),iVar6);
        lVar4 = FUN_004113f0(uVar3,&PTR_FUN_01106728);
        if (*(longlong *)(lVar4 + 0x20) != 0) {
          iVar5 = 0;
          bVar8 = false;
          while ((iVar5 <= local_3c + -1 && (!bVar8))) {
            lVar7 = (longlong)iVar5;
            iVar5 = iVar5 + 1;
            bVar8 = *(longlong *)(local_38 + lVar7 * 8) == *(longlong *)(lVar4 + 0x20);
          }
          if ((bVar8) && (cVar1 = FUN_01538650(*(undefined8 *)(lVar4 + 0x20)), cVar1 == '\x03')) {
            if (*(longlong *)(lVar4 + 0x148) == 0) {
              cVar1 = FUN_01538650(*(undefined8 *)(lVar4 + 0x20));
              if ((cVar1 == '\x04') && (*(longlong *)(lVar4 + 0x148) != 0)) {
                FUN_0153a0b0(*(undefined8 *)(lVar4 + 0x20),*(longlong *)(lVar4 + 0x148));
              }
            }
            else {
              FUN_01539a50(*(undefined8 *)(lVar4 + 0x20),local_48,&local_30);
              if (local_30 != 0) {
                FUN_00b95290(local_30);
                FUN_01d3bb20(local_30,*(undefined8 *)(lVar4 + 0x148));
              }
            }
          }
        }
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

