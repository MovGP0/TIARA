/* Ghidra address: 0045c420 */
/* Ghidra symbol: FUN_0045c420 */


undefined8 FUN_0045c420(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  FUN_00414b50(&local_18,param_2);
  local_10 = FUN_0041ed00(&DAT_004045d8,&local_18);
  FUN_0045bd80(local_38,&local_10);
  FUN_0045bf40(param_1,local_38);
  FUN_00414480(&local_18);
  return local_10;
}

