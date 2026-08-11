/* Ghidra address: 01686d30 */
/* Ghidra symbol: FUN_01686d30 */


ulonglong FUN_01686d30(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  if (*(char *)(param_3 + 0x330) != '\0') {
    iVar2 = FUN_016eebb0(param_2,*(undefined2 *)(param_1 + 0xb8),0);
    uVar5 = FUN_00b90620(*(double *)(param_1 + 0x70) * 0.01 * *(double *)(param_3 + 0x730),
                         *(undefined8 *)(param_3 + 0x720));
    if (1e-12 < *(double *)(param_1 + 0x280)) {
      uVar3 = FUN_016ee040(param_2,param_3,iVar2 + 10,*(undefined8 *)(param_1 + 0x70),uVar5);
      uVar4 = (ulonglong)uVar3;
    }
    if (1e-12 < *(double *)(param_1 + 0x288)) {
      bVar1 = FUN_016ee040(param_2,param_3,iVar2 + 0xb,*(undefined8 *)(param_1 + 0x70),uVar5);
      uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 | bVar1);
    }
    if ((*(char *)(param_1 + 0xb) != -1) && (1e-12 < *(double *)(param_1 + 0x298))) {
      bVar1 = FUN_016ee040(param_2,param_3,iVar2 + 0xc,*(undefined8 *)(param_1 + 0x70),uVar5);
      uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 | bVar1);
    }
  }
  return uVar4;
}

