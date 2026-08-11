/* Ghidra address: 01bc2650 */
/* Ghidra symbol: FUN_01bc2650 */


void FUN_01bc2650(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_20;
  
  local_20 = 0;
  plVar4 = (longlong *)FUN_00c86a90(&PTR_FUN_00c85fc8,1,*(undefined8 *)PTR_DAT_02004030,0,0,0);
  iVar2 = (**(code **)(*plVar4 + 0x2d0))(plVar4);
  if (iVar2 == 1) {
    iVar2 = (**(code **)(*(longlong *)plVar4[0xd6] + 0x260))((longlong *)plVar4[0xd6]);
    if (iVar2 != -1) {
      plVar1 = (longlong *)plVar4[0xd6];
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_20,uVar3);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x700),local_20);
      plVar4 = (longlong *)plVar4[0xd6];
      uVar3 = (**(code **)(*plVar4 + 0x260))(plVar4);
      lVar5 = (**(code **)(*(longlong *)plVar4[0x94] + 0x30))((longlong *)plVar4[0x94],uVar3);
      FUN_00414ad0(param_1 + 0x768,*(undefined8 *)(lVar5 + 0x20));
    }
  }
  FUN_00414480(&local_20);
  return;
}

