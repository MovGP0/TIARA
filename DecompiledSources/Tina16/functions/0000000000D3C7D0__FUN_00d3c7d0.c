/* Ghidra address: 00d3c7d0 */
/* Ghidra symbol: FUN_00d3c7d0 */


int FUN_00d3c7d0(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_44 [16];
  undefined1 local_34 [8];
  int local_2c;
  int local_28;
  
  FUN_00d3c440(param_1,local_34);
  FUN_00d3c8b0(param_1,local_44);
  uVar1 = FUN_004230a0(local_44);
  iVar2 = thunk_FUN_03f3ed25(param_2,uVar1,local_28 - local_2c);
  iVar3 = FUN_00d3c3b0(param_1);
  return iVar2 + iVar3;
}

