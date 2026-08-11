/* Ghidra address: 00a47530 */
/* Ghidra symbol: FUN_00a47530 */


void FUN_00a47530(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)*param_1)(param_1);
  uVar1 = (**(code **)(*param_1 + 0x38))(param_1,uVar1,param_2,param_3);
  uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1,uVar2,param_2,param_3);
  FUN_00a47ee0(&PTR_FUN_00a432a0,1,uVar1,uVar2,(char)param_1[2],1,1);
  return;
}

