/* Ghidra address: 018a57b0 */
/* Ghidra symbol: FUN_018a57b0 */


void FUN_018a57b0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar6;
  undefined1 local_38 [24];
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  iVar1 = *(int *)(param_1 + 0x4a0);
  iVar2 = *(int *)(param_1 + 0x51c);
  *(int *)(param_1 + 0x51c) = iVar1;
  uVar3 = FUN_0064d0b0(param_1);
  uVar4 = FUN_0064d120(param_1);
  FUN_00498350(local_38,0,0,uVar3,CONCAT44(uVar6,uVar4));
  uVar5 = FUN_0065b870(param_1);
  thunk_FUN_041d5f23(uVar5,iVar2 - iVar1,0,local_38,local_38,0,0,6);
  return;
}

