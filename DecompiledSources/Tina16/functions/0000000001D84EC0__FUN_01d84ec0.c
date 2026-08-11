/* Ghidra address: 01d84ec0 */
/* Ghidra symbol: FUN_01d84ec0 */


undefined8 FUN_01d84ec0(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  uVar1 = (**(code **)(*param_2 + 0x48))(param_2,0xffffffff,&local_10,0,0,0);
  FUN_006245b0(uVar1);
  FUN_004168b0(param_1,local_10);
  FUN_00414520(&local_10);
  return param_1;
}

