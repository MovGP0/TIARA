/* Ghidra address: 01569d70 */
/* Ghidra symbol: FUN_01569d70 */


undefined8 FUN_01569d70(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xa30) + 0x28))(*(longlong **)(param_1 + 0xa30));
  FUN_00414480(&local_30);
  if (0 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0xa38) + 0x18))
              (*(longlong **)(param_1 + 0xa38),local_40,0);
    FUN_0043e1a0(local_20,local_40[0]);
    (**(code **)(**(longlong **)(param_1 + 0xa30) + 0x18))
              (*(longlong **)(param_1 + 0xa30),&local_48,0);
    FUN_0043e1a0(&local_28,local_48);
    FUN_00416cd0(&local_30,4,*(undefined8 *)(param_1 + 0x790),L"flash_rom_",local_20[0],L".elf");
  }
  FUN_00414ad0(param_2,local_30);
  FUN_00414560(&local_48,2);
  FUN_00414560(&local_30,3);
  return param_2;
}

