/* Ghidra address: 00cbd120 */
/* Ghidra symbol: FUN_00cbd120 */


undefined2 FUN_00cbd120(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_0041b910(param_4);
  (**(code **)(*param_1 + 0x108))(param_1,local_res20);
  uVar2 = FUN_00cbaf90(param_1[0x21]);
  uVar1 = (**(code **)(*param_1 + 0xe0))(param_1,uVar2,param_2,param_3);
  FUN_0041b800(&local_res20);
  return uVar1;
}

