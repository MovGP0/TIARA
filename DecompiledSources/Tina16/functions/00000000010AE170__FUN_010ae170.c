/* Ghidra address: 010ae170 */
/* Ghidra symbol: FUN_010ae170 */


char FUN_010ae170(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_19;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_19 = '\0';
  FUN_00414480(param_1);
  local_10 = FUN_005ea470(&DAT_005e7878,1,0x20019);
  local_18 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_005ea670(local_10,0xffffffff80000002);
  FUN_015fecc0(&local_38,L"\\Software",L"\\Microchip\\MPLAB  C18",local_10);
  cVar1 = FUN_005ea880(local_10,local_38,0);
  if (cVar1 != '\0') {
    local_19 = FUN_005ebec0(local_10,L"InstallDir");
    if (local_19 != '\0') {
      FUN_005eb6d0(local_10,&local_48,L"InstallDir");
      FUN_00414ad0(param_1,local_48);
    }
  }
  FUN_00410f20(local_10);
  FUN_00410f20(local_18);
  FUN_00414480(&local_48);
  FUN_00414560(&local_38,3);
  return local_19;
}

