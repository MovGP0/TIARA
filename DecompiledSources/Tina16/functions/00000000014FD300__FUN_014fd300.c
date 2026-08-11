/* Ghidra address: 014fd300 */
/* Ghidra symbol: FUN_014fd300 */


undefined1
FUN_014fd300(undefined1 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined1 param_5)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong in_stack_fffffffffffffd18;
  ulonglong in_stack_fffffffffffffd20;
  int *piVar7;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 local_283;
  undefined1 local_282 [522];
  undefined8 local_78 [3];
  undefined4 local_5a;
  undefined1 local_54;
  undefined4 local_52;
  undefined1 local_41;
  undefined4 local_40;
  int local_3c;
  ulonglong local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined1 auStack_27 [2];
  undefined1 auStack_25 [2];
  undefined1 auStack_23 [3];
  undefined8 uStack_20;
  
  local_2a0 = 0;
  local_298 = 0;
  local_290 = 0;
  *param_2 = 0;
  uVar3 = FUN_019a4600();
  piVar7 = &local_3c;
  cVar2 = FUN_014b7d50(0xd,uVar3,1,0,in_stack_fffffffffffffd18 & 0xffffffffffffff00,
                       in_stack_fffffffffffffd20 & 0xffffffffffff0000,piVar7);
  if (cVar2 == '\0') {
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_290,local_3c + 0x86);
    FUN_015fcf20(local_290,0,0,0);
  }
  puVar5 = (undefined8 *)PTR_DAT_02003ed8;
  puVar6 = local_78;
  for (lVar4 = 7; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar3 = *(undefined8 *)(PTR_DAT_020034d0 + 0x10);
  uStack_20 = *(undefined8 *)(PTR_DAT_020034d0 + 0x18);
  local_38 = *(ulonglong *)PTR_DAT_020034d0 & 0xffffffffffffff;
  uStack_30 = *(ulonglong *)(PTR_DAT_020034d0 + 8) & 0xffffffff;
  _local_28 = CONCAT71((int7)((ulonglong)uVar3 >> 8),param_1);
  uVar1 = _local_28;
  _auStack_25 = (undefined5)((ulonglong)uVar3 >> 0x18);
  _local_28 = CONCAT12(PTR_DAT_020030c0[2],(short)uVar1);
  uVar1 = _local_28;
  auStack_23 = SUB83((ulonglong)uVar3 >> 0x28,0);
  _local_28 = CONCAT14(PTR_DAT_020030c0[3],(int)uVar1);
  _local_28 = CONCAT17(param_5,_local_28);
  uStack_30._0_2_ = CONCAT11(1,(undefined1)uStack_30);
  local_5a = 0;
  local_41 = *PTR_DAT_020017c0;
  local_54 = param_1;
  FUN_015fcb30(&local_298,PTR_DAT_02004770);
  FUN_00414ad0(param_4,local_298);
  uVar3 = FUN_00442620(local_282,*param_4);
  FUN_015fcc20(uVar3,param_3,0,0);
  uVar3 = FUN_0154bb80(&DAT_01546f18,1);
  *param_2 = uVar3;
  uVar3 = FUN_019a4600();
  FUN_01ca2f40(*(undefined8 *)PTR_DAT_02004e40,&local_2a0,uVar3);
  FUN_01569030(*param_2,local_2a0);
  uVar3 = FUN_019a4600();
  FUN_0155bbe0(*param_2,*param_4,*param_3,&local_38,0,uVar3,(ulonglong)piVar7 & 0xffffffffffffff00,0
              );
  uVar3 = FUN_019a4600();
  FUN_019af590(uVar3,*param_4);
  uVar3 = FUN_019a4600();
  FUN_019af580(uVar3,*param_3);
  uVar3 = FUN_019a4600();
  cVar2 = FUN_019a04e0(uVar3,0xffff,&local_40);
  if (cVar2 == '\0') {
    local_52 = 0;
  }
  else {
    local_52 = local_40;
  }
  uVar3 = FUN_019a4600();
  FUN_01603020(uVar3,0,0,0);
  FUN_015fd070(*param_4,0,*param_2,local_78);
  uVar3 = FUN_019a4600();
  cVar2 = FUN_015f47a0(*param_3,uVar3,0,&local_283,0,0);
  if (cVar2 == '\0') {
    FUN_015fcf20(0,0,1,0);
  }
  FUN_0160bca0(*param_3,*param_2,1);
  FUN_0160f290(*param_3,*param_2);
  _ModifyFastMCUMode(*param_3,0);
  FUN_00414560(&local_2a0,3);
  return 1;
}

