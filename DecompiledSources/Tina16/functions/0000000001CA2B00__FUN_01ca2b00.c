/* Ghidra address: 01ca2b00 */
/* Ghidra symbol: FUN_01ca2b00 */


void FUN_01ca2b00(longlong param_1)

{
  int iVar1;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_30 = 0;
  local_38 = 0;
  iVar1 = FUN_00724300(*(undefined8 *)(param_1 + 0x18f0));
  if (iVar1 == 2) {
    FUN_00416cd0(&local_30,3,L"User Macros|",*(undefined8 *)PTR_DAT_02005010,L"\\Macrolib");
    local_28 = local_30;
    FUN_00416cd0(&local_38,3,L"Tina Macros|",*(undefined8 *)PTR_DAT_020049a0,L"\\Macrolib");
    local_20 = local_38;
    (**(code **)(**(longlong **)(param_1 + 0x18f0) + 0x130))
              (*(longlong **)(param_1 + 0x18f0),&local_28,1);
  }
  else {
    FUN_00416cd0(&local_60,3,L"User Examples|",*(undefined8 *)PTR_DAT_02005010,L"\\User Examples");
    local_58 = local_60;
    FUN_00416cd0(&local_68,3,L"Infineon Examples|",*(undefined8 *)PTR_DAT_020049a0,
                 L"\\Examples\\Infineon");
    local_50 = local_68;
    FUN_00416cd0(&local_70,3,L"TI Examples|",*(undefined8 *)PTR_DAT_020049a0,
                 L"\\Examples\\Texas Instruments");
    local_48 = local_70;
    FUN_00416cd0(&local_78,3,L"Tina Examples|",*(undefined8 *)PTR_DAT_020049a0,L"\\Examples");
    local_40 = local_78;
    (**(code **)(**(longlong **)(param_1 + 0x18f0) + 0x130))
              (*(longlong **)(param_1 + 0x18f0),&local_58,3);
  }
  FUN_00414560(&local_78,4);
  FUN_00414560(&local_38,2);
  return;
}

