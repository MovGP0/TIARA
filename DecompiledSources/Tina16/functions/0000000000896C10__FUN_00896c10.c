/* Ghidra address: 00896c10 */
/* Ghidra symbol: FUN_00896c10 */


undefined8 FUN_00896c10(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  
  local_20 = auStack_48;
  local_18 = FUN_0089b770(&PTR_FUN_00892dd8,1);
  FUN_0089b8c0(param_1);
  FUN_00896af0(local_18,param_1 + 0x10);
  FUN_0089b920(param_1);
  return local_18;
}

