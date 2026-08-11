/* Ghidra address: 01a531c0 */
/* Ghidra symbol: FUN_01a531c0 */


void FUN_01a531c0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_00416ba0(&local_18,*(undefined8 *)PTR_DAT_020049a0,L"\\Vhdl\\aiprompts\\");
  FUN_00416ba0(&local_10,local_18,L"Default.json");
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 == '\0') {
    FUN_00414b50(&local_20,L"Missing aiprompts!");
    FUN_01a3e1c0(param_1,local_20);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_20);
    FUN_004134c0(uVar2);
  }
  FUN_00414560(&local_20,3);
  return;
}

