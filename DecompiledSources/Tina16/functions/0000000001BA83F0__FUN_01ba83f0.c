/* Ghidra address: 01ba83f0 */
/* Ghidra symbol: FUN_01ba83f0 */


void FUN_01ba83f0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_70;
  undefined1 local_68 [60];
  undefined1 local_2c [12];
  
  local_70 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4f0);
  iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (0 < iVar2) {
    plVar1 = *(longlong **)(param_1 + 0x6d0);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    uVar4 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
    uVar5 = FUN_00c41110(uVar4);
    iVar2 = FUN_00c41060(uVar4,local_2c);
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_00c3d330(uVar5,local_68,iVar6);
        FUN_004169a0(&local_70,local_68);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4f0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_70);
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748));
  if (iVar2 == 1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4f0);
    (**(code **)(*plVar1 + 0x78))(plVar1,L"*GND*");
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x4c0);
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x4e0) + -1;
  if (iVar2 <= iVar6) {
    iVar6 = (iVar6 - iVar2) + 1;
    do {
      FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6f0),1,iVar2,0);
      iVar2 = iVar2 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414480(&local_70);
  return;
}

