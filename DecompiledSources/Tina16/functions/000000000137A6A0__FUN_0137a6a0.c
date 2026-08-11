/* Ghidra address: 0137a6a0 */
/* Ghidra symbol: FUN_0137a6a0 */


ulonglong FUN_0137a6a0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  ulonglong uVar8;
  
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_00e1a330(*(undefined1 *)((longlong)param_1 + 0x104));
  cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
  cVar7 = '\0';
  do {
    uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],cVar7);
    lVar6 = FUN_004113f0(uVar5,&PTR_FUN_011051a8);
    if (*(char *)(lVar6 + 0x11) != '\0') {
      FUN_00e1a570(cVar7);
      FUN_00e1a230(*(undefined1 *)(lVar6 + 0x38));
      FUN_00e196e0(*(undefined1 *)(lVar6 + 0x2a));
    }
    cVar7 = cVar7 + '\x01';
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  FUN_00e1a570(*(undefined1 *)((longlong)param_1 + 0x1c));
  FUN_00e19970(*(undefined1 *)((longlong)param_1 + 0x10c));
  FUN_00e19860(param_1[(ulonglong)*(byte *)((longlong)param_1 + 0xcd) + 0x1b],
               *(byte *)((longlong)param_1 + 0xcd));
  FUN_00e19a70(*(undefined1 *)((longlong)param_1 + 0xfc));
  FUN_00e19bd0(param_1[0x1e]);
  FUN_00e19d40(*(undefined1 *)((longlong)param_1 + 0x99));
  FUN_00e19e30((char)param_1[0x20]);
  FUN_00e19f90(param_1[0x14],param_1[0x15]);
  FUN_00e1a0a0((int)param_1[0x18],*(undefined1 *)((longlong)param_1 + 0xcc));
  FUN_00e1a490((char)param_1[0x21]);
  if (((char)param_1[0x13] == '\x04') &&
     ((iVar2 = (**(code **)(*param_1 + 0x148))(param_1), iVar2 == 0 ||
      (iVar2 = (**(code **)(*param_1 + 0x148))(param_1), iVar2 == 5)))) {
    uVar3 = FUN_00e1a760();
    while (((char)uVar3 != '\0' && (((char)param_1[0x24] == '\0' || ((char)param_1[0xb] != '\0')))))
    {
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
    uVar8 = CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
  }
  else {
    uVar4 = FUN_00e1a760();
    uVar8 = (ulonglong)uVar4;
  }
  return uVar8;
}

