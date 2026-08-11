/* Ghidra address: 015662f0 */
/* Ghidra symbol: FUN_015662f0 */


void FUN_015662f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 local_30;
  
  local_30 = 0;
  cVar1 = FUN_0198a580(param_2);
  if ((cVar1 == '\x04') && (cVar1 = FUN_01d04d40(param_2), cVar1 != '\0')) goto LAB_015664cd;
  lVar6 = FUN_01565dd0(&DAT_0154b008,1);
  cVar1 = FUN_0198a580(param_2);
  if ((cVar1 == '\x05') || (cVar1 = FUN_0198a580(param_2), cVar1 == '\x06')) {
    cVar1 = FUN_015661f0(param_1,param_2,0);
    if ((cVar1 == '\0') || (cVar1 = FUN_015661f0(param_1,param_2,1), cVar1 == '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(lVar6 + 8) = uVar2;
  }
  else {
    sVar3 = FUN_01d03160(param_2);
    cVar1 = FUN_01d3fd10(param_2,*(undefined1 *)(*(longlong *)(param_1 + 8) + 0x838));
    if ((((cVar1 == '\0') && (sVar3 != 0x90)) &&
        ((cVar1 = FUN_01d40010(sVar3), cVar1 == '\0' ||
         (*(char *)((longlong)param_2 + 0x3d2) != '\0')))) &&
       ((sVar3 != 0x91 && (cVar1 = FUN_01d3fee0(param_2,1), cVar1 == '\0')))) {
      cVar1 = FUN_01d3fee0(param_2,2);
      if (cVar1 != '\0') {
        uVar4 = (**(code **)(*param_2 + 0x210))(param_2,0);
        cVar1 = FUN_01563870(*(undefined8 *)(param_1 + 8),param_2,uVar4);
        if (cVar1 != '\0') goto LAB_01566407;
      }
      uVar2 = 0;
    }
    else {
LAB_01566407:
      uVar2 = 1;
    }
    *(undefined1 *)(lVar6 + 8) = uVar2;
    *(longlong **)(lVar6 + 0x18) = param_2;
  }
  iVar5 = (**(code **)(*param_2 + 0x1c8))();
  iVar8 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar4 = (**(code **)(*param_2 + 0x210))(param_2,iVar8);
      uVar7 = FUN_01565f10(&DAT_0154aaa0,1,uVar4);
      FUN_004ae7e0(*(undefined8 *)(lVar6 + 0x10),uVar7);
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_017ff4f0(param_2,&local_30);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))
            (*(longlong **)(param_1 + 0x10),local_30,lVar6);
LAB_015664cd:
  FUN_00414480(&local_30);
  return;
}

