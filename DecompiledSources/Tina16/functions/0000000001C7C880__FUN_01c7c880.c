/* Ghidra address: 01c7c880 */
/* Ghidra symbol: FUN_01c7c880 */


void FUN_01c7c880(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  
  FUN_01c80630(param_1);
  lVar2 = FUN_01c7acf0(param_1);
  if (lVar2 == 0) {
    *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02002d20 + 0xb48) + 0x5f8) = 0;
  }
  else {
    bVar1 = *(byte *)(lVar2 + 0x1c);
    if (bVar1 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar1 & 0x1f) & 0x26U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      if (bVar1 < 8 && (1 << (bVar1 & 0x1f) & 0x22U) != 0) {
        *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02002d20 + 0xb48) + 0x5f8) = 1;
      }
      else {
        *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02002d20 + 0xb48) + 0x5f8) = 2;
      }
    }
  }
  *(undefined1 *)(*(longlong *)PTR_DAT_02002d20 + 0xb43) =
       *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02002d20 + 0xb48) + 0x5f8);
  return;
}

