/* Ghidra address: 017bb890 */
/* Ghidra symbol: FUN_017bb890 */


void FUN_017bb890(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_2 != 0) {
    lVar2 = param_2;
    bVar1 = FUN_0198a580(param_2);
    if (bVar1 < 0x10) {
      bVar3 = ((int)CONCAT62((int6)((ulonglong)lVar2 >> 0x10),1) << (bVar1 & 0x1f) & 0x220U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      FUN_0198b6d0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x10),param_2);
    }
  }
  return;
}

