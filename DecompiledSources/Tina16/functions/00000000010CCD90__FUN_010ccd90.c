/* Ghidra address: 010ccd90 */
/* Ghidra symbol: FUN_010ccd90 */


void FUN_010ccd90(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined2 local_79;
  
  local_90[0] = 0;
  local_98 = 0;
  uVar3 = (ulonglong)*param_2;
  if (0x4f < uVar3) {
    uVar3 = 0x50;
  }
  local_79 = CONCAT11(local_79._1_1_,(char)uVar3);
  pbVar5 = (byte *)((longlong)&local_79 + 1);
  for (uVar4 = uVar3; param_2 = param_2 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
    *pbVar5 = *param_2;
    pbVar5 = pbVar5 + 1;
  }
  iVar1 = FUN_00414f50(&local_79,&DAT_010cce9c,uVar3 + 1);
  if (iVar1 == 0) {
    local_79 = 0x4d01;
  }
  iVar1 = 1;
  while( true ) {
    FUN_004169a0(local_90,&local_79);
    FUN_00416780(&local_98,
                 *(undefined2 *)((longlong)&UNWIND_INFO_01f19ec0 + (longlong)iVar1 * 2 + 2));
    iVar2 = FUN_00416db0(local_90[0],local_98);
    if ((iVar2 == 0) || (0xd < iVar1)) break;
    iVar1 = iVar1 + 1;
  }
  uVar6 = FUN_010ccd30(param_1,(iVar1 + -1) * 3 + -0x12);
  *param_3 = uVar6;
  FUN_00414560(&local_98,2);
  return;
}

