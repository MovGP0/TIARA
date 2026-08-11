/* Ghidra address: 00d3ce10 */
/* Ghidra symbol: FUN_00d3ce10 */


int FUN_00d3ce10(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_var;
  undefined1 local_44 [16];
  undefined1 local_34 [8];
  int local_2c;
  int local_28;
  
  FUN_00d3cb70(param_1,local_34);
  FUN_00d3c920(param_1,local_44);
  uVar1 = FUN_004230c0(local_44);
  iVar2 = thunk_FUN_03f3ed25(param_2,uVar1,local_28 - local_2c);
  FUN_00d3c3b0(param_1);
  return iVar2 + extraout_var;
}

