/* Ghidra address: 01c92ba0 */
/* Ghidra symbol: FUN_01c92ba0 */


void FUN_01c92ba0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  longlong *local_28;
  longlong local_20 [2];
  
  local_40 = auStack_88;
  local_48 = 0;
  local_50 = 0;
  cVar1 = FUN_01c8cee0(param_1);
  if (cVar1 == '\0') {
    local_20[0] = 0;
    cVar1 = FUN_0179cbe0(&PTR_FUN_0178b908,*(undefined8 *)PTR_DAT_02004030,local_20);
    if (cVar1 != '\0') {
      local_28 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x39);
      FUN_01d38290(local_28,1);
      FUN_01d04aa0(local_28,0);
      lVar2 = FUN_0176a5d0(&PTR_FUN_017611c0,1,local_28);
      local_28[0x35] = lVar2;
      *(undefined1 *)(lVar2 + 0x61) = 1;
      FUN_01768da0(lVar2,local_20[0]);
      (*(code *)**(undefined8 **)local_28[0x35])
                ((undefined8 *)local_28[0x35],*(undefined8 *)(local_20[0] + 0x10));
      uVar3 = FUN_0198b200(0,&PTR_FUN_01984d18,0,0);
      *(undefined8 *)(local_28[0x35] + 8) = uVar3;
      FUN_019a3a90(uVar3,local_20[0]);
      *(undefined1 *)(local_28 + 0x34) = *(undefined1 *)(local_28[0x35] + 0x70);
      uVar3 = FUN_0176a290(local_28[0x35]);
      local_30._0_4_ = (undefined4)uVar3;
      *(undefined4 *)(local_28 + 0x14) = (undefined4)local_30;
      local_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      *(undefined4 *)((longlong)local_28 + 0xa4) = local_30._4_4_;
      local_30 = uVar3;
      (**(code **)(*local_28 + 0x128))(local_28,&local_50);
      FUN_019a44e0(*(undefined8 *)(param_1 + 0x27a8),&local_48,local_50,local_28);
      FUN_00414ad0(local_28 + 0x13,local_48);
      *(longlong **)(param_1 + 0x1868) = local_28;
      local_68 = 1;
      FUN_01c6ec30(param_1,0xfffffffe,0,1);
      FUN_00410f20(local_20[0]);
    }
  }
  FUN_00414560(&local_50,2);
  return;
}

