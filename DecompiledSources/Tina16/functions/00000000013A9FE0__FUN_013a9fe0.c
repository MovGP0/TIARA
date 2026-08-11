/* Ghidra address: 013a9fe0 */
/* Ghidra symbol: FUN_013a9fe0 */


void FUN_013a9fe0(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  DAT_02108358 = 0;
  DAT_02108359 = 0;
  FUN_00416cd0(&DAT_02108360,3,*(undefined8 *)PTR_DAT_020049a0,L"\\Vhdl\\",L"HDLDist");
  FUN_00416ba0(&DAT_02108368,DAT_02108360,L"\\SystemVerilog");
  FUN_00416cd0(&DAT_02108370,3,DAT_02108368,&DAT_013aa1fc,L"VerilatorDist");
  FUN_00416cd0(&DAT_02108378,3,DAT_02108360,&DAT_013aa1fc,L"SystemC");
  FUN_00416cd0(&DAT_02108380,3,DAT_02108378,&DAT_013aa1fc,L"systemc-2.3.2");
  FUN_00416ba0(local_20,DAT_02108380,L"\\src\\systemc.h");
  bVar1 = FUN_00440a20(local_20[0],1);
  FUN_00416ba0(&local_28,DAT_02108370,L"\\include\\verilated.h");
  bVar2 = FUN_00440a20(local_28,1);
  if ((bVar2 & bVar1) != 0) {
    cVar3 = FUN_00440b00(DAT_02108370,1);
    if (cVar3 != '\0') {
      cVar3 = FUN_00440b00(DAT_02108378,1);
      if (cVar3 != '\0') {
        DAT_02108358 = 1;
        goto LAB_013aa147;
      }
    }
  }
  DAT_02108358 = 0;
LAB_013aa147:
  DAT_02108359 = bVar1;
  FUN_00414560(&local_28,2);
  return;
}

