/* Ghidra address: 010ccea0 */
/* Ghidra symbol: FUN_010ccea0 */


undefined1 FUN_010ccea0(byte *param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  wchar_t *pwVar5;
  byte *pbVar6;
  undefined1 local_99;
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined2 local_79;
  
  local_90[0] = 0;
  local_98 = 0;
  uVar3 = (ulonglong)*param_1;
  if (0x4f < uVar3) {
    uVar3 = 0x50;
  }
  local_79 = CONCAT11(local_79._1_1_,(char)uVar3);
  pbVar6 = (byte *)((longlong)&local_79 + 1);
  for (uVar4 = uVar3; param_1 = param_1 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
    *pbVar6 = *param_1;
    pbVar6 = pbVar6 + 1;
  }
  iVar1 = FUN_00414f50(&local_79,&DAT_010ccf8c,uVar3 + 1);
  if (iVar1 == 0) {
    local_79 = 0x4d01;
  }
  local_99 = 0;
  iVar1 = 0xd;
  pwVar5 = u_afpnumakMGTPA_01f19ec4;
  do {
    FUN_004169a0(local_90,&local_79);
    FUN_00416780(&local_98,*pwVar5);
    iVar2 = FUN_00416db0(local_90[0],local_98);
    if (iVar2 == 0) {
      local_99 = 1;
      break;
    }
    pwVar5 = pwVar5 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00414560(&local_98,2);
  return local_99;
}

