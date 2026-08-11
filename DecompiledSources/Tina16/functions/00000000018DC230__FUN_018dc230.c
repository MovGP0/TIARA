/* Ghidra address: 018dc230 */
/* Ghidra symbol: FUN_018dc230 */


undefined4 FUN_018dc230(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined4 local_48 [16];
  
  local_50 = auStack_78;
  uVar1 = FUN_005ffa40(param_2);
  thunk_FUN_04172119(uVar1,local_48);
  return local_48[0];
}

