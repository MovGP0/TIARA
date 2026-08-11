/* Ghidra address: 018547c0 */
/* Ghidra symbol: FUN_018547c0 */


void FUN_018547c0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_ffffffffffffff90;
  uint uVar4;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  uVar4 = (uint)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x120));
  thunk_FUN_041e8c78(uVar3,*(undefined4 *)(param_1 + 0xec));
  if (*(char *)(param_1 + 0x148) == '\0') {
    uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x120));
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x60))(*(longlong **)(param_1 + 0x130));
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x48))(*(longlong **)(param_1 + 0x130));
    thunk_FUN_03c1ffbb(uVar3,*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xe0),
                       *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xd4),
                       *(undefined8 *)(param_1 + 200),0,0,uVar1,CONCAT44(uVar5,uVar2),
                       CONCAT44(uVar6,0x660046));
  }
  else {
    uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x120));
    thunk_FUN_03cc01a5(uVar3,*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xe0),
                       *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xd4),
                       (ulonglong)uVar4 << 0x20,0,*(undefined4 *)(param_2 + 4),
                       *(undefined4 *)(param_2 + 8),param_3,param_2,*(undefined4 *)(param_1 + 0xd0),
                       0x660046);
  }
  return;
}

