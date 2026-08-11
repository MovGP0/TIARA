/* Ghidra address: 00d4ab50 */
/* Ghidra symbol: FUN_00d4ab50 */


void FUN_00d4ab50(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar7;
  undefined1 local_48 [20];
  undefined1 local_34 [4];
  undefined4 local_30;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar5 = FUN_005ffa40(param_2);
  iVar1 = FUN_00787fa0(*(undefined8 *)(param_1 + 0x18));
  iVar2 = FUN_00787c80(*(undefined8 *)(param_1 + 0x18));
  uVar6 = CONCAT44(uVar3,iVar2 + -2);
  thunk_FUN_041a27b3(uVar5,2,2,iVar1 + -2,uVar6);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar5 = FUN_00781840();
  uVar3 = FUN_00778bd0(uVar5,0xff00000f,0);
  FUN_005fdab0(param_2[0x10],uVar3);
  uVar3 = FUN_00787fa0(*(undefined8 *)(param_1 + 0x18));
  uVar4 = FUN_00787c80(*(undefined8 *)(param_1 + 0x18));
  uVar5 = CONCAT44(uVar7,uVar4);
  FUN_004238d0(local_48,0,0,uVar3,uVar5);
  uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
  (**(code **)(*param_2 + 0xa8))(param_2,local_48);
  local_34[0] = 0x1a;
  local_30 = 0;
  uVar5 = FUN_00781840();
  uVar6 = FUN_005ffa40(param_2);
  uVar3 = FUN_00787fa0(*(undefined8 *)(param_1 + 0x18));
  uVar4 = FUN_00787c80(*(undefined8 *)(param_1 + 0x18));
  FUN_004238d0(local_48,0,0,uVar3,CONCAT44(uVar7,uVar4));
  FUN_00778dc0(uVar5,uVar6,local_34,local_48,0,0);
  return;
}

