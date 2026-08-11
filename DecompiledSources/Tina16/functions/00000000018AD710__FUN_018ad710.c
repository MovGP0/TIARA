/* Ghidra address: 018ad710 */
/* Ghidra symbol: FUN_018ad710 */


void FUN_018ad710(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [4];
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  uVar1 = FUN_007e8760(&PTR_FUN_007dba80,1,0);
  *(undefined8 *)(param_1 + 0x4d0) = uVar1;
  uVar2 = FUN_0180bfb0();
  uVar2 = FUN_0180a040(uVar2);
  FUN_007e6a70(uVar1,uVar2);
  FUN_0180bfe0(local_30,0x10ea);
  FUN_018ad610(auStack_68,local_30[0],0x21);
  FUN_0180bfe0(&local_38,0x10e8);
  FUN_018ad610(auStack_68,local_38,0x1f);
  FUN_0180bfe0(&local_40,0x10e9);
  FUN_018ad610(auStack_68,local_40,0x20);
  FUN_00414560(&local_40,3);
  return;
}

