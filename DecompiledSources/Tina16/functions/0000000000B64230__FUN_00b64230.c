/* Ghidra address: 00b64230 */
/* Ghidra symbol: FUN_00b64230 */


void FUN_00b64230(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_20;
  int local_1c;
  
  local_30 = auStack_58;
  *(undefined8 *)(param_1 + 0x90) = 0;
  FUN_00b68280(param_1);
  iVar1 = FUN_00b59a10(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8));
  if (iVar1 == 0) {
    uVar3 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xc);
    FUN_004134c0(uVar3);
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_00b630c0(auStack_58);
  *(undefined8 *)(param_1 + 0x90) = 0x3fa999999999999a;
  FUN_00b68280(param_1);
  FUN_00b64060(auStack_58);
  *(undefined8 *)(param_1 + 0x90) = 0x3faeb851eb851eb8;
  FUN_00b68280(param_1);
  FUN_00b64a00(param_1);
  *(undefined8 *)(param_1 + 0x90) = 0x3fb999999999999a;
  FUN_00b68280(param_1);
  local_20 = 0;
  iVar1 = FUN_00b59a10();
  local_1c = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar4 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_1c);
      iVar2 = FUN_00b4e330(*(undefined8 *)(lVar4 + 0x10));
      local_20 = local_20 + iVar2;
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (0 < local_20) {
    *(double *)(param_1 + 0x98) = (0.9 - *(double *)(param_1 + 0x90)) / (double)local_20;
  }
  iVar1 = FUN_00b59a10();
  local_1c = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00b66940(param_1,local_1c);
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00b636e0(auStack_58);
  FUN_00b64200(auStack_58);
  *(undefined8 *)(param_1 + 0x90) = 0x3ff0000000000000;
  FUN_00b68280(param_1);
  return;
}

