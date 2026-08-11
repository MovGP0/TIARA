/* Ghidra address: 009f0e60 */
/* Ghidra symbol: FUN_009f0e60 */


void FUN_009f0e60(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 0x6fb9) {
    if (iVar1 == 0x6fb8) {
      puVar3 = (undefined8 *)PTR_DAT_02002238;
      puVar4 = (undefined8 *)(param_1 + 0x20);
      for (lVar2 = 0x18; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    else if (iVar1 == 0x6fb0) {
      puVar3 = (undefined8 *)PTR_DAT_02001e70;
      puVar4 = (undefined8 *)(param_1 + 0x20);
      for (lVar2 = 0x18; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    else if (iVar1 == 0x6fb1) {
      puVar3 = (undefined8 *)PTR_DAT_02005040;
      puVar4 = (undefined8 *)(param_1 + 0x20);
      for (lVar2 = 0x18; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    else if (iVar1 == 0x6fb2) {
      puVar3 = (undefined8 *)PTR_DAT_02003dd8;
      puVar4 = (undefined8 *)(param_1 + 0x20);
      for (lVar2 = 0x18; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
  }
  else if (iVar1 == 0x6fbb) {
    puVar3 = (undefined8 *)PTR_DAT_02003fd0;
    puVar4 = (undefined8 *)(param_1 + 0x20);
    for (lVar2 = 0x18; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  else if (iVar1 == 0x6fbc) {
    puVar3 = (undefined8 *)PTR_DAT_02002d08;
    puVar4 = (undefined8 *)(param_1 + 0x20);
    for (lVar2 = 0x18; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  else if (iVar1 == 0x6fbe) {
    puVar3 = (undefined8 *)PTR_DAT_02004658;
    puVar4 = (undefined8 *)(param_1 + 0x20);
    for (lVar2 = 0x18; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}

