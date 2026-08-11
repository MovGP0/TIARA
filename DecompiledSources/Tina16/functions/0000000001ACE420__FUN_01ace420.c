/* Ghidra address: 01ace420 */
/* Ghidra symbol: FUN_01ace420 */


byte FUN_01ace420(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  byte bVar7;
  int iVar8;
  
  if (*param_4 == 0) {
    lVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *param_4 = lVar4;
  }
  else if (0 < *(int *)(*param_4 + 0x10)) {
    (**(code **)(*(longlong *)*param_4 + 0x10))((longlong *)*param_4);
  }
  bVar7 = 0;
  cVar1 = FUN_01d2dd00(param_1 + 0xa0,param_2,param_3);
  if (cVar1 != '\0') {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
    iVar8 = 1;
    if (0 < iVar3) {
      do {
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                          (*(longlong **)(param_1 + 0xd8),iVar8 + -1);
        cVar1 = FUN_004113d0(uVar5,&DAT_01cdd500);
        if (cVar1 != '\0') {
          uVar5 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                            (*(longlong **)(param_1 + 0xd8),iVar8 + -1);
          bVar2 = FUN_01cdfc50(uVar5,*(undefined8 *)(param_1 + 0x80),param_2,param_3,param_4);
          bVar7 = bVar7 | bVar2;
        }
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x88))
                      (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x80),param_2,
                       param_3);
    if (cVar1 != '\0') {
      bVar7 = bVar7 | 0x10;
      FUN_004ae7e0(*param_4,*(undefined8 *)(param_1 + 0xb8));
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x88))
                      (*(longlong **)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x80),param_2,
                       param_3);
    if (cVar1 != '\0') {
      bVar7 = bVar7 | 0x10;
      FUN_004ae7e0(*param_4,*(undefined8 *)(param_1 + 0xc0));
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 200) + 0x88))
                      (*(longlong **)(param_1 + 200),*(undefined8 *)(param_1 + 0x80),param_2,param_3
                      );
    if (cVar1 != '\0') {
      bVar7 = bVar7 | 0x10;
      FUN_004ae7e0(*param_4,*(undefined8 *)(param_1 + 200));
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x88))
                      (*(longlong **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0x80),param_2,
                       param_3);
    if (cVar1 != '\0') {
      bVar7 = bVar7 | 0x10;
      FUN_004ae7e0(*param_4,*(undefined8 *)(param_1 + 0xd0));
    }
    plVar6 = *(longlong **)(param_1 + 0xf0);
    if ((plVar6 != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*plVar6 + 0x88))
                          (plVar6,*(undefined8 *)(param_1 + 0x80),param_2,param_3), cVar1 != '\0'))
    {
      bVar7 = bVar7 | 4;
      FUN_004ae7e0(*param_4,*(undefined8 *)(param_1 + 0xf0));
    }
    plVar6 = *(longlong **)(param_1 + 0xf8);
    if ((plVar6 != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*plVar6 + 0x88))
                          (plVar6,*(undefined8 *)(param_1 + 0x80),param_2,param_3), cVar1 != '\0'))
    {
      bVar7 = bVar7 | 4;
      FUN_004ae7e0(*param_4,*(undefined8 *)(param_1 + 0xf8));
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x28))(*(longlong **)(param_1 + 0xe0));
    iVar8 = 1;
    if (0 < iVar3) {
      do {
        plVar6 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                           (*(longlong **)(param_1 + 0xe0),iVar8 + -1);
        cVar1 = (**(code **)(*plVar6 + 0x88))
                          (plVar6,*(undefined8 *)(param_1 + 0x80),param_2,param_3);
        if (cVar1 != '\0') {
          bVar7 = bVar7 | 8;
          uVar5 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                            (*(longlong **)(param_1 + 0xe0),iVar8 + -1);
          FUN_004ae7e0(*param_4,uVar5);
        }
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return bVar7;
}

