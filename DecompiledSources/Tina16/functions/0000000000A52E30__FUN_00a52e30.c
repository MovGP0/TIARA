/* Ghidra address: 00a52e30 */
/* Ghidra symbol: FUN_00a52e30 */


void FUN_00a52e30(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  
  bVar4 = 0;
  do {
    uVar3 = (ulonglong)bVar4;
    if (*(char *)(param_1 + 0x6c0 + uVar3) == '\0') {
      FUN_00461840(param_1 + 0x78 + uVar3 * 0x18,param_2 + 0x78 + uVar3 * 0x18);
    }
    bVar4 = bVar4 + 1;
  } while (bVar4 != 0x43);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_00410f20(uVar1);
  if (*(longlong *)(param_1 + 0x748) != 0) {
    if (*(char *)(param_2 + 0x20) == '\0') {
      iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x50),L"link");
      if (iVar2 == 0) {
        FUN_00a5be90(param_1,param_3,param_4);
      }
      else {
        uVar1 = *(undefined8 *)(param_1 + 0x748);
        *(undefined8 *)(param_1 + 0x748) = 0;
        FUN_00410f20(uVar1);
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
    }
    else {
      FUN_00a4ddc0(*(longlong *)(param_1 + 0x748),*(undefined8 *)(param_2 + 0x748));
    }
  }
  return;
}

