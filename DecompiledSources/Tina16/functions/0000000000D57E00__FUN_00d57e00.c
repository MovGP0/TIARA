/* Ghidra address: 00d57e00 */
/* Ghidra symbol: FUN_00d57e00 */


void FUN_00d57e00(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  undefined1 local_48 [24];
  
  plVar6 = (longlong *)FUN_00d58750(&PTR_FUN_00d55dd8,1);
  uVar1 = FUN_004230a0(param_2);
  uVar2 = FUN_004230c0(param_2);
  (**(code **)(*plVar6 + 0xe0))(plVar6,uVar1,uVar2);
  uVar7 = FUN_00609e10(plVar6);
  uVar7 = FUN_005ffa40(uVar7);
  uVar1 = (**(code **)(*plVar6 + 0x60))(plVar6);
  uVar2 = (**(code **)(*plVar6 + 0x48))(plVar6);
  FUN_004238d0(local_48,0,0,uVar1,uVar2);
  thunk_FUN_03ea73e5(uVar7,local_48,param_3,param_4);
  iVar3 = (**(code **)(*plVar6 + 0x60))();
  iVar9 = 0;
  if (-1 < iVar3 + -1) {
    do {
      iVar4 = (**(code **)(*plVar6 + 0x48))();
      iVar10 = 0;
      if (-1 < iVar4 + -1) {
        do {
          plVar8 = (longlong *)FUN_00609e10(plVar6);
          iVar5 = (**(code **)(*plVar8 + 0x30))(plVar8,iVar9,iVar10);
          if (iVar5 == 0) {
            plVar8 = (longlong *)FUN_00609e10(plVar6);
            (**(code **)(*plVar8 + 0x40))(plVar8,iVar9,iVar10,param_5);
          }
          else {
            plVar8 = (longlong *)FUN_00609e10(plVar6);
            (**(code **)(*plVar8 + 0x40))(plVar8,iVar9,iVar10,&DAT_007f007f);
          }
          iVar10 = iVar10 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar9 = iVar9 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(*plVar6 + 0x80))(plVar6,1);
  FUN_00d58810(plVar6,param_1,*param_2,param_2[1]);
  FUN_00410f20(plVar6);
  return;
}

