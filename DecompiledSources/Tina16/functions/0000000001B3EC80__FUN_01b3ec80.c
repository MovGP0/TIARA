/* Ghidra address: 01b3ec80 */
/* Ghidra symbol: FUN_01b3ec80 */


bool FUN_01b3ec80(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  bool local_49;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_49 = false;
  cVar2 = FUN_01d01970(param_1);
  if (cVar2 == '\0') {
    uVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
    cVar2 = FUN_01d3d620(uVar3);
    if (cVar2 == '\0') goto code_r0x01b3ee1f;
  }
  iVar5 = 0;
  while( true ) {
    iVar4 = FUN_01cfd2d0(param_1);
    if (iVar4 <= iVar5) break;
    cVar2 = (**(code **)(*param_1 + 0x2d0))(param_1,iVar5,&local_20);
    if (cVar2 == '\t') break;
    iVar5 = iVar5 + 1;
  }
  iVar4 = FUN_01cfd2d0(param_1);
  if (iVar5 < iVar4) {
    (**(code **)(*param_2 + 0x2d0))(param_2,iVar5,&local_28);
    FUN_004169a0(&local_30,local_20);
    lVar1 = local_30;
    FUN_004169a0(&local_38,local_28);
    if (lVar1 == local_38) {
      local_49 = true;
    }
    else if ((lVar1 == 0) || (local_38 == 0)) {
      local_49 = false;
    }
    else {
      iVar4 = FUN_0043e420(lVar1,local_38);
      local_49 = iVar4 == 0;
    }
    local_49 = !local_49;
    if (!local_49) {
      (**(code **)(*param_1 + 0x2d0))(param_1,iVar5 + 1,&local_20);
      (**(code **)(*param_2 + 0x2d0))(param_2,iVar5 + 1,&local_28);
      FUN_004169a0(&local_40,local_20);
      lVar1 = local_40;
      FUN_004169a0(&local_48,local_28);
      if (lVar1 == local_48) {
        local_49 = true;
      }
      else if ((lVar1 == 0) || (local_48 == 0)) {
        local_49 = false;
      }
      else {
        iVar5 = FUN_0043e420(lVar1,local_48);
        local_49 = iVar5 == 0;
      }
      local_49 = !local_49;
    }
  }
code_r0x01b3ee1f:
  FUN_00414560(&local_48,4);
  return local_49;
}

