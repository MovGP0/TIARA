/* Ghidra address: 00d39320 */
/* Ghidra symbol: FUN_00d39320 */


void FUN_00d39320(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  ulonglong uStack_30;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  plVar3 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  uVar1 = FUN_00787fa0(param_1[3]);
  uVar2 = FUN_00787c80(param_1[3]);
  (**(code **)(*plVar3 + 0xe0))(plVar3,uVar1,uVar2);
  uVar4 = FUN_00609e10(plVar3);
  (**(code **)(*param_1 + 0x20))(param_1,uVar4);
  uVar4 = FUN_005ffa40(param_2);
  uVar1 = FUN_004230a0(&local_38);
  uVar2 = FUN_004230c0(&local_38);
  uVar5 = FUN_00609e10(plVar3);
  uVar5 = FUN_005ffa40(uVar5);
  thunk_FUN_0415fcd2(uVar4,local_38 & 0xffffffff,local_38._4_4_,uVar1,uVar2,uVar5,
                     (undefined4)local_38,local_38._4_4_,0xcc0020);
  FUN_00410f20(plVar3);
  return;
}

