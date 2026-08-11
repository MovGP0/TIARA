/* Ghidra address: 00a329f0 */
/* Ghidra symbol: FUN_00a329f0 */


void FUN_00a329f0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 ulonglong *param_5,undefined4 param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar16;
  undefined8 uVar15;
  undefined8 in_stack_ffffffffffffff30;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar13 = (uint)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
  uVar1 = *param_5;
  uVar2 = param_5[1];
  uVar5 = thunk_FUN_04137b5f(param_1);
  uVar6 = thunk_FUN_041525f6(param_1,param_3,4,param_2,param_4,(ulonglong)uVar13 << 0x20);
  uVar6 = thunk_FUN_041a19a1(uVar5,uVar6);
  uVar13 = (int)*(uint *)(param_3 + 4) >> 0x1f;
  iVar3 = (*(uint *)(param_3 + 4) ^ uVar13) - uVar13;
  uVar13 = (int)*(uint *)(param_3 + 8) >> 0x1f;
  iVar14 = (*(uint *)(param_3 + 8) ^ uVar13) - uVar13;
  local_30 = (int)uVar2;
  local_38 = (int)uVar1;
  local_30 = local_30 - local_38;
  local_2c = (int)(uVar2 >> 0x20);
  local_34 = (int)(uVar1 >> 0x20);
  local_2c = local_2c - local_34;
  uVar7 = thunk_FUN_04137b5f(param_1);
  uVar8 = thunk_FUN_04137b5f(param_1);
  uVar9 = thunk_FUN_04137b5f(param_1);
  uVar10 = thunk_FUN_03c9ff5e(local_30,local_2c,1,1,0);
  uVar16 = 0;
  uVar11 = thunk_FUN_03c9ff5e(local_30,local_2c,1,1,0);
  uVar12 = thunk_FUN_04181813(param_1,local_30,local_2c);
  uVar10 = thunk_FUN_041a19a1(uVar7,uVar10);
  uVar11 = thunk_FUN_041a19a1(uVar8,uVar11);
  uVar12 = thunk_FUN_041a19a1(uVar9,uVar12);
  uVar4 = thunk_FUN_03e3a7dc(uVar5,param_6);
  uVar15 = CONCAT44(uVar16,local_2c);
  thunk_FUN_03c1ffbb(uVar8,0,0,local_30,uVar15,uVar5,0,0,iVar3,iVar14,0xcc0020);
  uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
  thunk_FUN_03e3a7dc(uVar5,uVar4);
  thunk_FUN_0415fcd2(uVar7,0,0,local_30,CONCAT44(uVar16,local_2c),uVar8,0,0,0x330008);
  thunk_FUN_0415fcd2(uVar9,0,0,local_30,local_2c,param_1,local_38,local_34,0xcc0020);
  thunk_FUN_0415fcd2(uVar9,0,0,local_30,local_2c,uVar8,0,0,0x8800c6);
  thunk_FUN_03c1ffbb(uVar5,0,0,iVar3,iVar14,uVar7,0,0,local_30,local_2c,0x8800c6);
  thunk_FUN_03c1ffbb(uVar9,0,0,local_30,local_2c,uVar5,0,0,iVar3,iVar14,0xee0086);
  thunk_FUN_0415fcd2(param_1,uVar1 & 0xffffffff,local_34,local_30,local_2c,uVar9,0,0,0xcc0020);
  uVar10 = thunk_FUN_041a19a1(uVar7,uVar10);
  thunk_FUN_0416f828(uVar10);
  uVar10 = thunk_FUN_041a19a1(uVar8,uVar11);
  thunk_FUN_0416f828(uVar10);
  uVar10 = thunk_FUN_041a19a1(uVar9,uVar12);
  thunk_FUN_0416f828(uVar10);
  uVar6 = thunk_FUN_041a19a1(uVar5,uVar6);
  thunk_FUN_0416f828(uVar6);
  thunk_FUN_041a2fd8(uVar9);
  thunk_FUN_041a2fd8(uVar7);
  thunk_FUN_041a2fd8(uVar8);
  thunk_FUN_041a2fd8(uVar5);
  return;
}

