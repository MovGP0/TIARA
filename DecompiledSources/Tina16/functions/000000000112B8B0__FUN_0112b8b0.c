/* Ghidra address: 0112b8b0 */
/* Ghidra symbol: FUN_0112b8b0 */


longlong FUN_0112b8b0(longlong param_1,undefined8 param_2)

{
  ushort local_2a [13];
  
  FUN_00448e20(param_2,param_1,param_1 + 2,param_1 + 4);
  FUN_00448ad0(param_2,param_1 + 6,param_1 + 8,param_1 + 10,local_2a);
  *(uint *)(param_1 + 0xc) = (uint)local_2a[0];
  return param_1;
}

