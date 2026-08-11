/* Ghidra address: 01063660 */
/* Ghidra symbol: FUN_01063660 */


void FUN_01063660(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_20 = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00bac3d0(&local_10);
  FUN_0041b840(param_1 + 0x48,local_10);
  cVar1 = FUN_00440a20(local_res10[0],1);
  if (cVar1 == '\0') {
    FUN_0041ddd0(&local_20,PTR_PTR_02005798);
    FUN_00416cd0(&local_18,4,local_20,&DAT_010637a0,*(undefined8 *)PTR_DAT_020049a0,
                 L"\\Vhdl\\MCU\\arduino_boards.xml");
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_18);
    FUN_004134c0(uVar2);
  }
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x170))
            (*(longlong **)(param_1 + 0x48),local_res10[0]);
  FUN_00414560(&local_20,2);
  FUN_0041b800(&local_10);
  FUN_00414480(local_res10);
  return;
}

