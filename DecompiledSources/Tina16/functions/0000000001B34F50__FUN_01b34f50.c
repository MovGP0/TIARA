/* Ghidra address: 01b34f50 */
/* Ghidra symbol: FUN_01b34f50 */


ulonglong FUN_01b34f50(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 local_80 [2];
  undefined8 local_70 [9];
  
  local_80[0] = 0;
  puVar5 = local_70;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00417a80(local_70,&DAT_00401390,9);
  uVar4 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),0x41);
  while( true ) {
    bVar1 = false;
    iVar6 = 8;
    puVar5 = local_70;
    do {
      FUN_00416780(local_80,uVar4 & 0xffffffff);
      iVar2 = FUN_00416db0(*puVar5,local_80[0]);
      if (iVar2 == 0) {
        bVar1 = true;
      }
      puVar5 = puVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (!bVar1) break;
    uVar4 = CONCAT62((int6)(uVar4 >> 0x10),(short)uVar4 + 1);
  }
  FUN_00414480(local_80);
  FUN_00417840(local_70,&DAT_00401390,9);
  return uVar4 & 0xffff;
}

