/* Ghidra address: 00d58810 */
/* Ghidra symbol: FUN_00d58810 */


void FUN_00d58810(longlong *param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_004238d0(local_38,param_3,param_4,param_3 + iVar1,param_4 + iVar2);
  uVar3 = (**(code **)(*param_1 + 0x60))(param_1);
  uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_004238d0(local_48,0,0,uVar3,uVar4);
  FUN_00d589a0(param_1,param_2,local_38,local_48);
  return;
}

