/* Ghidra address: 01d07620 */
/* Ghidra symbol: FUN_01d07620 */


void FUN_01d07620(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 local_58;
  undefined1 local_4d [4];
  byte local_49;
  undefined1 local_48;
  undefined1 local_47;
  byte local_46;
  int local_45;
  int local_41;
  
  *param_2 = 0;
  *param_3 = 0;
  lVar4 = FUN_01d06fb0(param_1,0);
  if (lVar4 != 0) {
    cVar1 = FUN_00c3d380(lVar4,&local_58,local_4d);
    if (cVar1 != '\0') {
      plVar5 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
      (**(code **)(*plVar5 + 8))(plVar5,local_45);
      FUN_004b89e0(plVar5,local_58,(longlong)local_45);
      FUN_004b6dc0(plVar5,0);
      plVar6 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      (**(code **)(*plVar6 + 0xc0))(plVar6,plVar5);
      if (local_41 != 0) {
        FUN_00b909d0(&local_58,local_45);
        FUN_004b9ec0(plVar5);
        (**(code **)(*plVar5 + 8))(plVar5,local_41);
        FUN_004b89e0(plVar5,local_58,(longlong)local_41);
        FUN_004b6dc0(plVar5,0);
        uVar7 = FUN_004b6930(&PTR_FUN_00478280,1);
        *param_3 = uVar7;
        (**(code **)(*(longlong *)*param_3 + 0xe8))((longlong *)*param_3,plVar5);
        iVar2 = (**(code **)(*(longlong *)*param_3 + 0x28))((longlong *)*param_3);
        iVar2 = iVar2 + -1;
        if ((int)(uint)local_49 <= iVar2) {
          iVar9 = ((uint)local_49 - iVar2) + -1;
          do {
            (**(code **)(*(longlong *)*param_3 + 0x98))((longlong *)*param_3,iVar2);
            iVar2 = iVar2 + -1;
            iVar9 = iVar9 + 1;
          } while (iVar9 != 0);
        }
      }
      FUN_00410f20(plVar5);
      uVar8 = (ulonglong)local_46;
      iVar2 = FUN_00c3c500(local_49,local_48,local_47,uVar8);
      iVar9 = (**(code **)(*plVar6 + 0x60))(plVar6);
      uVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);
      uVar7 = FUN_007d5160(&PTR_FUN_006441f8,CONCAT71((int7)(uVar8 >> 8),1) & 0xffffffff,
                           (longlong)iVar9 / (longlong)iVar2 & 0xffffffff,uVar3);
      *param_2 = uVar7;
      FUN_007d5ad0(*param_2,plVar6,0x1fffffff);
      iVar2 = (**(code **)(*(longlong *)*param_2 + 0x90))((longlong *)*param_2);
      iVar2 = iVar2 + -1;
      if ((int)(uint)local_49 <= iVar2) {
        iVar9 = ((uint)local_49 - iVar2) + -1;
        do {
          FUN_007d6390(*param_2,iVar2);
          iVar2 = iVar2 + -1;
          iVar9 = iVar9 + 1;
        } while (iVar9 != 0);
      }
      FUN_00410f20(plVar6);
    }
  }
  return;
}

