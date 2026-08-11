/* Ghidra address: 00d58940 */
/* Ghidra symbol: FUN_00d58940 */


void FUN_00d58940(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_38 [16];
  
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_004238d0(local_38,0,0,uVar1,uVar2);
  FUN_00d589a0(param_1,param_2,param_3,local_38);
  return;
}

