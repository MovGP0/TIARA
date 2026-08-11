/* Ghidra address: 00c40990 */
/* Ghidra symbol: FUN_00c40990 */


bool FUN_00c40990(longlong param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  short sVar10;
  short sVar11;
  undefined8 local_res10 [3];
  bool local_71;
  undefined8 local_60;
  byte local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  int local_4d;
  int local_49;
  undefined8 local_40 [2];
  
  local_60 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_71 = false;
  plVar5 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  sVar11 = 0;
  do {
    if ((*(int *)(param_1 + 0x10) <= (int)sVar11) || (local_71 != false)) {
      FUN_00410f20(plVar6);
      FUN_00410f20(plVar5);
      FUN_00414480(&local_60);
      FUN_00414480(local_res10);
      return local_71;
    }
    uVar7 = FUN_004aeac0(param_1,(int)sVar11);
    lVar8 = FUN_00c41170(uVar7,0,0);
    if (lVar8 != 0) {
      cVar1 = FUN_00c3d380(lVar8,local_40);
      if ((cVar1 != '\0') && (local_49 != 0)) {
        FUN_004b9ec0(plVar5);
        uVar7 = local_40[0];
        FUN_00c3be60(local_40,local_4d);
        (**(code **)(*plVar5 + 8))(plVar5,local_49);
        FUN_004b89e0(plVar5,local_40[0]);
        FUN_004b6dc0(plVar5,0);
        (**(code **)(*plVar6 + 0x90))(plVar6);
        (**(code **)(*plVar6 + 0xe8))(plVar6,plVar5);
        sVar2 = (**(code **)(*plVar6 + 0x28))(plVar6);
        sVar2 = sVar2 + -1;
        if ((short)(ushort)local_51 <= sVar2) {
          sVar10 = ((ushort)local_51 - sVar2) + -1;
          do {
            (**(code **)(*plVar6 + 0x98))(plVar6,(longlong)sVar2);
            sVar2 = sVar2 + -1;
            sVar10 = sVar10 + 1;
          } while (sVar10 != 0);
        }
        *param_4 = 0;
        while( true ) {
          iVar3 = (**(code **)(*plVar6 + 0x28))(plVar6);
          if (iVar3 <= *param_4) break;
          (**(code **)(*plVar6 + 0x18))(plVar6,&local_60,*param_4);
          iVar3 = FUN_004170c0(local_res10[0],local_60);
          if (iVar3 != 0) break;
          *param_4 = *param_4 + 1;
        }
        iVar3 = (**(code **)(*plVar6 + 0x28))(plVar6);
        local_71 = *param_4 < iVar3;
        if (local_71) {
          FUN_004b9ec0(plVar5);
          local_40[0] = uVar7;
          (**(code **)(*plVar5 + 8))(plVar5,local_4d);
          FUN_004b89e0(plVar5,local_40[0],(longlong)local_4d);
          FUN_004b6dc0(plVar5,0);
          plVar9 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
          (**(code **)(*plVar9 + 0xc0))(plVar9,plVar5);
          sVar2 = FUN_00c3c500(local_51,local_50,local_4f,local_4e);
          FUN_007d6450(*param_3);
          iVar3 = (**(code **)(*plVar9 + 0x60))(plVar9);
          FUN_007d55b0(*param_3,(longlong)iVar3 / (longlong)(int)sVar2 & 0xffffffff);
          uVar4 = (**(code **)(*plVar9 + 0x48))(plVar9);
          FUN_007d5610(*param_3,uVar4);
          FUN_007d5ad0(*param_3,plVar9);
          sVar2 = (**(code **)(*(longlong *)*param_3 + 0x90))((longlong *)*param_3);
          sVar2 = sVar2 + -1;
          if ((short)(ushort)local_51 <= sVar2) {
            sVar10 = ((ushort)local_51 - sVar2) + -1;
            do {
              FUN_007d6390(*param_3,(longlong)sVar2);
              sVar2 = sVar2 + -1;
              sVar10 = sVar10 + 1;
            } while (sVar10 != 0);
          }
          FUN_00410f20(plVar9);
        }
      }
    }
    sVar11 = sVar11 + 1;
  } while( true );
}

