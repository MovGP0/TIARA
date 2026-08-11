/* Ghidra address: 00864c60 */
/* Ghidra symbol: FUN_00864c60 */


undefined4 FUN_00864c60(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  FUN_004168e0(&local_18,param_2);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xd8))
                    (*(longlong **)(param_1 + 0x18),local_18);
  FUN_0041d630(uVar1);
  local_10 = 0;
  FUN_00414520(&local_18);
  return local_10;
}

