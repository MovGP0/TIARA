/* Ghidra address: 0176c350 */
/* Ghidra symbol: FUN_0176c350 */


int FUN_0176c350(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  iVar1 = FUN_01769b90(param_1,param_2);
  FUN_004b9ec0(*(undefined8 *)(param_1 + 0xb8));
  if (((*(char *)(param_1 + 0xb0) == '\0') && (*(char *)(param_2 + 0x7c) == '\0')) ||
     (*(char *)(param_2 + 0x7d) != '\0')) {
    FUN_0176c1a0(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_2 + 0x78),
                 *(undefined8 *)(param_1 + 0xb8));
  }
  else {
    FUN_0176c330(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_2 + 0x78),param_1 + 0xb8);
  }
  if (*(char *)(param_2 + 0x7c) != '\0') {
    *(undefined1 *)(param_1 + 0xb0) = 1;
  }
  uVar2 = (**(code **)**(undefined8 **)(param_1 + 0xb8))(*(undefined8 **)(param_1 + 0xb8));
  iVar1 = iVar1 + 4 + (int)uVar2;
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (*(byte *)(param_2 + 0x78) & 0x1f) &
            0x3dU) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

