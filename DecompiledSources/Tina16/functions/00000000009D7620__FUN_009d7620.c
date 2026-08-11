/* Ghidra address: 009d7620 */
/* Ghidra symbol: FUN_009d7620 */


undefined4 FUN_009d7620(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_20 = 0;
  *param_4 = 0;
  FUN_009d71d0(param_1);
  FUN_004168e0(&local_18,param_2);
  FUN_004168e0(&local_20,param_3);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))
                    (*(longlong **)(param_1 + 0x18),local_18,local_20);
  FUN_009d3370(param_4,uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x20),0);
  local_10 = 0;
  FUN_004145c0(&local_20,2);
  return local_10;
}

