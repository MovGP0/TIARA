/* Ghidra address: 00f638e0 */
/* Ghidra symbol: FUN_00f638e0 */


void FUN_00f638e0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_78 [88];
  undefined8 local_20;
  
  FUN_00f62b90(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_00f62b60(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_00f652e0(param_1,*(undefined4 *)(PTR_DAT_02002068 + 0x10));
  FUN_00f65300(param_1,*(undefined4 *)(PTR_DAT_02002068 + 0x2c));
  FUN_00f65320(param_1,0);
  FUN_00f652c0(param_1,0xf);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_20 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),iVar2);
      cVar1 = FUN_00f6f9a0(local_20);
      if (cVar1 != '\0') {
        cVar1 = FUN_00f6f980(local_20);
        if ((cVar1 == '\0') || (cVar1 = FUN_00f6f990(local_20), cVar1 != '\0')) {
          cVar1 = FUN_00f6f980(local_20);
          if ((cVar1 == '\0') && (cVar1 = FUN_00f6f990(local_20), cVar1 != '\0')) {
            FUN_00f6f910(local_20,4);
            FUN_00f63800(auStack_78);
          }
        }
        else {
          FUN_00f6f900(local_20,2);
          FUN_00f63800(auStack_78);
          FUN_00f6f900(local_20,4);
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00f62bd0(param_1,*(undefined8 *)(param_1 + 0x10));
  return;
}

