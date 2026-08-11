/* Ghidra address: 017ad670 */
/* Ghidra symbol: FUN_017ad670 */


undefined8 FUN_017ad670(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_14 = (int)((ulonglong)*param_2 >> 0x20);
  local_18 = (int)*param_2;
  uStack_c = (int)((ulonglong)*param_1 >> 0x20);
  local_10 = (int)*param_1;
  uVar1 = FUN_00498310((uStack_c - uStack_14) + local_18,uStack_14 - (local_10 - local_18));
  return uVar1;
}

