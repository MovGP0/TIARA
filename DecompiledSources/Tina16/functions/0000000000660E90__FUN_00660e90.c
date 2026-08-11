/* Ghidra address: 00660e90 */
/* Ghidra symbol: FUN_00660e90 */


longlong * FUN_00660e90(longlong *param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_2c;
  
  local_40 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_00410e60(local_res8,0);
  *(undefined4 *)(local_res8 + 3) = 4;
  local_res8[5] = param_3;
  *(undefined4 *)(local_res8 + 0x14) = 0x80000;
  *(undefined4 *)(local_res8 + 6) = 0xc;
  if ((*(char *)(param_3 + 0xad) == '\x01') || (*(char *)(param_3 + 0xad) == '\x02')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)((longlong)local_res8 + 0x34) = uVar2;
  lVar4 = FUN_00660520(&DAT_006446d0,1,local_res8);
  local_res8[0x12] = lVar4;
  lVar4 = FUN_005fd7d0(&PTR_FUN_005f35d8,1);
  local_res8[4] = lVar4;
  uVar5 = FUN_0060f4c0(0,0xffffff);
  FUN_005fda60(lVar4,uVar5);
  FUN_00661190(local_res8);
  iVar3 = FUN_00654c00();
  local_2c = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar5 = FUN_00654bc0(param_3,local_2c);
      (**(code **)(*local_res8 + 0x18))(local_res8,uVar5,3,0);
      local_2c = local_2c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_006608c0(local_res8[0x12]);
  FUN_006611a0(local_res8);
  if ((*(ushort *)(param_3 + 0x34) & 0x10) == 0) {
    local_res8[9] = *(longlong *)(local_res8[5] + 0x80);
    local_res8[10] = *(longlong *)(local_res8[5] + 0x88);
    lVar4 = local_res8[5];
    *(longlong **)(lVar4 + 0x88) = local_res8;
    *(code **)(lVar4 + 0x80) = FUN_00663cd0;
  }
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

