/* Ghidra address: 0137cc50 */
/* Ghidra symbol: FUN_0137cc50 */


void FUN_0137cc50(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 0x24) = 1;
  cVar1 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar1 == '\0') {
    if (*(char *)((longlong)param_1 + 0x59) == '\0') {
      iVar2 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
      iVar5 = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar3 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],iVar5);
          lVar4 = FUN_004113f0(uVar3,&PTR_FUN_011051a8);
          *(undefined4 *)(lVar4 + 0xbc) = 0xffffffff;
          *(undefined4 *)(lVar4 + 0xb8) = 0xffffffff;
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_00410f20(param_1[0x29]);
      param_1[0x29] = 0;
      FUN_00410f20(param_1[0xc]);
      param_1[0xc] = 0;
      if (param_1[0x32] != 0) {
        cVar1 = FUN_01cc6030(param_1[0x32]);
        if (cVar1 != '\0') {
          *(undefined8 *)PTR_DAT_020027c0 = 0;
        }
        param_1[0x32] = 0;
      }
    }
  }
  else {
    FUN_0153b340(*(undefined8 *)(param_1[10] + 0x408));
  }
  return;
}

