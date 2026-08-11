/* Ghidra address: 0109f660 */
/* Ghidra symbol: FUN_0109f660 */


void FUN_0109f660(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = FUN_006d5120(*(undefined8 *)(param_1 + 0x878));
  (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x18))
            (*(longlong **)(param_1 + 0x9d8),local_20,uVar1);
  FUN_0109ce70(param_1,local_20[0],0);
  FUN_00414480(local_20);
  return;
}

