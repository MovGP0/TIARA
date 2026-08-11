/* Ghidra address: 00c38d10 */
/* Ghidra symbol: FUN_00c38d10 */


void FUN_00c38d10(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  local_30._0_4_ = (int)uVar2;
  local_38._0_4_ = (int)uVar1;
  iVar6 = ((int)local_30 - (int)local_38) + 1;
  local_30._4_4_ = (int)(uVar2 >> 0x20);
  local_38._4_4_ = (int)(uVar1 >> 0x20);
  iVar7 = local_30._4_4_ - local_38._4_4_;
  iVar8 = iVar7 + 1;
  local_38 = uVar1;
  local_30 = uVar2;
  plVar5 = (longlong *)FUN_00609e10(param_2);
  FUN_005fdab0(plVar5[0x10],*(undefined4 *)(param_1 + 0x32c));
  (**(code **)(*plVar5 + 0xa8))(plVar5,&local_38);
  FUN_005fd4e0(plVar5[0xf],*(undefined4 *)(param_1 + 0x328));
  FUN_005fd6d0(plVar5[0xf],1);
  FUN_005fdab0(plVar5[0x10],*(undefined4 *)(param_1 + 0x328));
  if (*(char *)(param_1 + 0x324) == '\x01') {
    uVar3 = FUN_00c38790(param_1);
    iVar7 = FUN_00c385d0(uVar3,iVar6);
    if (iVar6 < iVar7) {
      iVar7 = iVar6;
    }
    if (0 < iVar7) {
      FUN_00498350(local_48,local_38 & 0xffffffff,local_38._4_4_,iVar7,iVar8);
      (**(code **)(*plVar5 + 0xa8))(plVar5,local_48);
    }
  }
  else if (*(char *)(param_1 + 0x324) == '\x02') {
    uVar3 = FUN_00c38790(param_1);
    iVar4 = FUN_00c385d0(uVar3,iVar8);
    if (iVar8 <= iVar4) {
      iVar4 = iVar7;
    }
    FUN_00498350(local_48,local_38 & 0xffffffff,iVar8 - iVar4,iVar6,iVar8);
    (**(code **)(*plVar5 + 0xa8))(plVar5,local_48);
  }
  return;
}

