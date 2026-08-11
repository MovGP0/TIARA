/* Ghidra address: 0045c170 */
/* Ghidra symbol: FUN_0045c170 */


undefined8 FUN_0045c170(undefined8 param_1)

{
  undefined1 local_48 [40];
  undefined8 local_20 [2];
  
  local_20[0] = FUN_0041ef50(&DAT_004045d8);
  FUN_0045bde0(local_48,local_20);
  FUN_0045bf40(param_1,local_48);
  return local_20[0];
}

