/* Ghidra address: 00dcf740 */
/* Ghidra symbol: FUN_00dcf740 */


void FUN_00dcf740(longlong param_1,undefined8 param_2,undefined1 param_3,longlong param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 *local_40;
  
  local_40 = auStack_78;
  puVar1 = auStack_78;
  if (param_4 != 0) {
    FUN_004134c0(param_4);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  local_58 = 1;
  FUN_00dfb1d0(param_1,param_3,param_2,1);
  FUN_017da6e0(*(undefined8 *)(param_1 + 0xd8));
  return;
}

