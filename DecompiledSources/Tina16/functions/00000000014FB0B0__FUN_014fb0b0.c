/* Ghidra address: 014fb0b0 */
/* Ghidra symbol: FUN_014fb0b0 */


undefined8 FUN_014fb0b0(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  local_20 = *(undefined8 *)(param_1 + 0x550);
  iVar1 = 1;
  puVar5 = &local_28;
  piVar4 = (int *)PTR_DAT_02004e78;
  do {
    *(undefined1 *)puVar5 = *(undefined1 *)(param_1 + 0x567 + (longlong)*piVar4);
    iVar1 = iVar1 + 1;
    puVar5 = (undefined4 *)((longlong)puVar5 + 1);
    piVar4 = piVar4 + 1;
  } while (iVar1 != 5);
  iVar1 = 1;
  puVar5 = &local_24;
  piVar4 = (int *)PTR_DAT_02004e78;
  do {
    *(undefined1 *)puVar5 = *(undefined1 *)(param_1 + 0x587 + (longlong)*piVar4);
    iVar1 = iVar1 + 1;
    puVar5 = (undefined4 *)((longlong)puVar5 + 1);
    piVar4 = piVar4 + 1;
  } while (iVar1 != 5);
  iVar1 = 1;
  do {
    *(undefined1 *)(param_1 + 0x567 + (longlong)iVar1) =
         *(undefined1 *)(param_1 + 0x587 + (longlong)iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 7);
  if ((*(char *)(param_1 + 0x569) == '\x01') && (*(char *)(param_1 + 0x56c) == '\x01')) {
    iVar1 = FUN_01aa1870(local_28,PTR_DAT_02002610,8);
    if (iVar1 != -1) {
      iVar2 = FUN_01aa1870(local_24,PTR_DAT_02002610,8);
      uVar3 = iVar2 - iVar1;
      if ((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f) == 1) {
        iVar1 = FUN_00f12070((double)(int)uVar3);
        FUN_014fb030(auStack_48,iVar1 * *(int *)PTR_DAT_02004a98);
      }
      else {
        iVar1 = FUN_01aa1870(local_28,PTR_DAT_02001cf8,4);
        iVar2 = FUN_01aa1870(local_24,PTR_DAT_02001cf8,4);
        uVar3 = iVar2 - iVar1;
        if ((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f) == 1) {
          iVar1 = FUN_00f12070((double)(int)uVar3);
          FUN_014fb030(auStack_48,iVar1 * *(int *)PTR_DAT_020041a0);
        }
      }
    }
  }
  return 0;
}

