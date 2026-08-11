/* Ghidra address: 01137130 */
/* Ghidra symbol: FUN_01137130 */


void FUN_01137130(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [88];
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  plVar2 = *(longlong **)(param_1 + 0xa18);
  cVar4 = FUN_004113d0(plVar2,&PTR_FUN_01108fb0);
  if (cVar4 != '\0') {
    lVar3 = *(longlong *)(param_1 + 0xa10);
    iVar1 = *(int *)(param_2 + 8);
    if (iVar1 < 3) {
      if (iVar1 == 2) {
        uVar7 = FUN_00e15e10(*(undefined4 *)(param_2 + 0x10));
        *(undefined8 *)(lVar3 + 0x128) = uVar7;
        FUN_01136e50(param_1,local_70,*(undefined8 *)(lVar3 + 0x128),*(undefined1 *)(lVar3 + 0x149))
        ;
        FUN_004169a0(&local_88,local_70);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x920),local_88);
      }
      else if (iVar1 == 0) {
        dVar6 = (double)FUN_00e15e10(*(undefined4 *)(param_2 + 0x10));
        *(double *)(lVar3 + 0x118) = dVar6 * 1000.0;
        FUN_01136e50(param_1,local_70,*(undefined8 *)(lVar3 + 0x118),9);
        FUN_004169a0(&local_78,local_70);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x928),local_78);
      }
      else if (iVar1 == 1) {
        uVar7 = FUN_00e15e10(*(undefined4 *)(param_2 + 0x10));
        *(undefined8 *)(lVar3 + 0x120) = uVar7;
        FUN_01136e50(param_1,local_70,*(undefined8 *)(lVar3 + 0x120),*(undefined1 *)(lVar3 + 0x149))
        ;
        FUN_004169a0(&local_80,local_70);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x918),local_80);
      }
    }
    else if (iVar1 == 3) {
      uVar7 = FUN_00e15e10(*(undefined4 *)(param_2 + 0x10));
      *(undefined8 *)(lVar3 + 0x130) = uVar7;
      FUN_01136e50(param_1,local_70,*(undefined8 *)(lVar3 + 0x130),*(undefined1 *)(lVar3 + 0x14a));
      FUN_004169a0(&local_90,local_70);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x930),local_90);
    }
    else if (iVar1 == 4) {
      uVar5 = (**(code **)(*plVar2 + 0x128))(plVar2,*(undefined4 *)(param_2 + 0x10));
      *(undefined1 *)(lVar3 + 0x110) = uVar5;
    }
    FUN_0113a180(param_1);
    FUN_0113a9b0(param_1);
  }
  FUN_00414560(&local_90,4);
  return;
}

