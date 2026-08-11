/* Ghidra address: 018a74f0 */
/* Ghidra symbol: FUN_018a74f0 */


void FUN_018a74f0(longlong param_1,undefined1 param_2,undefined2 param_3,int param_4,int param_5,
                 longlong param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined2 in_stack_ffffffffffffffa0;
  undefined1 uVar4;
  int local_38;
  int local_34;
  
  uVar4 = (undefined1)((ushort)in_stack_ffffffffffffffa0 >> 8);
  *(undefined2 *)(param_6 + 9) = *(undefined2 *)(param_1 + 0x4f0);
  uVar1 = FUN_018a51c0(*(undefined8 *)(param_1 + 0x528),*(int *)(param_1 + 0x520) + param_5,
                       *(int *)(param_1 + 0x51c) + param_4);
  uVar2 = FUN_0064d0b0(param_1);
  FUN_018a5310(*(undefined8 *)(param_1 + 0x528),&local_38,uVar1,uVar2,
               *(undefined8 *)(param_1 + 0x548),CONCAT11(uVar4,*(undefined1 *)(param_1 + 0x550)));
  plVar3 = (longlong *)FUN_018a73a0(param_1);
  (**(code **)(*plVar3 + 0x120))
            (plVar3,uVar1,param_4,param_5,param_2,param_3,*(undefined8 *)(param_1 + 0x548),
             (double)(local_38 - *(int *)(param_1 + 0x51c)),
             (double)(local_34 - *(int *)(param_1 + 0x520)),param_6);
  return;
}

