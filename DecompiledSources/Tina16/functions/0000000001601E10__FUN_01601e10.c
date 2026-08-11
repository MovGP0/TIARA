/* Ghidra address: 01601e10 */
/* Ghidra symbol: FUN_01601e10 */


void FUN_01601e10(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_e3;
  undefined1 local_e2;
  undefined1 local_e1;
  byte *local_e0 [17];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  (**(code **)(*param_1 + 0x2d0))(param_1,3,local_e0);
  if (*local_e0[0] == 0) {
    uVar3 = *(int *)(PTR_DAT_020030c0 + 0x2c) + 1;
  }
  else {
    uVar3 = (uint)*local_e0[0];
  }
  iVar4 = uVar3 + 1;
  lVar1 = FUN_00409570(0x10);
  *param_2 = lVar1;
  iVar2 = 0;
  iVar5 = 2;
  do {
    local_e0[0] = (byte *)FUN_01cfde70(param_1,1,iVar4,&local_e1,&local_e2,&local_e3);
    iVar4 = iVar4 + 3;
    *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)local_e0[0];
    iVar2 = iVar2 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_00414560(&local_58,6);
  return;
}

