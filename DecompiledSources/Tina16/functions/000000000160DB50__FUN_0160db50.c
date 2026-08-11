/* Ghidra address: 0160db50 */
/* Ghidra symbol: FUN_0160db50 */


void FUN_0160db50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0 [2];
  short *local_2a0;
  undefined1 local_298 [16];
  uint local_288;
  undefined8 local_280;
  
  local_2d8 = 0;
  local_2e0 = 0;
  local_2d0 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_2b0[0] = 0;
  local_2a0 = (short *)0x0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00417580(local_298,&DAT_00432b90);
  FUN_00416ba0(local_2b0,local_res10,&DAT_0160debc);
  iVar4 = FUN_00441230(local_2b0[0],0x10,local_298);
  while ((iVar4 == 0 && (*(char *)(param_1 + 0x3f) == '\0'))) {
    FUN_0043e1a0(&local_2a0,local_280);
    if (((local_288 & 0x10) == 0) ||
       ((iVar4 = FUN_00416db0(local_2a0,&DAT_0160decc), iVar4 == 0 || (*local_2a0 == 0x2e)))) {
LAB_0160dc7d:
      bVar1 = false;
    }
    else {
      FUN_0043e1a0(&local_2b8,*(undefined8 *)(param_1 + 0x58));
      iVar4 = FUN_00416db0(local_2a0,local_2b8);
      if ((iVar4 == 0) || (iVar4 = FUN_00416db0(local_2a0,&DAT_0160dedc), iVar4 == 0))
      goto LAB_0160dc7d;
      bVar1 = true;
    }
    if ((local_288 & 0x10) == 0) {
LAB_0160dcb3:
      uVar2 = 0;
    }
    else {
      FUN_0043e1a0(&local_2c0,*(undefined8 *)(param_1 + 0x58));
      iVar4 = FUN_00416db0(local_2a0,local_2c0);
      if (iVar4 != 0) goto LAB_0160dcb3;
      uVar2 = 1;
    }
    *(undefined1 *)(param_1 + 0x3f) = uVar2;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_00416ba0(&local_2c8,local_res18,local_280);
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0xb0))
                        (*(longlong **)(param_1 + 0x68),local_2c8);
      if (-1 < iVar4) {
        *(undefined1 *)(param_1 + 0x3f) = 0;
      }
    }
    if ((bVar1) && (*(char *)(param_1 + 0x3f) == '\0')) {
      FUN_00416cd0(&local_2d0,3,local_res10,local_280,&LAB_0160def0);
      cVar3 = FUN_00b96de0(local_2d0);
      if (cVar3 == '\0') goto LAB_0160ddbe;
      FUN_00416cd0(&local_2d8,3,local_res10,local_280,&LAB_0160def0);
      FUN_00416cd0(&local_2e0,3,local_res18,local_280,&LAB_0160def0);
      FUN_0160db50(param_1,local_2d8,local_2e0);
      if (*(char *)(param_1 + 0x3f) != '\0') goto LAB_0160de0e;
    }
    else {
LAB_0160ddbe:
      if (*(char *)(param_1 + 0x3f) != '\0') {
        FUN_00416ba0(param_1 + 0x30,local_res18,local_280);
      }
    }
    iVar4 = FUN_00441290(local_298);
  }
  FUN_004412c0(local_298);
LAB_0160de0e:
  FUN_00414560(&local_2e0,7);
  FUN_00414480(&local_2a0);
  FUN_00417740(local_298,&DAT_00432b90);
  FUN_00414560(&local_res10,2);
  return;
}

