/* Ghidra address: 00dd9e70 */
/* Ghidra symbol: FUN_00dd9e70 */


undefined8 FUN_00dd9e70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = *param_1;
  uVar1 = thunk_FUN_040ef593(0);
  thunk_FUN_03b0d54a(uVar1,3);
  local_28._4_4_ = (int)((ulonglong)local_20 >> 0x20);
  local_28 = CONCAT44(-local_28._4_4_,(int)local_20);
  thunk_FUN_0416674c(uVar1,&local_28,1);
  thunk_FUN_041a9b5c(0,uVar1);
  return local_28;
}

