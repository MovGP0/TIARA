/* Ghidra address: 01861ba0 */
/* Ghidra symbol: FUN_01861ba0 */


void FUN_01861ba0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [36];
  int local_34;
  undefined1 *local_30;
  int local_24;
  longlong local_20;
  
  local_30 = auStack_58;
  FUN_00410f20(param_1[0x10]);
  lVar4 = FUN_0185c970(&DAT_0185b848,1);
  param_1[0x10] = lVar4;
  FUN_0185ceb0(lVar4,param_2);
  uVar3 = FUN_0185f2d0(param_1[0x10]);
  *(undefined4 *)(param_1 + 0x12) = uVar3;
  uVar3 = FUN_0185d0b0(param_1[0x10]);
  *(undefined4 *)(param_1 + 0x11) = uVar3;
  uVar3 = FUN_0185d0a0(param_1[0x10]);
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar3;
  uVar2 = FUN_0185d0c0(param_1[0x10]);
  *(undefined1 *)((longlong)param_1 + 0x94) = uVar2;
  FUN_00410f20(param_1[0x13]);
  lVar4 = FUN_0185fa70(param_1[0x10]);
  param_1[0x13] = lVar4;
  local_34 = (int)param_1[0x12] + -1;
  local_24 = 0;
  iVar1 = (int)param_1[0x12];
  if (-1 < local_34) {
    do {
      local_34 = iVar1;
      local_20 = FUN_00410e60(&DAT_01860e28,1);
      uVar3 = FUN_0185f470(param_1[0x10],local_24);
      *(undefined4 *)(local_20 + 8) = uVar3;
      uVar3 = FUN_0185f490(param_1[0x10],local_24);
      *(undefined4 *)(local_20 + 0xc) = uVar3;
      uVar3 = FUN_0185f4b0(param_1[0x10],local_24);
      *(undefined4 *)(local_20 + 0x10) = uVar3;
      uVar3 = FUN_0185f4d0(param_1[0x10],local_24);
      *(undefined4 *)(local_20 + 0x14) = uVar3;
      FUN_004ae7e0(param_1[0x14],local_20);
      local_24 = local_24 + 1;
      local_34 = local_34 + -1;
      iVar1 = local_34;
    } while (local_34 != 0);
  }
  FUN_01860620(param_1,param_1[0x13]);
  (**(code **)(*param_1 + 0x88))(param_1,(int)param_1[0x11]);
  (**(code **)(*param_1 + 0x80))(param_1,0);
  return;
}

