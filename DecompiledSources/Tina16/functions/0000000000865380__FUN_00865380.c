/* Ghidra address: 00865380 */
/* Ghidra symbol: FUN_00865380 */


undefined4 FUN_00865380(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_18 [4];
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x58))
                    (*(longlong **)(param_1 + 0x18),local_18);
  FUN_0041d630(uVar1);
  *param_2 = local_18[0];
  return 0;
}

