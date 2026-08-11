/* Ghidra address: 01860740 */
/* Ghidra symbol: FUN_01860740 */


void FUN_01860740(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_38 [16];
  
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00498370(local_38,0,0,uVar1,uVar2);
  FUN_018607a0(param_1,param_2,param_3,local_38);
  return;
}

