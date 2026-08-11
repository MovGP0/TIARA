/* Ghidra address: 012fafd0 */
/* Ghidra symbol: FUN_012fafd0 */


void FUN_012fafd0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 local_res18 [2];
  undefined1 auStack_328 [32];
  undefined8 local_308;
  undefined8 local_2f0;
  char local_2e1;
  undefined8 local_2e0;
  wchar_t *local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0 [2];
  undefined8 local_2a0;
  undefined1 local_298 [16];
  uint local_288;
  undefined8 local_280;
  
  local_2e0 = 0;
  local_2d8 = (wchar_t *)0x0;
  local_2d0 = 0;
  local_2b8 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b0[0] = 0;
  local_2a0 = 0;
  local_res18[0] = param_3;
  local_2f0 = param_2;
  local_2e1 = param_4;
  FUN_00414610(param_3);
  FUN_00417580(local_298,&DAT_00432b90);
  FUN_00416ba0(local_2b0,local_res18[0],L"\\*.*");
  iVar1 = FUN_00441230(local_2b0[0],0x30,local_298);
  while (iVar1 == 0) {
    if ((((local_2e1 != '\0') && ((local_288 & 0x10) == 0x10)) &&
        (iVar1 = FUN_00416db0(local_280,&DAT_012fb3c8), iVar1 != 0)) &&
       (iVar1 = FUN_00416db0(local_280,&DAT_012fb3d8), iVar1 != 0)) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a0),&local_2c0);
      FUN_0044f850(&local_2b8,local_2c0);
      local_308 = local_280;
      FUN_00416cd0(&local_2c8,3,local_res18[0],&DAT_012fb3ec);
      FUN_00441d00(&local_2a0,local_2b8,local_2c8);
      lVar2 = FUN_012faee0(auStack_328,0,local_2a0);
      if (lVar2 == 0) {
        uVar3 = FUN_012f2410(0x10);
        lVar2 = FUN_006dee70(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),0,local_2a0,
                             uVar3);
      }
      local_308 = local_280;
      FUN_00416cd0(&local_2d0,3,local_res18[0],&DAT_012fb3ec);
      FUN_012fafd0(param_1,lVar2,local_2d0,local_2e1);
      lVar4 = FUN_006dd580(lVar2);
      if (lVar4 == 0) {
        FUN_006de140(lVar2);
      }
    }
    if ((local_288 & 0x20) == 0x20) {
      FUN_00441a10(&local_2d8,local_280);
      if (local_2d8 == L".TSC") {
        bVar5 = true;
      }
      else if (local_2d8 == (wchar_t *)0x0) {
        bVar5 = false;
      }
      else {
        iVar1 = FUN_0043e420(local_2d8,L".TSC");
        bVar5 = iVar1 == 0;
      }
      if (bVar5) {
        FUN_004414c0(&local_2a0,local_280,0);
        lVar2 = FUN_012faee0(auStack_328,local_2f0);
        if (lVar2 == 0) {
          FUN_004414c0(&local_2e0,local_280,0);
          uVar3 = FUN_012f2410(0x20);
          FUN_006dee70(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),local_2f0,local_2e0,
                       uVar3);
        }
      }
    }
    iVar1 = FUN_00441290(local_298);
  }
  FUN_004412c0(local_298);
  FUN_00414560(&local_2e0,4);
  FUN_00414480(&local_2c0);
  FUN_00414560(&local_2b8,2);
  FUN_00414480(&local_2a0);
  FUN_00417740(local_298,&DAT_00432b90);
  FUN_00414480(local_res18);
  return;
}

