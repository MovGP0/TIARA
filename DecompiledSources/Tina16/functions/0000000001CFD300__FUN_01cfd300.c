/* Ghidra address: 01cfd300 */
/* Ghidra symbol: FUN_01cfd300 */


undefined1 FUN_01cfd300(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined2 local_4a [12];
  undefined8 local_31;
  undefined2 local_29 [12];
  undefined8 local_10;
  
  FUN_00417580(local_29,&DAT_01d36af8);
  FUN_00417580(local_4a,&DAT_01d36af8);
  local_4a[0] = *(undefined2 *)(param_1 + 0xba);
  local_31 = param_3;
  local_29[0] = local_4a[0];
  local_10 = param_2;
  uVar1 = FUN_01d39670(local_29,local_4a);
  FUN_00417840(local_4a,&DAT_01d36af8,2);
  return uVar1;
}

