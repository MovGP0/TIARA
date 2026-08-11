/* Ghidra address: 01c1f4d0 */
/* Ghidra symbol: FUN_01c1f4d0 */


int FUN_01c1f4d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong local_res10;
  undefined8 local_res18;
  undefined1 auStack_368 [32];
  undefined8 local_348;
  wchar_t *local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  wchar_t *local_2d8;
  undefined1 *local_2d0;
  bool local_2c1;
  wchar_t *local_2c0;
  undefined8 local_2b8;
  bool local_2a9;
  wchar_t *local_2a8;
  longlong local_298;
  int local_290;
  undefined8 local_28b;
  undefined8 local_283;
  undefined8 local_273;
  ushort local_262;
  ushort local_260;
  int local_34;
  longlong local_30;
  int local_24;
  undefined8 local_20;
  
  local_2d0 = auStack_368;
  local_330 = (wchar_t *)0x0;
  local_320 = 0;
  local_328 = 0;
  local_310 = 0;
  local_318 = 0;
  local_308 = 0;
  local_2f8 = 0;
  local_300 = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = (wchar_t *)0x0;
  local_20 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00417580(&local_28b,&DAT_015b8318);
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x90))(*(longlong **)(param_1 + 0x720));
  FUN_006efe10(*(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02004230 + 0x6c0) + 0x4e0));
  FUN_00414ad0(*(longlong *)(param_1 + 0x710) + 0x88,local_res10);
  FUN_00441a10(&local_2d8,local_res10);
  local_2a8 = local_2d8;
  if (local_2d8 == L".zip") {
    local_2a9 = true;
  }
  else if (local_2d8 == (wchar_t *)0x0) {
    local_2a9 = false;
  }
  else {
    iVar2 = FUN_0043e420(L".zip",local_2d8);
    local_2a9 = iVar2 == 0;
  }
  if ((local_2a9 == false) ||
     (cVar1 = FUN_015e1930(*(undefined8 *)(param_1 + 0x710)), cVar1 == '\0')) {
    FUN_00441920(&local_328,local_res10);
    FUN_00416ba0(&local_320,local_res18,local_328);
    (**(code **)(**(longlong **)(param_1 + 0x720) + 0x78))
              (*(longlong **)(param_1 + 0x720),local_320);
    local_24 = 1;
  }
  else {
    local_298 = *(longlong *)(param_1 + 0x710);
    FUN_00414ad0(local_298 + 0x88,local_res10);
    FUN_015dca70(local_298,0);
    local_348 = 0;
    cVar1 = FUN_015de7f0(local_298,&DAT_01c1fca8,&local_28b,0x1ef);
    while (cVar1 != '\0') {
      local_30 = FUN_006efb70(*(undefined8 *)
                               (*(longlong *)(*(longlong *)PTR_DAT_02004230 + 0x6c0) + 0x4e0));
      FUN_006ef050(local_30,local_28b);
      local_34 = (uint)local_262 * 0x10000 + (uint)local_260;
      FUN_00414480(&local_20);
      local_2b8 = FUN_00442290(local_34);
      FUN_0044a2b0(&local_20,local_2b8,PTR_DAT_02004830);
      (**(code **)(**(longlong **)(local_30 + 0x10) + 0x78))
                (*(longlong **)(local_30 + 0x10),local_20);
      FUN_00414480(&local_20);
      FUN_0043f780(&local_2e0,local_273);
      (**(code **)(**(longlong **)(local_30 + 0x10) + 0x78))
                (*(longlong **)(local_30 + 0x10),local_2e0);
      (**(code **)(**(longlong **)(local_30 + 0x10) + 0x78))
                (*(longlong **)(local_30 + 0x10),local_283);
      cVar1 = FUN_015deaa0(local_298,&local_28b);
    }
    local_24 = (**(code **)(**(longlong **)PTR_DAT_02004230 + 0x2d0))
                         (*(longlong **)PTR_DAT_02004230);
    if (local_24 == 1) {
      FUN_01c1f360(param_1,&local_2e8);
      FUN_00414ad0(local_298 + 0xb0,local_2e8);
      local_30 = FUN_006f6fe0(*(undefined8 *)(*(longlong *)PTR_DAT_02004230 + 0x6c0));
      if (local_30 == 0) {
        iVar2 = FUN_006efc30();
        local_290 = 0;
        if (-1 < iVar2 + -1) {
          do {
            local_30 = FUN_006efcb0(*(undefined8 *)
                                     (*(longlong *)(*(longlong *)PTR_DAT_02004230 + 0x6c0) + 0x4e0),
                                    local_290);
            (**(code **)(**(longlong **)(local_30 + 0x10) + 0x18))
                      (*(longlong **)(local_30 + 0x10),&local_308,2);
            FUN_00416ad0(&local_308,*(undefined8 *)(local_30 + 0x30));
            FUN_015e1780(local_298,local_308,0x28bf,0);
            (**(code **)(**(longlong **)(local_30 + 0x10) + 0x18))
                      (*(longlong **)(local_30 + 0x10),&local_318,2);
            local_348 = *(undefined8 *)(local_30 + 0x30);
            FUN_00416cd0(&local_310,3,*(undefined8 *)(local_298 + 0xb0));
            (**(code **)(**(longlong **)(param_1 + 0x720) + 0x78))
                      (*(longlong **)(param_1 + 0x720),local_310);
            local_290 = local_290 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else {
        for (; local_30 != 0;
            local_30 = FUN_006f71f0(*(undefined8 *)(*(longlong *)PTR_DAT_02004230 + 0x6c0),local_30,
                                    4)) {
          (**(code **)(**(longlong **)(local_30 + 0x10) + 0x18))
                    (*(longlong **)(local_30 + 0x10),&local_2f0,2);
          FUN_00416ad0(&local_2f0,*(undefined8 *)(local_30 + 0x30));
          FUN_015e1780(local_298,local_2f0,0x28bf,0);
          (**(code **)(**(longlong **)(local_30 + 0x10) + 0x18))
                    (*(longlong **)(local_30 + 0x10),&local_300,2);
          local_348 = *(undefined8 *)(local_30 + 0x30);
          FUN_00416cd0(&local_2f8,3,*(undefined8 *)(local_298 + 0xb0),local_300);
          (**(code **)(**(longlong **)(param_1 + 0x720) + 0x78))
                    (*(longlong **)(param_1 + 0x720),local_2f8);
        }
        local_30 = 0;
      }
    }
    FUN_015dcd20(local_298);
  }
  FUN_00441a10(&local_330,local_res10);
  local_2c0 = local_330;
  if (local_330 == L".zip") {
    local_2c1 = true;
  }
  else if (local_330 == (wchar_t *)0x0) {
    local_2c1 = false;
  }
  else {
    iVar2 = FUN_0043e420(L".zip",local_330);
    local_2c1 = iVar2 == 0;
  }
  if ((local_2c1 != false) && (cVar1 = FUN_00440a20(local_res10,1), cVar1 != '\0')) {
    FUN_004412f0(local_res10);
  }
  FUN_00414560(&local_330,0xc);
  FUN_00417740(&local_28b,&DAT_015b8318);
  FUN_00414480(&local_20);
  FUN_00414560(&local_res10,2);
  return local_24;
}

