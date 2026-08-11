/* Ghidra address: 019605b0 */
/* Ghidra symbol: FUN_019605b0 */


double FUN_019605b0(longlong *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined1 local_81;
  longlong local_80 [2];
  longlong local_70 [2];
  undefined1 *local_60;
  char local_49;
  double local_48;
  undefined8 local_40;
  
  local_60 = auStack_c8;
  local_40 = FUN_01953870(param_1);
  if (((int)param_1[99] == 0x5a) || ((int)param_1[99] == 0x10e)) {
    local_49 = '\x01';
  }
  else {
    local_49 = '\0';
  }
  FUN_018dc3b0(local_40);
  FUN_018d6e10(local_40,param_1[0xf]);
  local_81 = FUN_0195f670(param_1,9);
  uVar4 = FUN_0195f670(param_1,1);
  uVar5 = FUN_0195f670(param_1,6);
  uVar1 = FUN_0195f670(param_1,8);
  uVar2 = FUN_0195f670(param_1,3);
  local_98 = FUN_0195f670(param_1,10);
  local_a8 = (longlong *)CONCAT71(local_a8._1_7_,uVar1);
  local_a0 = (longlong *)CONCAT71(local_a0._1_7_,uVar2);
  local_90 = (undefined4)param_1[99];
  FUN_018d6ff0(local_40,local_81,uVar4,uVar5);
  FUN_018d70b0(local_40,param_1[0x62],param_1[0x58],param_1[0x60]);
  cVar3 = FUN_0195f670(param_1,2);
  if (cVar3 == '\0' && local_49 == '\0') {
    local_a8 = (longlong *)0x0;
    local_a0 = (longlong *)0x0;
    (**(code **)(*param_1 + 0x2b0))(param_1,0,0x3ff0000000000000,0x3ff0000000000000);
    local_a8 = param_1 + 0x77;
    local_a0 = param_1 + 0x77;
    FUN_018d7050(local_40,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000);
  }
  else {
    local_a8._0_4_ = 10000;
    FUN_00498350(local_70,0,0,10000);
    local_a8 = (longlong *)CONCAT44(local_a8._4_4_,10000);
    FUN_00498350(local_80,0,0,10000);
    local_a8 = local_70;
    local_a0 = local_80;
    FUN_018d7050(local_40,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000);
  }
  FUN_018d70c0(local_40,param_1[0x61],0,0);
  if (local_49 == '\0') {
    dVar7 = (double)FUN_018db610(local_40);
    dVar8 = (double)FUN_0195f9d0(param_1);
    lVar6 = FUN_0040c770(dVar7 + dVar8);
  }
  else {
    dVar7 = (double)FUN_018db760(local_40);
    dVar8 = (double)FUN_0195f9d0(param_1);
    lVar6 = FUN_0040c770(dVar7 + dVar8);
  }
  local_48 = (double)lVar6;
  FUN_018dc480(local_40);
  return local_48;
}

