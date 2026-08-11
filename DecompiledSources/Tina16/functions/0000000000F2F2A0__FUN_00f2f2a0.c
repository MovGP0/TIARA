/* Ghidra address: 00f2f2a0 */
/* Ghidra symbol: FUN_00f2f2a0 */


void FUN_00f2f2a0(longlong param_1)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  
  puVar4 = *(ushort **)(*(longlong *)(param_1 + 0x30) + 0x10);
  iVar3 = 0;
  if (puVar4 != (ushort *)0x0) {
    iVar3 = *(int *)(puVar4 + -2);
  }
  puVar1 = puVar4 + iVar3;
  do {
    if (puVar1 <= puVar4) {
      return;
    }
    uVar2 = *puVar4;
    if (uVar2 < 0xe) {
      if (uVar2 == 0xd) {
        FUN_00453060(*(undefined8 *)(param_1 + 0x38),&PTR_s_ElevationRequiredHRB_00f2f47c);
      }
      else if (uVar2 == 8) {
        FUN_00453060(*(undefined8 *)(param_1 + 0x38),&PTR_DAT_00f2f440);
      }
      else if (uVar2 == 9) {
        FUN_00453060(*(undefined8 *)(param_1 + 0x38),&LAB_00f2f490);
      }
      else if (uVar2 == 10) {
        FUN_00453060(*(undefined8 *)(param_1 + 0x38),&PTR_DAT_00f2f468);
      }
      else {
        if (uVar2 != 0xc) goto LAB_00f2f3d5;
        FUN_00453060(*(undefined8 *)(param_1 + 0x38),&DAT_00f2f454);
      }
    }
    else if (uVar2 == 0x22) {
      FUN_00453060(*(undefined8 *)(param_1 + 0x38),&DAT_00f2f404);
    }
    else if (uVar2 == 0x2f) {
      FUN_00453060(*(undefined8 *)(param_1 + 0x38),&DAT_00f2f42c);
    }
    else if (uVar2 == 0x5c) {
      FUN_00453060(*(undefined8 *)(param_1 + 0x38),&DAT_00f2f418);
    }
    else {
LAB_00f2f3d5:
      FUN_00453560(*(undefined8 *)(param_1 + 0x38),uVar2);
    }
    puVar4 = puVar4 + 1;
  } while( true );
}

