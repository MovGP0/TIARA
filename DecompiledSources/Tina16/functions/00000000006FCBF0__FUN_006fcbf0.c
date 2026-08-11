/* Ghidra address: 006fcbf0 */
/* Ghidra symbol: FUN_006fcbf0 */


undefined8 FUN_006fcbf0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined1 *local_60;
  longlong *local_48;
  undefined1 local_3c [16];
  int local_2c;
  undefined8 local_28;
  longlong *local_20;
  
  local_60 = auStack_98;
  local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  iVar1 = (**(code **)(*param_2 + 0x90))(param_2);
  (**(code **)(*local_20 + 0x88))(local_20,*(int *)((longlong)param_2 + 0x94) * iVar1);
  (**(code **)(*local_20 + 0x70))(local_20,(int)param_2[0x12]);
  local_78 = *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x9c);
  FUN_004238d0(local_3c,0,0,*(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x98));
  local_48 = (longlong *)FUN_00609e10(local_20);
  FUN_005fdab0(local_48[0x10],0xff00000f);
  (**(code **)(*local_48 + 0xa8))(local_48,local_3c);
  iVar1 = (**(code **)(*param_2 + 0x90))();
  local_2c = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = FUN_007d56e0(param_2);
      uVar3 = FUN_00609e10(local_20);
      uVar3 = FUN_005ffa40(uVar3);
      local_78 = 0;
      local_70 = 1;
      thunk_FUN_04153868(uVar2,local_2c,uVar3,local_2c * *(int *)((longlong)param_2 + 0x94));
      local_2c = local_2c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_28 = FUN_0060c2f0(local_20);
  FUN_00410f20(local_20);
  return local_28;
}

