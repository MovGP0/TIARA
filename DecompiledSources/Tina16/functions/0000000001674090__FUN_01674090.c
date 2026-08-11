/* Ghidra address: 01674090 */
/* Ghidra symbol: FUN_01674090 */


ulonglong FUN_01674090(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  double dVar6;
  
  uVar4 = 0;
  if (*(char *)(param_3 + 0x330) != '\0') {
    iVar2 = FUN_016eebb0(param_2,*(undefined2 *)(param_1 + 0x128),0);
    dVar6 = *(double *)(param_3 + 0x730) * 0.01;
    uVar5 = *(undefined8 *)(param_3 + 0x720);
    if (1e-12 < *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 1) * 8)) {
      uVar5 = FUN_00b90620(dVar6 * *(double *)(param_1 + 200),uVar5);
      uVar3 = FUN_016ede00(param_2,param_3,*(undefined4 *)(param_1 + 0x2c),
                           *(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 200),uVar5);
      uVar4 = (ulonglong)uVar3;
    }
    if (1e-12 < *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 0x14) * 8)) {
      uVar5 = FUN_00b90620(dVar6 * *(double *)(param_1 + 0xd0),uVar5);
      bVar1 = FUN_016ede00(param_2,param_3,*(undefined4 *)(param_1 + 0x30),
                           *(undefined4 *)(param_1 + 0x24),*(undefined8 *)(param_1 + 0xd0),uVar5);
      uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 | bVar1);
    }
    if (1e-12 < *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 0x15) * 8)) {
      uVar5 = FUN_00b90620(dVar6 * *(double *)(param_1 + 0xd8),uVar5);
      bVar1 = FUN_016ede00(param_2,param_3,*(undefined4 *)(param_1 + 0x30),
                           *(undefined4 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0xd8),uVar5);
      uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 | bVar1);
    }
  }
  return uVar4;
}

