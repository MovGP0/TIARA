/* Ghidra address: 00c7b9b0 */
/* Ghidra symbol: FUN_00c7b9b0 */


undefined1 FUN_00c7b9b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_19;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_18 = FUN_004ba3c0(&PTR_FUN_0047d288,1,param_1);
  local_19 = FUN_00c7b8b0(local_18,param_2);
  uVar1 = local_18;
  local_10 = local_18;
  local_18 = 0;
  FUN_00410f20(uVar1);
  return local_19;
}

