/* Ghidra address: 009484c0 */
/* Ghidra symbol: FUN_009484c0 */


int FUN_009484c0(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  undefined1 local_10;
  
  local_38 = 0;
  local_40 = 0;
  local_20 = 0;
  local_30 = 0;
  local_28 = 0;
  cVar1 = FUN_008ffae0(param_1);
  if (cVar1 == '\0') {
    local_10 = 0xf;
    local_18 = param_1;
    uVar3 = FUN_0044d530(&PTR_FUN_00436080,1,L"%S is not a valid XmlCharRef value.",&local_18,0);
    FUN_004134c0(uVar3);
  }
  if (*(short *)(param_1 + 4) == 0x78) {
    uVar2 = 0;
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + -4) >> 1;
    }
    FUN_00416430(&local_28,param_1,4,uVar2 - 4);
    FUN_00416020(&local_20,&LAB_00948784,local_28);
    FUN_004168b0(&local_30,local_20);
    local_44 = FUN_0043fc00(local_30);
  }
  else {
    uVar2 = 0;
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + -4) >> 1;
    }
    FUN_00416430(&local_38,param_1,3,uVar2 - 3);
    FUN_004168b0(&local_40,local_38);
    local_44 = FUN_0043fc00(local_40);
  }
  if (0x10ffff < local_44) {
    local_10 = 0xf;
    local_18 = param_1;
    uVar3 = FUN_0044d530(&PTR_FUN_00436080,1,L"%S is not a valid XmlCharRef value.",&local_18,0);
    FUN_004134c0(uVar3);
  }
  if (local_44 < 0x10000) {
    cVar1 = FUN_008ff2d0(local_44);
    if (cVar1 == '\0') {
      local_10 = 0xf;
      local_18 = param_1;
      uVar3 = FUN_0044d530(&PTR_FUN_00436080,1,L"%S is not a valid XmlCharRef value.",&local_18,0);
      FUN_004134c0(uVar3);
    }
    if (local_44 - 0xd800U < 0x800) {
      local_10 = 0xf;
      local_18 = param_1;
      uVar3 = FUN_0044d530(&PTR_FUN_00436080,1,L"%S is not a valid XmlCharRef value.",&local_18,0);
      FUN_004134c0(uVar3);
    }
  }
  FUN_00414480(&local_40);
  FUN_00414520(&local_38);
  FUN_00414480(&local_30);
  FUN_004145c0(&local_28,2);
  return local_44;
}

