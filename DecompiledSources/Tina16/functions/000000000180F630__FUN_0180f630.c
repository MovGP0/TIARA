/* Ghidra address: 0180f630 */
/* Ghidra symbol: FUN_0180f630 */


void FUN_0180f630(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  char local_2d;
  int local_2c;
  longlong local_28;
  char local_19;
  
  local_50 = auStack_78;
  local_38 = 0;
  local_2d = FUN_004c23c0(param_2);
  if (local_2d == '\x0e') {
    FUN_004bf530(param_2,param_1);
    iVar2 = FUN_004b2060();
    local_2c = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar4 = FUN_004b2070(param_1,local_2c);
        FUN_0180ef70(uVar4,0);
        local_2c = local_2c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    local_19 = '\0';
    local_28 = 0;
    lVar3 = (**(code **)(*param_3 + 0x118))(param_3);
    if (lVar3 != 0) {
      lVar3 = (**(code **)(*param_3 + 0x118))(param_3);
      local_28 = *(longlong *)(lVar3 + 0x2a8);
    }
    if (local_28 == 0) {
      local_28 = FUN_01810fa0(&DAT_018103d8,1,0);
      uVar4 = (**(code **)(*param_3 + 0x118))(param_3);
      *(undefined8 *)(local_28 + 0x18) = uVar4;
      local_19 = '\x01';
    }
    FUN_004b1e70(param_1);
    while (cVar1 = FUN_004be290(param_2), cVar1 == '\0') {
      FUN_004bf510(param_2);
      local_40 = FUN_004b1ca0(param_1);
      FUN_004c1ed0(param_2,&local_38);
      if (local_19 == '\0') {
        FUN_018113d0(local_28,local_38,local_40);
      }
      else {
        uVar4 = (**(code **)(*param_3 + 0x118))(param_3);
        FUN_018147b0(local_28,uVar4,local_40,local_38);
      }
      FUN_004bf520(param_2);
    }
    FUN_004bf520(param_2);
    if (local_19 != '\0') {
      FUN_00410f20(local_28);
    }
  }
  FUN_00414480(&local_38);
  return;
}

