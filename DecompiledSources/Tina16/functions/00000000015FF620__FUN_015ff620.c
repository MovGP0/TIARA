/* Ghidra address: 015ff620 */
/* Ghidra symbol: FUN_015ff620 */


void FUN_015ff620(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  undefined1 local_20b8 [32];
  wchar_t *local_2098;
  undefined4 *local_2090;
  undefined8 local_2088;
  undefined8 local_2080;
  undefined8 local_2078;
  undefined8 local_2070;
  undefined8 local_2068;
  undefined1 *local_2060;
  undefined8 local_2048;
  undefined4 local_203c;
  int local_2038;
  char local_2031;
  undefined8 local_2030;
  undefined8 local_2028;
  undefined1 local_2020 [3944];
  undefined1 local_10b8;
  wchar_t local_1020 [1024];
  undefined1 local_820 [1896];
  undefined1 local_b8;
  longlong *local_20;
  
  local_b8 = 0;
  local_10b8 = 0;
  local_20b8[0] = 0;
  local_2060 = local_20b8;
  local_2080 = 0;
  local_2088 = 0;
  local_2078 = 0;
  local_2070 = 0;
  local_2068 = 0;
  local_2028 = 0;
  local_2030 = 0;
  local_2048 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  FUN_00414630(local_res20);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_2098 = L"flash_rom.asm";
  FUN_00416cd0(&local_2028,3,local_res8,L"\\Temp\\");
  local_203c = 0xffffffff;
  FUN_00442620(local_2020,local_2028);
  FUN_004425e0(local_820,local_res20);
  uVar1 = FUN_015ff5b0();
  local_2098 = local_1020;
  local_2090 = &local_203c;
  _compile_asm(uVar1,local_820,local_2020,&local_2031);
  if (local_2031 == '\0') {
    (**(code **)(*local_20 + 0xd8))(local_20,local_2028);
    FUN_00414480(&local_2030);
    FUN_0043f750(&local_2068,local_203c);
    local_2098 = L"|@@|";
    FUN_00416cd0(&local_2030,3,local_2030,local_2068);
    (**(code **)(*local_res18 + 0x288))(local_res18,&local_2070);
    local_2098 = L"|@@|";
    FUN_00416cd0(&local_2030,3,local_2030,local_2070);
    iVar2 = (**(code **)(*local_20 + 0x28))();
    local_2038 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*local_20 + 0x18))(local_20,&local_2078,local_2038);
        local_2098 = L"|@@|";
        FUN_00416cd0(&local_2030,3,local_2030,local_2078);
        local_2038 = local_2038 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00415500(&local_2080,local_1020,0x800,0);
    FUN_00416880(&local_2088,local_2080);
    FUN_015fcf20(local_2088,local_res10,2,local_2030);
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_2088);
  FUN_004144d0(&local_2080);
  FUN_00414560(&local_2078,3);
  FUN_00414480(&local_2048);
  FUN_00414560(&local_2030,2);
  FUN_00414480(&local_res8);
  FUN_004144d0(&local_res20);
  return;
}

