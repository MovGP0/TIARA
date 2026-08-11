/* Ghidra address: 017f43b0 */
/* Ghidra symbol: FUN_017f43b0 */


undefined8 FUN_017f43b0(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_017f3fa0(*(undefined8 *)(param_1 + 0x90),
                       (longlong)param_4 %
                       (longlong)(*(int *)(*(longlong *)(param_1 + 0x90) + 8) + -1) & 0xffffffff);
  uVar2 = FUN_017f3fa0(*(undefined8 *)(param_1 + 0x98),
                       (longlong)param_3 %
                       (longlong)(*(int *)(*(longlong *)(param_1 + 0x98) + 8) + -1) & 0xffffffff);
  uVar3 = FUN_017f3fa0(*(undefined8 *)(param_1 + 0x90),
                       param_4 % (*(int *)(*(longlong *)(param_1 + 0x90) + 8) + -1) + 1);
  uVar4 = FUN_017f3fa0(*(undefined8 *)(param_1 + 0x98),
                       param_3 % (*(int *)(*(longlong *)(param_1 + 0x98) + 8) + -1) + 1);
  FUN_00b956d0(param_2,uVar1,uVar2,uVar3,uVar4);
  return param_2;
}

