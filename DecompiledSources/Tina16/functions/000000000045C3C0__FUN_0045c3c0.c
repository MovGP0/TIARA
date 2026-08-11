/* Ghidra address: 0045c3c0 */
/* Ghidra symbol: FUN_0045c3c0 */


undefined8 FUN_0045c3c0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 local_48 [40];
  undefined8 local_20;
  
  local_20 = FUN_0041e250(&DAT_004045d8,(longlong)((param_3 + 1) * 2));
  FUN_0045bf00(local_48,&local_20,param_2,0xffffffff);
  FUN_0045bf40(param_1,local_48);
  return local_20;
}

