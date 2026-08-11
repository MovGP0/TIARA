/* Ghidra address: 015ca620 */
/* Ghidra symbol: FUN_015ca620 */


undefined8 FUN_015ca620(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined *local_30;
  undefined1 *local_20;
  undefined2 local_12;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_10 = 0;
  local_12 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  FUN_00414480(&local_10);
  local_38 = CONCAT44(local_38._4_4_,2);
  local_30 = PTR_DAT_02004830;
  FUN_00448510(&local_10,0x401bb851eb851eb8,2,3);
  local_38 = *(undefined8 *)PTR_DAT_02002868;
  FUN_00416cd0(param_2,3,local_10,&LAB_015ca744);
  FUN_00414480(&local_10);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_12;
  FUN_00414480(&local_10);
  return param_2;
}

