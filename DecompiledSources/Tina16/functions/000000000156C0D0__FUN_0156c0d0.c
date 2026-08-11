/* Ghidra address: 0156c0d0 */
/* Ghidra symbol: FUN_0156c0d0 */


void FUN_0156c0d0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_648;
  undefined8 local_640 [2];
  undefined1 local_62b [513];
  undefined1 local_42a [1026];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_648 = 0;
  local_640[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  FUN_00414b50(local_20,*(undefined8 *)(param_2 + 0xe48));
  FUN_004414c0(local_640,local_20[0],L".hex");
  FUN_00415dd0(&local_28,local_640[0],0);
  uVar1 = *(uint *)(param_2 + 0xe50);
  uVar4 = FUN_00442620(local_42a,local_20[0]);
  iVar3 = _InitSystemCSimulation(param_3,uVar4,*(undefined4 *)(param_1 + 0x7e8));
  if (iVar3 != 0) {
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L"systemc: dll load error or some fn. not found");
    FUN_004134c0(uVar4);
  }
  iVar3 = _SC_Get_Version(param_3);
  if (iVar3 != 1) {
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L"SystemC model dll version mismatch");
    FUN_004134c0(uVar4);
  }
  _SC_Set_Analysis_Mode(param_3,param_4);
  if ((uVar1 & 0x800) != 0) {
    FUN_00416880(&local_648,local_28);
    cVar2 = FUN_00440a20(local_648,1);
    if (cVar2 == '\0') {
      uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L"systemc: HEX file not not found");
      FUN_004134c0(uVar4);
    }
    uVar4 = FUN_004425e0(local_62b,local_28);
    _SC_Set_MCU_Data(param_3,uVar4,*(undefined8 *)(param_2 + 0xe58));
  }
  if ((*(uint *)(param_1 + 0x7e8) & 4) != 0) {
    _LoadSystemCCircuit(param_3);
  }
  FUN_0156b160(param_1,param_3);
  FUN_00414560(&local_648,2);
  FUN_004144d0(&local_28);
  FUN_00414480(local_20);
  return;
}

