/* Ghidra address: 016457b0 */
/* Ghidra symbol: FUN_016457b0 */


void FUN_016457b0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_68 = 0;
  local_60 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  lVar7 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),0);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x18);
  iVar4 = (**(code **)(*plVar1 + 0x1c8))();
  local_6c = 0;
  if (-1 < iVar4 + -1) {
    do {
      FUN_01645400(param_1,local_40,plVar1,local_6c);
      uVar5 = (**(code **)(*plVar1 + 0x210))(plVar1,local_6c);
      iVar6 = (**(code **)(**(longlong **)(lVar7 + 0x578) + 0xb0))
                        (*(longlong **)(lVar7 + 0x578),local_40[0]);
      if (iVar6 < 0) {
        FUN_01613110(L"THDLDesign.CheckNotConnectedPins");
      }
      cVar3 = FUN_01644e10(*(undefined8 *)(lVar7 + 0x578),iVar6);
      if (cVar3 == '\0') {
        FUN_0043f750(&local_60,uVar5);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 200);
        iVar6 = (**(code **)(*plVar2 + 0xb0))(plVar2,local_60);
        if (iVar6 == -1) {
          FUN_0043f750(&local_68,uVar5);
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0xd0);
          (**(code **)(*plVar2 + 0x78))(plVar2,local_68);
        }
      }
      local_6c = local_6c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_68,6);
  return;
}

