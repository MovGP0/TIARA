/* Ghidra address: 015341c0 */
/* Ghidra symbol: FUN_015341c0 */


/* WARNING: Removing unreachable block (ram,0x015342f3) */

void FUN_015341c0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  byte local_29;
  undefined8 local_28;
  undefined4 local_1c;
  
  local_40 = auStack_78;
  local_50 = 0;
  local_48 = 0;
  local_28 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x930) + 0x260))(*(longlong **)(param_1 + 0x930));
  if (-1 < iVar2) {
    FUN_0152fc70(param_1);
    plVar1 = *(longlong **)(param_1 + 0x930);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_28,uVar3);
    plVar1 = *(longlong **)(param_1 + 0x930);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    lVar4 = (**(code **)(*(longlong *)plVar1[0x94] + 0x30))((longlong *)plVar1[0x94],uVar3);
    if (lVar4 == 0) {
      local_29 = FUN_004170c0(&LAB_01534458,local_28,1);
      FUN_00416dc0(&local_48,local_28,2,local_29 - 2);
      local_1c = FUN_0043fc00(local_48);
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x930);
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      uVar5 = (**(code **)(*(longlong *)plVar1[0x94] + 0x30))((longlong *)plVar1[0x94],uVar3);
      lVar4 = FUN_004aeac0(uVar5,1);
      FUN_004169a0(&local_50,lVar4 + 0x2b0);
      local_1c = FUN_016cef60(*(undefined8 *)(*(longlong *)(param_1 + 0x958) + 0x4e8),local_50,
                              *(undefined8 *)(param_1 + 0x1c10));
    }
    *(undefined4 *)(param_1 + 0x1c04) = local_1c;
    FUN_00bfa980(*(undefined8 *)(param_1 + 0x958),local_1c);
    FUN_00bfa950(*(undefined8 *)(param_1 + 0x958),1);
    (**(code **)(**(longlong **)(param_1 + 0x958) + 600))(*(longlong **)(param_1 + 0x958));
    FUN_0152fb90(param_1);
    FUN_0152fc40(param_1);
  }
  FUN_00414560(&local_50,2);
  FUN_00414480(&local_28);
  return;
}

