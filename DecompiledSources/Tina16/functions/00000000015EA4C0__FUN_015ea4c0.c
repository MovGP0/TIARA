/* Ghidra address: 015ea4c0 */
/* Ghidra symbol: FUN_015ea4c0 */


undefined1 FUN_015ea4c0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined1 *local_180;
  double *local_178;
  double *local_170;
  double local_160 [32];
  int local_60;
  int local_5c;
  double local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  longlong *local_28;
  undefined8 local_20;
  
  local_180 = auStack_1a8;
  local_188 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_29 = 0;
  FUN_00414480(param_1);
  FUN_0040d200(local_160,0x100,0);
  local_20 = FUN_005ea470(&DAT_005e7878,1,0x20019);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_005ea670(local_20,0xffffffff80000002);
  FUN_00414b50(&local_48,L"\\Software\\Microsoft\\MSBuild\\ToolsVersions");
  cVar1 = FUN_005ea880(local_20,local_48,0);
  if (cVar1 != '\0') {
    FUN_005eb0d0(local_20,local_28);
    iVar2 = (**(code **)(*local_28 + 0x28))();
    local_5c = 0;
    if (-1 < iVar2 + -1) {
      local_170 = local_160;
      do {
        (**(code **)(*local_28 + 0x18))(local_28,&local_38,local_5c);
        local_58 = (double)FUN_00448650(local_38,PTR_DAT_02004830);
        *local_170 = local_58;
        local_5c = local_5c + 1;
        local_170 = local_170 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_58 = 0.0;
    local_60 = -1;
    iVar2 = (**(code **)(*local_28 + 0x28))();
    local_5c = 0;
    if (-1 < iVar2 + -1) {
      local_178 = local_160;
      do {
        if (local_58 < *local_178) {
          local_60 = local_5c;
          local_58 = *local_178;
        }
        local_5c = local_5c + 1;
        local_178 = local_178 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (local_60 < 0) {
      FUN_015ea7b0(0,local_180);
      goto LAB_015ea77f;
    }
    (**(code **)(*local_28 + 0x18))(local_28,&local_38,local_60);
    FUN_00414b50(&local_40,local_38);
    cVar1 = FUN_005ea880(local_20,local_40,0);
    if (cVar1 != '\0') {
      FUN_005eb6d0(local_20,&local_188,L"MSBuildToolsPath");
      FUN_00414ad0(param_1,local_188);
      local_29 = 1;
    }
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
LAB_015ea77f:
  FUN_00414480(&local_188);
  FUN_00414560(&local_48,3);
  return local_29;
}

