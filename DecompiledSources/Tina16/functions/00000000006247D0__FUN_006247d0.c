/* Ghidra address: 006247d0 */
/* Ghidra symbol: FUN_006247d0 */


undefined8 FUN_006247d0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_50 [5];
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_88;
  local_28 = 0;
  local_50[0] = 0;
  local_68 = FUN_0041b800(param_1);
  uVar1 = thunk_FUN_041d73d1(param_2,0,5,&DAT_00624918);
  FUN_006245b0(uVar1);
  FUN_00414480(local_50);
  FUN_00414480(&local_28);
  return param_1;
}

