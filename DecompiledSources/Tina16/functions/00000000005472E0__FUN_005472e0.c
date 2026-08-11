/* Ghidra address: 005472e0 */
/* Ghidra symbol: FUN_005472e0 */


bool FUN_005472e0(longlong param_1)

{
  bool bVar1;
  longlong local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
            (*(longlong **)(param_1 + 0x18),local_20,param_1);
  bVar1 = local_20[0] != 0;
  FUN_00414480(local_20);
  return bVar1;
}

