/* Ghidra address: 00536420 */
/* Ghidra symbol: FUN_00536420 */


longlong FUN_00536420(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00536090(param_1,&DAT_00401390);
  lVar1 = FUN_00535cd0(&DAT_005358f8,1,local_res10,8,&DAT_00401390);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x30;
  }
  FUN_0041b840(param_1 + 8,lVar1);
  return param_1;
}

