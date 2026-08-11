/* Ghidra address: 009d53e0 */
/* Ghidra symbol: FUN_009d53e0 */


undefined4 FUN_009d53e0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x100))(*(longlong **)(param_1 + 0x18));
    if (lVar1 != 0) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x100))(*(longlong **)(param_1 + 0x18))
      ;
      FUN_009d3690(&local_18,uVar2,param_1);
      FUN_0041b840(param_1 + 0x30,local_18);
    }
  }
  FUN_0041b840(param_2,*(undefined8 *)(param_1 + 0x30));
  local_10 = 0;
  FUN_0041b800(&local_18);
  return local_10;
}

