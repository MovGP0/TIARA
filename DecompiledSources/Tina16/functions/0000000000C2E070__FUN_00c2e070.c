/* Ghidra address: 00c2e070 */
/* Ghidra symbol: FUN_00c2e070 */


undefined1 FUN_00c2e070(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_20 [2];
  char local_a;
  undefined1 local_9;
  
  local_20[0] = 0;
  FUN_00c1a3e0(param_2,&local_a,2);
  if (local_a != '!') {
    FUN_0041ddd0(local_20,PTR_PTR_02001490);
    FUN_00c1a320(local_20[0]);
  }
  FUN_00414480(local_20);
  return local_9;
}

