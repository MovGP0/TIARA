/* Ghidra address: 007423f0 */
/* Ghidra symbol: FUN_007423f0 */


ulonglong FUN_007423f0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 unaff_R13;
  bool bVar5;
  
  uVar4 = (ulonglong)*(ushort *)(param_1 + 0x34);
  if ((*(ushort *)(param_1 + 0x34) & 0x10) != 0) {
    iVar1 = FUN_00605610(*(undefined8 *)(param_1 + 0x318));
    if (iVar1 < 1) goto LAB_00742499;
    uVar4 = FUN_00605640(*(undefined8 *)(param_1 + 0x318));
    if ((int)uVar4 < 1) goto LAB_00742499;
  }
  if (*(byte *)(param_1 + 0xad) < 8) {
    uVar2 = (int)CONCAT71((int7)(uVar4 >> 8),1) << (*(byte *)(param_1 + 0xad) & 0x1f);
    uVar4 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),(uVar2 & 0x19) != 0);
  }
  else {
    uVar4 = 0;
  }
  if ((char)uVar4 != '\0') {
    uVar4 = FUN_00605610(*(undefined8 *)(param_1 + 0x318));
    *param_2 = (int)uVar4;
  }
  if (*(byte *)(param_1 + 0xad) < 8) {
    bVar5 = ((int)CONCAT71((int7)(uVar4 >> 8),1) << (*(byte *)(param_1 + 0xad) & 0x1f) & 7U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    uVar3 = FUN_00605640(*(undefined8 *)(param_1 + 0x318));
    *param_3 = uVar3;
  }
LAB_00742499:
  return CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1) & 0xffffffff;
}

