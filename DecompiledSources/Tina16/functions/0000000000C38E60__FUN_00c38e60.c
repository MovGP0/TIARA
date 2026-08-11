/* Ghidra address: 00c38e60 */
/* Ghidra symbol: FUN_00c38e60 */


void FUN_00c38e60(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  local_40._0_4_ = (int)uVar2;
  local_48._0_4_ = (int)uVar1;
  iVar7 = (int)local_40 - (int)local_48;
  local_40._4_4_ = (int)(uVar2 >> 0x20);
  local_48._4_4_ = (int)(uVar1 >> 0x20);
  iVar8 = local_40._4_4_ - local_48._4_4_;
  if (*(char *)(param_1 + 0x326) == '\x01') {
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 1;
  }
  local_48 = uVar1;
  local_40 = uVar2;
  plVar6 = (longlong *)FUN_00609e10(param_2);
  FUN_005fdab0(plVar6[0x10],*(undefined4 *)(param_1 + 200));
  (**(code **)(*plVar6 + 0xa8))(plVar6,&local_48);
  FUN_005fdab0(plVar6[0x10],*(undefined4 *)(param_1 + 0x32c));
  FUN_005fd4e0(plVar6[0xf],*(undefined4 *)(param_1 + 0x328));
  FUN_005fd6d0(plVar6[0xf],1);
  (**(code **)(*plVar6 + 0xa0))(plVar6,local_48 & 0xffffffff,local_48._4_4_,iVar7,iVar8);
  iVar3 = FUN_00c38790(param_1);
  if (0 < iVar3) {
    FUN_005fdab0(plVar6[0x10],*(undefined4 *)(param_1 + 0x328));
    iVar3 = FUN_00c38790(param_1,(longlong)iVar8 % 2 & 0xffffffff);
    dVar10 = ((double)iVar3 / 50.0 + 0.5) * 3.141592653589793;
    dVar9 = (double)FUN_0040bcd0(dVar10);
    uVar4 = FUN_0040c770((double)(iVar7 / 2) * (1.0 - dVar9));
    dVar9 = (double)FUN_0040bdd0(dVar10);
    uVar5 = FUN_0040c770((double)(iVar8 / 2) * (1.0 - dVar9));
    (**(code **)(*plVar6 + 0xd0))
              (plVar6,local_48 & 0xffffffff,local_48._4_4_,iVar7,iVar8,uVar4,uVar5,iVar7 / 2,0);
  }
  return;
}

