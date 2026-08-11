/* Ghidra address: 012a5850 */
/* Ghidra symbol: FUN_012a5850 */


void FUN_012a5850(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  double local_30 [2];
  
  *param_3 = 1;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12d) = 0;
  *(undefined1 *)((longlong)param_1 + 300) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x23] = 0;
  param_1[0x27] = 0;
  param_1[0x22] = 0;
  (**(code **)(*param_1 + 0xf8))(param_1,param_1 + 0x14,local_30,1);
  FUN_0153b5f0(local_30[0] * (double)*(byte *)((longlong)param_1 + 0xa1),0);
  uVar4 = FUN_004113f0(param_1[2],&PTR_FUN_010dee68);
  uVar4 = FUN_0065b870(uVar4);
  cVar1 = FUN_0153b820(uVar4,0,*(undefined8 *)(param_1[10] + 0x408),0,0,0,0,0,0,0x1c7,0,0,0,0);
  if ((cVar1 == '\0') && (*(char *)((longlong)param_1 + 0xf9) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  if (*(char *)((longlong)param_1 + 0x12e) != '\0') {
    if ((char)param_1[0xb] == '\0') {
      FUN_012a53b0(param_1);
    }
    iVar3 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
    iVar6 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar4 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],iVar6);
        lVar5 = FUN_004113f0(uVar4,&PTR_FUN_01105a20);
        if (*(longlong *)(lVar5 + 0x58) != 0) {
          *(undefined8 *)(lVar5 + 0x58) = 0;
        }
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00410f20(param_1[0x20]);
    FUN_00410f20(param_1[0x12]);
    param_1[0x20] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = -1;
    if (param_1[0x29] != 0) {
      if (param_1[0x23] != 0) {
        FUN_00410f20(param_1[0x23]);
      }
      param_1[0x23] = 0;
      cVar1 = FUN_01cc6030(param_1[0x29]);
      if (cVar1 != '\0') {
        *(undefined8 *)PTR_DAT_020027c0 = 0;
      }
      param_1[0x29] = 0;
    }
    if (param_1[0x2a] != 0) {
      if (param_1[0x27] != 0) {
        FUN_00410f20(param_1[0x27]);
        param_1[0x27] = 0;
        cVar1 = FUN_01cc6030(param_1[0x2a]);
        if (cVar1 != '\0') {
          *(undefined8 *)PTR_DAT_020037b0 = 0;
        }
      }
      param_1[0x2a] = 0;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  return;
}

