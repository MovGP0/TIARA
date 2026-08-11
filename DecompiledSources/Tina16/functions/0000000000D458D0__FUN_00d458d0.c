/* Ghidra address: 00d458d0 */
/* Ghidra symbol: FUN_00d458d0 */


void FUN_00d458d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong in_stack_ffffffffffffff88;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar8;
  undefined8 local_50 [2];
  undefined1 *local_40;
  undefined1 local_34 [16];
  undefined1 local_24 [12];
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  local_50[0] = 0;
  FUN_00787be0(*(undefined8 *)(param_1 + 0x18),local_34);
  uVar3 = FUN_005ffa40(param_2);
  iVar1 = thunk_FUN_0416b813(uVar3);
  if (iVar1 == 1) {
    plVar4 = (longlong *)FUN_00781840();
    (**(code **)(*plVar4 + 200))(plVar4,local_24,0x10);
    uVar5 = FUN_00781840();
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar6 = FUN_005ffa40(param_2);
    local_40 = local_24;
    uVar8 = 0;
    FUN_00778e90(uVar5,uVar3,uVar6,local_40,in_stack_ffffffffffffff88 & 0xffffffffffffff00,0);
    FUN_005fdcb0(param_2[0x10],1);
  }
  else {
    uVar3 = FUN_00781840();
    uVar2 = FUN_00779380(uVar3,0x1d);
    FUN_005fdab0(param_2[0x10],uVar2);
    (**(code **)(*param_2 + 0xa8))(param_2,local_34);
  }
  plVar4 = (longlong *)FUN_00781840();
  uVar7 = FUN_00787c60(*(undefined8 *)(param_1 + 0x18));
  (**(code **)(*plVar4 + 0x1e8))(plVar4,local_24,(&DAT_01ecd3ca)[uVar7 & 0xff]);
  uVar3 = FUN_00787d90(*(undefined8 *)(param_1 + 0x18));
  FUN_005ff880(param_2,uVar3);
  uVar3 = FUN_005ffa40(param_2);
  FUN_00787f40(*(undefined8 *)(param_1 + 0x18),local_50);
  uVar2 = FUN_00d457a0(param_1);
  FUN_00788830(param_1,uVar3,local_24,local_50[0],local_34,CONCAT44(uVar8,uVar2));
  FUN_00414480(local_50);
  return;
}

