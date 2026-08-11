/* Ghidra address: 01960c20 */
/* Ghidra symbol: FUN_01960c20 */


double FUN_01960c20(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined1 local_81;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  char local_49;
  double local_48;
  undefined8 local_40;
  
  local_60 = auStack_c8;
  local_40 = FUN_01953870(param_1);
  if ((*(int *)(param_1 + 0x318) == 0x5a) || (*(int *)(param_1 + 0x318) == 0x10e)) {
    local_49 = '\x01';
  }
  else {
    local_49 = '\0';
  }
  FUN_018dc3b0(local_40);
  FUN_018d6e10(local_40,*(undefined8 *)(param_1 + 0x78));
  local_81 = FUN_0195f670(param_1,9);
  uVar3 = FUN_0195f670(param_1,1);
  uVar4 = FUN_0195f670(param_1,6);
  uVar1 = FUN_0195f670(param_1,8);
  uVar2 = FUN_0195f670(param_1,3);
  local_98 = FUN_0195f670(param_1,10);
  local_a8 = (undefined8 *)CONCAT71(local_a8._1_7_,uVar1);
  local_a0 = (undefined1 *)CONCAT71(local_a0._1_7_,uVar2);
  local_90 = *(undefined4 *)(param_1 + 0x318);
  FUN_018d6ff0(local_40,local_81,uVar3,uVar4);
  FUN_018d70b0(local_40,*(undefined8 *)(param_1 + 0x310),*(undefined8 *)(param_1 + 0x2c0),
               *(undefined8 *)(param_1 + 0x300));
  if (local_49 == '\0') {
    local_a8._0_4_ = 10000;
    FUN_00498350(&local_70,0,0,10000);
    local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,10000);
    FUN_00498350(local_80,0,0,10000);
    local_a8 = &local_70;
    local_a0 = local_80;
    FUN_018d7050(local_40,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000);
  }
  else {
    local_a8 = (undefined8 *)0x3ff0000000000000;
    local_a0 = (undefined1 *)0x3ff0000000000000;
    FUN_01960920(param_1,&local_70,0,0);
    *(undefined8 *)(param_1 + 0x3b8) = local_70;
    *(undefined8 *)(param_1 + 0x3c0) = uStack_68;
    local_a8 = (undefined8 *)(param_1 + 0x3b8);
    local_a0 = (undefined1 *)(param_1 + 0x3b8);
    FUN_018d7050(local_40,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000);
  }
  FUN_018d70c0(local_40,*(undefined8 *)(param_1 + 0x308),0,0);
  if (local_49 == '\0') {
    dVar6 = (double)FUN_018db760(local_40);
    dVar7 = (double)FUN_0195fa50(param_1);
    lVar5 = FUN_0040c770(dVar6 + dVar7);
  }
  else {
    dVar6 = (double)FUN_018db610(local_40);
    dVar7 = (double)FUN_0195fa50(param_1);
    lVar5 = FUN_0040c770(dVar6 + dVar7);
  }
  local_48 = (double)lVar5;
  FUN_018dc480(local_40);
  return local_48;
}

