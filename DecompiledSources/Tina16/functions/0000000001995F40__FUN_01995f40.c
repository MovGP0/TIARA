/* Ghidra address: 01995f40 */
/* Ghidra symbol: FUN_01995f40 */


bool FUN_01995f40(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  
  bVar4 = false;
  if (param_2 != (longlong *)0x0) {
    uVar2 = FUN_0198a580(param_2);
    if ((byte)uVar2 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << ((byte)uVar2 & 0x1f) & 0x32U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      uVar1 = (**(code **)(*param_2 + 0x1f8))
                        (param_2,*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
      **(undefined4 **)(param_1 + 0x80) = uVar1;
      bVar4 = **(int **)(param_1 + 0x80) != -1;
    }
  }
  return bVar4;
}

