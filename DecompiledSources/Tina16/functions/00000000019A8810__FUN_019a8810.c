/* Ghidra address: 019a8810 */
/* Ghidra symbol: FUN_019a8810 */


void FUN_019a8810(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined1 local_2c [4];
  
  local_48 = 0;
  local_50 = 0;
  local_60 = 0;
  local_78 = 0;
  local_58 = 0;
  local_40[0] = 0;
  iVar7 = *(int *)(param_3 + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      plVar4 = (longlong *)FUN_00b94e60(param_3,iVar6);
      cVar2 = FUN_0198a580(plVar4);
      if ((cVar2 == '\x04') && (sVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4), sVar3 == 0x3a)) {
        (**(code **)(*plVar4 + 0x288))(plVar4,local_40);
        cVar2 = (**(code **)(*param_2 + 0x140))(param_2,local_40[0],local_2c);
        if (cVar2 == '\0') {
          FUN_0041ddd0(&local_58,&PTR_PTR_0198a560);
          FUN_00de8a20(&local_50,L"SchEd",L"sERCSingleMacroPin",
                       *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x450),local_58);
          FUN_004168b0(&local_60,local_50);
          FUN_019a7350(*(undefined8 *)(param_1 + 0x80),&local_78,plVar4);
          local_70 = local_78;
          local_68 = 0x11;
          FUN_00442f70(&local_48,local_60,&local_70,0);
          local_80 = plVar4;
          uVar5 = FUN_019a74e0(*(undefined8 *)(param_1 + 0x80),1,&local_80,0);
          plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x4b8);
          (**(code **)(*plVar4 + 0x80))(plVar4,local_48,uVar5);
          piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 0x438);
          *piVar1 = *piVar1 + 1;
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00414480(&local_78);
  FUN_00414560(&local_60,2);
  FUN_00414520(&local_50);
  FUN_00414560(&local_48,2);
  return;
}

