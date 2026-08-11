/* Ghidra address: 014f94c0 */
/* Ghidra symbol: FUN_014f94c0 */


void FUN_014f94c0(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = *param_3;
  uVar1 = FUN_014f9400(&DAT_014f8ab8,CONCAT71((int7)((ulonglong)local_20[0] >> 8),1) & 0xffffffff,
                       param_2,local_20);
  (**(code **)(*param_1 + 0x50))(param_1,uVar1);
  return;
}

