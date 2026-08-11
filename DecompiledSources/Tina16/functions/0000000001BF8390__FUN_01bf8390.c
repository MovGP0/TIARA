/* Ghidra address: 01bf8390 */
/* Ghidra symbol: FUN_01bf8390 */


undefined4 FUN_01bf8390(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_004b3cf0(param_1,&local_10,param_2);
  FUN_004b3cf0(param_1,&local_18,param_3);
  uVar1 = FUN_0043e6d0(local_10,local_18);
  FUN_00414560(&local_18,2);
  return uVar1;
}

