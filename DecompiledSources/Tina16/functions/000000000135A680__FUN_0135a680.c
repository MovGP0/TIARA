/* Ghidra address: 0135a680 */
/* Ghidra symbol: FUN_0135a680 */


int FUN_0135a680(longlong param_1)

{
  longlong lVar1;
  int local_24;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_24 = -1;
  do {
    local_24 = local_24 + 1;
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x18))
              (*(longlong **)(param_1 + 0x68),local_20,local_24);
    lVar1 = FUN_019ac500(*(undefined8 *)(param_1 + 200),local_20[0]);
  } while (lVar1 == 0);
  FUN_00414480(local_20);
  return local_24;
}

