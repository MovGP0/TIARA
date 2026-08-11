/* Ghidra address: 00faccc0 */
/* Ghidra symbol: FUN_00faccc0 */


void FUN_00faccc0(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  
  cVar2 = FUN_00facb10(param_1);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x704);
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x960) = 0;
    }
    else if (iVar1 == 4) {
      *(undefined4 *)(param_1 + 0x960) = 1;
    }
    else if (iVar1 == 0x10) {
      *(undefined4 *)(param_1 + 0x960) = 2;
    }
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_1 + 0x708);
    uVar3 = FUN_0040c770(*(undefined8 *)(param_1 + 0x728));
    *(uint *)(param_1 + 0x968) = uVar3 >> 2;
    *(uint *)(param_1 + 0x96c) = (uVar3 & 3) << 4;
    *(undefined8 *)(param_1 + 0x978) = *(undefined8 *)(param_1 + 0x718);
    *(undefined8 *)(param_1 + 0x980) = *(undefined8 *)(param_1 + 0x710);
  }
  return;
}

