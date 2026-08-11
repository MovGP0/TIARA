/* Ghidra address: 017eef40 */
/* Ghidra symbol: FUN_017eef40 */


void FUN_017eef40(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_58 = 0;
  local_38 = 0;
  local_30[0] = 0;
  cVar2 = FUN_017f1540(param_1,param_1,1);
  if (cVar2 != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x868) + 0x4e8);
    (**(code **)(*plVar1 + 0x90))(plVar1);
    FUN_00c0dad0(*(undefined8 *)(param_1 + 0x868),0);
    FUN_010c2250(local_30,0);
    FUN_00414ad0(param_1 + 0xb30,local_30[0]);
    FUN_00f08d50(&local_38,10);
    FUN_017f0d10(param_1,local_38);
    FUN_017f0950(param_1);
    FUN_01695da0(*(undefined8 *)(param_1 + 0xb48),*PTR_DAT_02004b10);
    FUN_017f0df0(param_1);
    if (*(longlong *)(param_1 + 0xb48) != 0) {
      *(undefined8 *)(param_1 + 0x890) = *(undefined8 *)(*(longlong *)(param_1 + 0xb48) + 0x628);
      lVar4 = *(longlong *)(param_1 + 0xb48);
      *(undefined8 *)(param_1 + 0x898) = *(undefined8 *)(lVar4 + 0x630);
      *(undefined8 *)(param_1 + 0x8a0) = *(undefined8 *)(lVar4 + 0x638);
      *(undefined8 *)(param_1 + 0x8a8) = *(undefined8 *)(lVar4 + 0x640);
      *(undefined8 *)(param_1 + 0x8b0) = *(undefined8 *)(lVar4 + 0x648);
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0xb48) + 0x650);
      puVar7 = (undefined8 *)(param_1 + 0x8b8);
      for (lVar4 = 0x48; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      FUN_00410f20(*(undefined8 *)(param_1 + 0xb48));
    }
    uVar3 = FUN_017e1bd0(&DAT_017df868,1,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0xb48) = uVar3;
    FUN_017e8080(uVar3,*(undefined8 *)(param_1 + 0x868),*(undefined8 *)(param_1 + 0x7c8));
    lVar4 = *(longlong *)(param_1 + 0xb48);
    *(undefined8 *)(lVar4 + 0x628) = *(undefined8 *)(param_1 + 0x890);
    *(undefined8 *)(lVar4 + 0x630) = *(undefined8 *)(param_1 + 0x898);
    *(undefined8 *)(lVar4 + 0x638) = *(undefined8 *)(param_1 + 0x8a0);
    *(undefined8 *)(lVar4 + 0x640) = *(undefined8 *)(param_1 + 0x8a8);
    *(undefined8 *)(lVar4 + 0x648) = *(undefined8 *)(param_1 + 0x8b0);
    puVar6 = (undefined8 *)(param_1 + 0x8b8);
    puVar7 = (undefined8 *)(lVar4 + 0x650);
    for (lVar5 = 0x48; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_00b95290(*(undefined8 *)(lVar4 + 0x550));
    FUN_016942f0(*(undefined8 *)(param_1 + 0xb48));
    FUN_01694110(*(undefined8 *)(*(longlong *)(param_1 + 0xb48) + 0x550),1,0,0);
    FUN_011162c0(*(undefined8 *)(*(longlong *)(param_1 + 0xb48) + 0x550));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb48) + 0x890);
    (**(code **)(*plVar1 + 0x90))(plVar1);
    FUN_01115c40(*(undefined8 *)(param_1 + 0xb48));
    FUN_00414ad0(param_1 + 0x888,L"noname.ipr");
    FUN_00441920(&local_58,*(undefined8 *)(param_1 + 0x888));
    local_50 = local_58;
    local_48 = 0x11;
    FUN_00442f70(&local_40,*(undefined8 *)(param_1 + 0x880),&local_50,0);
    FUN_0064de00(param_1,local_40);
  }
  FUN_00414480(&local_58);
  FUN_00414560(&local_40,3);
  return;
}

