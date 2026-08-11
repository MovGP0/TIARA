/* Ghidra address: 0153a640 */
/* Ghidra symbol: FUN_0153a640 */


void FUN_0153a640(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  bool bVar4;
  
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 == '\x04') {
    sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
    cVar1 = FUN_0153a250(*(undefined1 *)(param_1 + 0x70),param_2);
    if (cVar1 != '\0') {
      if ((sVar2 != 0x3d) && (sVar2 != 0x65)) {
        cVar1 = FUN_01b05ff0(param_2);
        if (cVar1 == '\0') {
          **(int **)(param_1 + 0x68) = **(int **)(param_1 + 0x68) + 1;
          goto LAB_0153a6ac;
        }
      }
      **(int **)(param_1 + 0x68) = **(int **)(param_1 + 0x68) + 2;
    }
  }
LAB_0153a6ac:
  uVar3 = FUN_0198a580(param_2);
  if (((char)uVar3 == '\x06') && (-1 < (short)param_2[0x5b])) {
    if (*(byte *)(param_1 + 0x70) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (*(byte *)(param_1 + 0x70) & 0x1f)
              & 0x32U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      **(int **)(param_1 + 0x68) = **(int **)(param_1 + 0x68) + 1;
    }
  }
  return;
}

