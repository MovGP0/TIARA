/* Ghidra address: 00d2fec0 */
/* Ghidra symbol: FUN_00d2fec0 */


undefined8 FUN_00d2fec0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_30 [2];
  undefined4 local_1c [3];
  
  local_30[0] = 0;
  local_1c[0] = 0xff;
  uVar2 = FUN_00442b60(0xff);
  thunk_FUN_04179f25(uVar2,local_1c);
  FUN_00415460(param_1,uVar2,0);
  FUN_00442c30(uVar2);
  uVar2 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_005ea670(uVar2,0xffffffff80000002);
  cVar1 = FUN_005eaa60(uVar2,L"\\SYSTEM\\CurrentControlSet\\Control\\ComputerName\\ComputerName");
  if (cVar1 != '\0') {
    cVar1 = FUN_005ebec0(uVar2,L"ComputerName");
    if (cVar1 != '\0') {
      FUN_005eb6d0(uVar2,local_30,L"ComputerName");
      FUN_00415dd0(param_1,local_30[0],0);
    }
    FUN_005ea630(uVar2);
  }
  FUN_00410f20(uVar2);
  FUN_00414480(local_30);
  return param_1;
}

