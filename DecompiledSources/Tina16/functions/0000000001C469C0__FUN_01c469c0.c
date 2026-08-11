/* Ghidra address: 01c469c0 */
/* Ghidra symbol: FUN_01c469c0 */


void FUN_01c469c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined8 local_res10 [3];
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0 [2];
  wchar_t *local_290;
  undefined1 local_288 [16];
  uint local_278;
  undefined8 local_270;
  
  local_2e8 = 0;
  local_2f0 = 0;
  local_2d8 = 0;
  local_2e0 = 0;
  local_2c8 = 0;
  local_2d0 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  local_2a0[0] = 0;
  local_290 = (wchar_t *)0x0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417580(local_288,&DAT_00432b90);
  FUN_00416cd0(local_2a0,3,*(undefined8 *)(param_1 + 0x38),local_res10[0],L"\\*.*");
  iVar2 = FUN_00441230(local_2a0[0],0x30,local_288);
  while (iVar2 == 0) {
    if ((((*(char *)(param_1 + 0x58) != '\0') && ((local_278 & 0x10) == 0x10)) &&
        (iVar2 = FUN_00416db0(local_270,&DAT_01c46e70), iVar2 != 0)) &&
       (iVar2 = FUN_00416db0(local_270,&DAT_01c46e80), iVar2 != 0)) {
      FUN_00416ba0(&local_2a8,&DAT_01c46e94,local_270);
      FUN_01c469c0(param_1,local_2a8);
    }
    if ((local_278 & 0x20) == 0x20) {
      FUN_00441a10(&local_2b0,local_270);
      FUN_0043e1a0(&local_290,local_2b0);
      iVar2 = 0;
      if (local_290 != (wchar_t *)0x0) {
        iVar2 = *(int *)(local_290 + -2);
      }
      if ((iVar2 == 4) &&
         (iVar2 = FUN_004170c0(local_290,*(undefined8 *)(param_1 + 0x40),1), 0 < iVar2)) {
        FUN_00416cd0(&local_2b8,4,*(undefined8 *)(param_1 + 0x48),local_res10[0],&DAT_01c46e94,
                     local_270);
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xb0))
                          (*(longlong **)(param_1 + 0x50),local_2b8);
        if (iVar2 == -1) {
          FUN_00416cd0(&local_2c0,4,*(undefined8 *)(param_1 + 0x48),local_res10[0],&DAT_01c46e94,
                       local_270);
          (**(code **)(**(longlong **)(param_1 + 0x50) + 0x78))
                    (*(longlong **)(param_1 + 0x50),local_2c0);
        }
      }
      if (local_290 == L".tsc") {
        bVar3 = true;
      }
      else if (local_290 == (wchar_t *)0x0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_0043e420(local_290,L".tsc");
        bVar3 = iVar2 == 0;
      }
      if (bVar3) {
        FUN_004414c0(&local_2d0,local_270,L".tpc");
        FUN_00416cd0(&local_2c8,4,*(undefined8 *)(param_1 + 0x38),local_res10[0],&DAT_01c46e94,
                     local_2d0);
        cVar1 = FUN_00440a20(local_2c8,1);
        if (cVar1 != '\0') {
          FUN_004414c0(&local_2e0,local_270,L".tpc");
          FUN_00416cd0(&local_2d8,4,*(undefined8 *)(param_1 + 0x48),local_res10[0],&DAT_01c46e94,
                       local_2e0);
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xb0))
                            (*(longlong **)(param_1 + 0x50),local_2d8);
          if (iVar2 == -1) {
            FUN_004414c0(&local_2f0,local_270,L".tpc");
            FUN_00416cd0(&local_2e8,4,*(undefined8 *)(param_1 + 0x48),local_res10[0],&DAT_01c46e94,
                         local_2f0);
            (**(code **)(**(longlong **)(param_1 + 0x50) + 0x78))
                      (*(longlong **)(param_1 + 0x50),local_2e8);
          }
        }
      }
    }
    iVar2 = FUN_00441290(local_288);
  }
  FUN_004412c0(local_288);
  FUN_00414560(&local_2f0,0xb);
  FUN_00414480(&local_290);
  FUN_00417740(local_288,&DAT_00432b90);
  FUN_00414480(local_res10);
  return;
}

