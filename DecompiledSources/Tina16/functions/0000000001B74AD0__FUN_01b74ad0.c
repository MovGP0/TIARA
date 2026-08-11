/* Ghidra address: 01b74ad0 */
/* Ghidra symbol: FUN_01b74ad0 */


void FUN_01b74ad0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_50 [2];
  undefined1 local_40 [16];
  undefined8 local_30 [2];
  
  local_50[0] = 0;
  local_30[0] = 0;
  FUN_00414b50(local_30,L"New Scheme");
  cVar2 = FUN_01b74860(param_1,local_30);
  if (cVar2 != '\0') {
    lVar4 = FUN_004095c0(0x1f0);
    FUN_0040d200(lVar4,0x1f0,0);
    FUN_0043dc90(local_40);
    FUN_0043dec0(local_50,local_40);
    FUN_00416910(lVar4,local_50[0],0xff);
    puVar6 = (undefined8 *)PTR_DAT_02005768;
    puVar7 = (undefined8 *)(lVar4 + 0x104);
    for (lVar5 = 0xd; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)puVar7 = *(undefined4 *)puVar6;
    puVar6 = (undefined8 *)PTR_DAT_020021a0;
    puVar7 = (undefined8 *)(lVar4 + 0x170);
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f8) + 0x4a0);
    uVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,local_30[0],lVar4);
    FUN_0074b490(*(undefined8 *)(param_1 + 0x738),0);
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x268))(*(longlong **)(param_1 + 0x6f8),uVar3);
    FUN_01b74210(param_1,0);
  }
  FUN_00414480(local_50);
  FUN_00414480(local_30);
  return;
}

