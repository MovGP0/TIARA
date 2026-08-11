/* Ghidra address: 00624b70 */
/* Ghidra symbol: FUN_00624b70 */


undefined8 FUN_00624b70(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_20 [24];
  
  local_30 = auStack_88;
  local_38 = 0;
  FUN_00624610(local_20,param_2);
  local_68 = FUN_0041b800(param_1);
  uVar1 = thunk_FUN_041d73d1(local_20,0,5,&DAT_00624c98);
  FUN_006245b0(uVar1);
  FUN_00414480(&local_38);
  return param_1;
}

