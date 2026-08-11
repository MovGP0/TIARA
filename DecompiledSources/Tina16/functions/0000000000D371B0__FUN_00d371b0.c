/* Ghidra address: 00d371b0 */
/* Ghidra symbol: FUN_00d371b0 */


void FUN_00d371b0(longlong *param_1,float param_2,char param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 *local_70;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  longlong *local_40;
  
  local_70 = auStack_c8;
  dVar9 = (double)FUN_0040bcd0((double)param_2);
  local_44 = (float)dVar9;
  dVar9 = (double)FUN_0040bdd0((double)param_2);
  local_5c = (float)dVar9;
  local_60 = local_44;
  local_58 = -local_5c;
  local_54 = local_44;
  local_48 = local_5c;
  local_40 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  uVar1 = FUN_0060a330(param_1);
  FUN_0060be30(local_40,uVar1);
  FUN_0060be90(local_40,(char)param_1[0xb]);
  uVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  (**(code **)(*local_40 + 0x80))(local_40,uVar1);
  lVar6 = FUN_00609e10(local_40);
  FUN_005fdab0(*(undefined8 *)(lVar6 + 0x80),param_4);
  if (param_3 == '\0') {
    uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
    (**(code **)(*local_40 + 0x88))(local_40,uVar1);
    uVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    (**(code **)(*local_40 + 0x70))(local_40,uVar1);
    iVar2 = (**(code **)(*param_1 + 0x60))(param_1);
    iVar3 = (**(code **)(*param_1 + 0x60))(param_1);
    iVar4 = (**(code **)(*param_1 + 0x48))(param_1);
    local_50 = (((float)iVar2 - (float)iVar3 * local_44) + (float)iVar4 * local_48) / 2.0;
    iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    iVar3 = (**(code **)(*param_1 + 0x60))(param_1);
    iVar4 = (**(code **)(*param_1 + 0x48))(param_1);
    local_4c = ((float)iVar2 - (float)iVar3 * local_48) - (float)iVar4 * local_44;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x60))(param_1);
    dVar9 = (double)FUN_0040c850((double)local_44);
    iVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    dVar10 = (double)FUN_0040c850((double)local_48);
    uVar1 = FUN_0040c770((double)iVar2 * dVar9 + (double)iVar3 * dVar10);
    (**(code **)(*local_40 + 0x88))(local_40,uVar1);
    iVar2 = (**(code **)(*param_1 + 0x60))(param_1);
    dVar9 = (double)FUN_0040c850((double)local_48);
    iVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    dVar10 = (double)FUN_0040c850((double)local_44);
    uVar1 = FUN_0040c770((double)iVar2 * dVar9 + (double)iVar3 * dVar10);
    (**(code **)(*local_40 + 0x70))(local_40,uVar1);
    iVar2 = (**(code **)(*local_40 + 0x60))(local_40);
    iVar3 = (**(code **)(*param_1 + 0x60))(param_1);
    iVar4 = (**(code **)(*param_1 + 0x48))(param_1);
    local_50 = (((float)iVar2 - (float)iVar3 * local_44) + (float)iVar4 * local_48) / 2.0;
    iVar2 = (**(code **)(*local_40 + 0x48))(local_40);
    iVar3 = (**(code **)(*param_1 + 0x60))(param_1);
    iVar4 = (**(code **)(*param_1 + 0x48))(param_1);
    local_4c = ((float)iVar2 - (float)iVar3 * local_48) - (float)iVar4 * local_44;
  }
  local_4c = local_4c / 2.0;
  uVar7 = FUN_00609e10(local_40);
  uVar7 = FUN_005ffa40(uVar7);
  thunk_FUN_03b122c4(uVar7,2);
  uVar7 = FUN_00609e10(local_40);
  uVar7 = FUN_005ffa40(uVar7);
  thunk_FUN_041954cb(uVar7,&local_60);
  uVar7 = FUN_00609e10(local_40);
  uVar7 = FUN_005ffa40(uVar7);
  uVar1 = (**(code **)(*local_40 + 0x60))(local_40);
  uVar5 = (**(code **)(*local_40 + 0x48))(local_40);
  uVar8 = FUN_00609e10(param_1);
  local_a0 = FUN_005ffa40(uVar8);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0xcc0020;
  local_a8 = uVar5;
  thunk_FUN_0415fcd2(uVar7,0,0,uVar1);
  (**(code **)(*param_1 + 0x10))(param_1,local_40);
  FUN_00410f20(local_40);
  return;
}

