/* Ghidra address: 01569f00 */
/* Ghidra symbol: FUN_01569f00 */


undefined8 FUN_01569f00(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_58 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xa30) + 0x28))(*(longlong **)(param_1 + 0xa30));
  FUN_00414480(&local_48);
  iVar2 = 0;
  iVar3 = iVar1;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0xa38) + 0x18))
                (*(longlong **)(param_1 + 0xa38),&local_50,iVar2);
      FUN_0043e1a0(&local_30,local_50);
      (**(code **)(**(longlong **)(param_1 + 0xa30) + 0x18))
                (*(longlong **)(param_1 + 0xa30),&local_58,iVar2);
      FUN_0043e1a0(&local_38,local_58);
      FUN_00416cd0(&local_40,3,L"flash_rom_",local_30,L".elf");
      FUN_00416ad0(&local_48,local_40);
      if (iVar2 < iVar1 + -1) {
        FUN_00416ad0(&local_48,&LAB_0156a0c4);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414ad0(param_2,local_48);
  FUN_00414560(&local_58,6);
  return param_2;
}

