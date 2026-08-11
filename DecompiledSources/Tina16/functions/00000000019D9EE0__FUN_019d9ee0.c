/* Ghidra address: 019d9ee0 */
/* Ghidra symbol: FUN_019d9ee0 */


undefined8 FUN_019d9ee0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00450070(&local_10,local_res10[0],&DAT_019da018,L"$$NL$$",1);
  FUN_00414b50(local_res10,local_10);
  FUN_00450070(&local_18,local_res10[0],&LAB_019da048,&DAT_019da018,1);
  FUN_00414b50(local_res10,local_18);
  FUN_00450070(&local_20,local_res10[0],L"$$NL$$",&DAT_019da018,1);
  FUN_00414b50(local_res10,local_20);
  FUN_00414ad0(param_1,local_res10[0]);
  FUN_00414560(&local_20,3);
  FUN_00414480(local_res10);
  return param_1;
}

