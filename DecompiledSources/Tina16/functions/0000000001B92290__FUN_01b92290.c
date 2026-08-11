/* Ghidra address: 01b92290 */
/* Ghidra symbol: FUN_01b92290 */


void FUN_01b92290(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  if (*(longlong *)(param_1 + 0x750) != 0) {
    plVar4 = (longlong *)
             FUN_00c86a90(&PTR_FUN_00c85fc8,1,*(undefined8 *)PTR_DAT_02004030,
                          *(longlong *)(param_1 + 0x750),0,*(undefined1 *)(param_1 + 0x758));
    plVar1 = (longlong *)plVar4[0xd6];
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),&local_20);
    uVar2 = (**(code **)(*(longlong *)plVar1[0x94] + 0xb0))((longlong *)plVar1[0x94],local_20);
    (**(code **)(*plVar1 + 0x268))(plVar1,uVar2);
    iVar3 = (**(code **)(*plVar4 + 0x2d0))(plVar4);
    if (iVar3 == 1) {
      iVar3 = (**(code **)(*(longlong *)plVar4[0xd6] + 0x260))((longlong *)plVar4[0xd6]);
      if (iVar3 != -1) {
        plVar1 = (longlong *)plVar4[0xd6];
        uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
        (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_28,uVar2);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),local_28);
        plVar1 = (longlong *)plVar4[0xd6];
        uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
        lVar5 = (**(code **)(*(longlong *)plVar1[0x94] + 0x30))((longlong *)plVar1[0x94],uVar2);
        FUN_00414ad0(param_1 + 0x760,*(undefined8 *)(lVar5 + 0x20));
      }
    }
  }
  FUN_00414480(&local_28);
  FUN_00414480(&local_20);
  return;
}

