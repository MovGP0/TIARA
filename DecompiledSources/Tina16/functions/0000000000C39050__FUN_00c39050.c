/* Ghidra address: 00c39050 */
/* Ghidra symbol: FUN_00c39050 */


void FUN_00c39050(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  local_48._0_4_ = (int)uVar1;
  iVar4 = (int)local_48;
  local_48._4_4_ = (int)(uVar1 >> 0x20);
  iVar3 = local_48._4_4_;
  local_40._0_4_ = (int)uVar2;
  iVar8 = (int)local_40 - (int)local_48;
  local_40._4_4_ = (int)(uVar2 >> 0x20);
  iVar9 = local_40._4_4_ - local_48._4_4_;
  if (*(char *)(param_1 + 0x326) == '\x01') {
    iVar8 = iVar8 + 1;
    iVar9 = iVar9 + 1;
  }
  local_48 = uVar1;
  local_40 = uVar2;
  plVar7 = (longlong *)FUN_00609e10(param_2);
  FUN_005fdab0(plVar7[0x10],*(undefined4 *)(param_1 + 200));
  (**(code **)(*plVar7 + 0xa8))(plVar7,&local_48);
  FUN_005fdab0(plVar7[0x10],*(undefined4 *)(param_1 + 0x32c));
  FUN_005fd4e0(plVar7[0xf],*(undefined4 *)(param_1 + 0x328));
  FUN_005fd6d0(plVar7[0xf],1);
  iVar10 = iVar4 + iVar8;
  (**(code **)(*plVar7 + 0xd0))
            (plVar7,uVar1 & 0xffffffff,iVar3,iVar8,iVar9 * 2 + -1,iVar10,local_40._4_4_ + -1,iVar4,
             local_40._4_4_ + -1);
  (**(code **)(*plVar7 + 200))(plVar7,uVar1 & 0xffffffff,local_40._4_4_);
  (**(code **)(*plVar7 + 0xc0))(plVar7,iVar10,local_40._4_4_);
  iVar4 = FUN_00c38790(param_1);
  if (0 < iVar4) {
    FUN_005fd4e0(plVar7[0xf],*(undefined4 *)(param_1 + 0x328));
    uVar1 = (longlong)*(int *)(param_1 + 0x98) / 2;
    (**(code **)(*plVar7 + 200))(plVar7,uVar1 & 0xffffffff,local_40._4_4_ + -1);
    iVar4 = FUN_00c38790(param_1);
    dVar12 = ((double)iVar4 / 100.0) * 3.141592653589793;
    dVar11 = (double)FUN_0040bcd0(dVar12);
    uVar5 = FUN_0040c770((double)(int)uVar1 * (1.0 - dVar11));
    dVar11 = (double)FUN_0040bdd0(dVar12);
    uVar6 = FUN_0040c770((double)(local_40._4_4_ + -1) * (1.0 - dVar11));
    (**(code **)(*plVar7 + 0xc0))(plVar7,uVar5,uVar6);
  }
  return;
}

