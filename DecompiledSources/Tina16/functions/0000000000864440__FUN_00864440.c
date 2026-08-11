/* Ghidra address: 00864440 */
/* Ghidra symbol: FUN_00864440 */


undefined4 FUN_00864440(longlong param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined2 local_18 [8];
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))
                    (*(longlong **)(param_1 + 0x18),local_18);
  FUN_0041d630(uVar1);
  *param_2 = local_18[0];
  return 0;
}

