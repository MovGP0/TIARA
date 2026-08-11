/* Ghidra address: 00b64a00 */
/* Ghidra symbol: FUN_00b64a00 */


void FUN_00b64a00(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [32];
  
  FUN_00b62ce0(param_1,0x809);
  FUN_00b62ce0(param_1,0x10);
  FUN_00b62ce0(param_1,0x600);
  FUN_00b62ce0(param_1,5);
  FUN_00b62ce0(param_1,0x1846);
  FUN_00b62ce0(param_1,0x7cd);
  FUN_00b62ce0(param_1,0x40c1);
  FUN_00b62ce0(param_1,0);
  FUN_00b62ce0(param_1,0x106);
  FUN_00b62ce0(param_1,0);
  FUN_00b64860(auStack_38);
  FUN_00b62ce0(param_1,0xe1);
  FUN_00b62ce0(param_1,2);
  FUN_00b62ce0(param_1,0x4b0);
  FUN_00b62ce0(param_1,0xc1);
  FUN_00b62ce0(param_1,0);
  FUN_00b62ce0(param_1,0xe2);
  FUN_00b62ce0(param_1,0);
  FUN_00b62ce0(param_1,0x1c0);
  FUN_00b62ce0(param_1,0);
  FUN_00b62ce0(param_1,0x161);
  FUN_00b62ce0(param_1,2);
  FUN_00b62ce0(param_1,0);
  FUN_00b62ce0(param_1,0x13d);
  iVar1 = FUN_00b59a10(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8));
  FUN_00b62ce0(param_1,iVar1 * 2);
  iVar1 = FUN_00b59a10();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00b62ce0(param_1,iVar2);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00b64770(auStack_38);
  FUN_00b62ce0(param_1,0x3d);
  FUN_00b62ce0(param_1,0x12);
  FUN_00b62d20(param_1,PTR_DAT_02004a50,0x12);
  FUN_00b62ce0(param_1,0x8d);
  FUN_00b62ce0(param_1,2);
  FUN_00b62ce0(param_1,0);
  FUN_00b62ce0(param_1,0x22);
  FUN_00b62ce0(param_1,2);
  FUN_00b62ce0(param_1,0);
  FUN_00b678a0(param_1);
  FUN_00b67980(param_1);
  FUN_00b67c10(param_1);
  FUN_00b67e70(param_1);
  FUN_00b64990(auStack_38);
  iVar1 = FUN_00b59a10();
  if (-1 < iVar1 + -1) {
    do {
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x68),0);
      FUN_00b64450(auStack_38);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00b64940(auStack_38);
  FUN_00b67f70(param_1);
  FUN_00b64640(auStack_38);
  FUN_00b62ce0(param_1,0x1c1);
  FUN_00b62ce0(param_1,8);
  FUN_00b62d20(param_1,PTR_DAT_020014c8,8);
  FUN_00b67760(param_1);
  FUN_00b62ce0(param_1,10);
  FUN_00b62ce0(param_1,0);
  return;
}

