/* Ghidra address: 00863fa0 */
/* Ghidra symbol: FUN_00863fa0 */


undefined4 FUN_00863fa0(longlong param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined2 local_18 [8];
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))
                    (*(longlong **)(param_1 + 0x18),local_18);
  FUN_0041d630(uVar1);
  *param_2 = local_18[0];
  return 0;
}

