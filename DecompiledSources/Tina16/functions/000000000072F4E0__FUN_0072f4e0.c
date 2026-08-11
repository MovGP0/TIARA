/* Ghidra address: 0072f4e0 */
/* Ghidra symbol: FUN_0072f4e0 */


char FUN_0072f4e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  FUN_00417600(&local_10,&DAT_00401390,1);
  FUN_00414b50(&local_10,*param_3);
  local_20[0] = param_2;
  cVar1 = FUN_0072ebb0(param_1,local_20,0,&local_10,0,0);
  if (cVar1 != '\0') {
    FUN_00414ad0(param_3,local_10);
  }
  FUN_00417840(&local_10,&DAT_00401390,1);
  return cVar1;
}

