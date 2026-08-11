/* Ghidra address: 009d54d0 */
/* Ghidra symbol: FUN_009d54d0 */


undefined4 FUN_009d54d0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x110))(*(longlong **)(param_1 + 0x18));
    FUN_009d35f0(&local_18,uVar1,param_1);
    FUN_0041b840(param_1 + 0x28,local_18);
  }
  FUN_0041b840(param_2,*(undefined8 *)(param_1 + 0x28));
  local_10 = 0;
  FUN_0041b800(&local_18);
  return local_10;
}

