/* Ghidra address: 00452dc0 */
/* Ghidra symbol: FUN_00452dc0 */


undefined8 FUN_00452dc0(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined4 local_c;
  
  local_20 = auStack_48;
  local_c = thunk_FUN_04118f82(param_2);
  uVar1 = FUN_00416740(param_1);
  local_18 = thunk_FUN_04163be6(uVar1);
  thunk_FUN_04118f82(local_c);
  return local_18;
}

