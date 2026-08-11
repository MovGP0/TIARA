/* Ghidra address: 01601740 */
/* Ghidra symbol: FUN_01601740 */


void FUN_01601740(ulonglong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_res10;
  longlong local_res18;
  char local_res20;
  undefined1 auStack_1c8 [32];
  wchar_t *local_1a8;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 *local_170;
  undefined1 local_158 [256];
  undefined4 local_58;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_28;
  undefined8 local_20;
  
  local_170 = auStack_1c8;
  local_198 = 0;
  local_188 = 0;
  local_190 = 0;
  local_178 = 0;
  local_180 = 0;
  local_20 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  if (local_res18 != 0) {
    iVar3 = (**(code **)(**(longlong **)(local_res18 + 0x920) + 0x28))();
    local_54 = 0;
    if (-1 < iVar3 + -1) {
      do {
        (**(code **)(**(longlong **)(local_res18 + 0x920) + 0x18))
                  (*(longlong **)(local_res18 + 0x920),&local_180,local_54);
        FUN_0043e1a0(&local_178,local_180);
        FUN_00415dd0(&local_48,local_178,0);
        uVar4 = FUN_004425e0(local_158,local_48);
        local_38 = _EEPROM_SaveMemory(param_1,uVar4,&local_58);
        FUN_00415430(&local_50,local_38,0);
        FUN_0156cb10(local_res18,local_48,local_50,local_58);
        local_54 = local_54 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_0043fba0(&local_190,param_1 & 0xffffffff,4);
  FUN_00416ba0(&local_188,L"DigitalEpilog: session_handle is 0x",local_190);
  FUN_01602e30(local_188,1);
  if (local_res20 != '\0') {
    _SC_Finally(param_1);
  }
  _write_log2(param_1);
  if (0 < *(int *)(PTR_DAT_020035e0 + 0xc)) {
    FUN_015fcd70(&local_198,local_res10);
    local_1a8 = L"report.txt";
    FUN_00416cd0(&local_20,3,local_198,&DAT_01601b4c);
    local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    cVar2 = FUN_00440a20(local_20,1);
    if (cVar2 != '\0') {
      (**(code **)(*local_28 + 0xd8))(local_28,local_20);
    }
    iVar3 = (**(code **)(*local_28 + 0x28))(local_28);
    if (0 < iVar3) {
      if (*(longlong *)PTR_DAT_02004878 != 0) {
        FUN_00410f20(*(undefined8 *)PTR_DAT_02004878);
      }
      uVar4 = FUN_007fc180(&PTR_FUN_015e44d0,1,*(undefined8 *)PTR_DAT_02004030);
      *(undefined8 *)PTR_DAT_02004878 = uVar4;
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02004878 + 0x6b0) + 0x510);
      (**(code **)(*plVar1 + 0xd8))(plVar1,local_20);
      FUN_008059a0(*(undefined8 *)PTR_DAT_02004878);
    }
    FUN_00410f20(local_28);
  }
  FUN_00414560(&local_198,5);
  FUN_00414590(&local_50,3);
  FUN_00414480(&local_20);
  FUN_00414480(&local_res10);
  return;
}

