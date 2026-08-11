/* Ghidra address: 01acff30 */
/* Ghidra symbol: FUN_01acff30 */


byte FUN_01acff30(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  byte bVar6;
  int iVar7;
  
  if (*param_2 == 0) {
    lVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *param_2 = lVar3;
  }
  else if (0 < *(int *)(*param_2 + 0x10)) {
    (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2);
  }
  bVar6 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0xb8) + 0x10) != '\0') {
    bVar6 = 0x10;
    FUN_004ae7e0(*param_2,*(undefined8 *)(param_1 + 0xb8));
  }
  if (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x10) != '\0') {
    bVar6 = 0x10;
    FUN_004ae7e0(*param_2,*(undefined8 *)(param_1 + 0xc0));
  }
  if (*(char *)(*(longlong *)(param_1 + 200) + 0x10) != '\0') {
    bVar6 = 0x10;
    FUN_004ae7e0(*param_2,*(undefined8 *)(param_1 + 200));
  }
  if (*(char *)(*(longlong *)(param_1 + 0xd0) + 0x10) != '\0') {
    bVar6 = 0x10;
    FUN_004ae7e0(*param_2,*(undefined8 *)(param_1 + 0xd0));
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  iVar7 = 1;
  if (0 < iVar2) {
    do {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar7 + -1);
      plVar5 = (longlong *)FUN_004113f0(uVar4,&DAT_01cdd500);
      bVar1 = (**(code **)(*plVar5 + 0x130))(plVar5,param_2);
      bVar6 = bVar6 | bVar1;
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x28))(*(longlong **)(param_1 + 0xe0));
  iVar7 = 1;
  if (0 < iVar2) {
    do {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                        (*(longlong **)(param_1 + 0xe0),iVar7 + -1);
      lVar3 = FUN_004113f0(uVar4,&PTR_FUN_01d282a8);
      if (*(char *)(lVar3 + 0x10) != '\0') {
        bVar6 = bVar6 | 8;
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                          (*(longlong **)(param_1 + 0xe0),iVar7 + -1);
        FUN_004ae7e0(*param_2,uVar4);
      }
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((*(longlong *)(param_1 + 0xf0) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xf0) + 0x10) != '\0')) {
    bVar6 = bVar6 | 4;
    FUN_004ae7e0(*param_2,*(undefined8 *)(param_1 + 0xf0));
  }
  if ((*(longlong *)(param_1 + 0xf8) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xf8) + 0x10) != '\0')) {
    bVar6 = bVar6 | 4;
    FUN_004ae7e0(*param_2,*(undefined8 *)(param_1 + 0xf8));
  }
  return bVar6;
}

