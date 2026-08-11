/* Ghidra address: 004584d0 */
/* Ghidra symbol: FUN_004584d0 */


/* WARNING: Removing unreachable block (ram,0x0045855a) */
/* WARNING: Removing unreachable block (ram,0x00458576) */

double FUN_004584d0(ulonglong *param_1)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  double dVar4;
  
  uVar2 = FUN_00458420(param_1,3);
  uVar3 = *param_1 & 0xfffffffffffff;
  if ((uVar2 >> 4 & 0x7ff) == 0x7ff) {
    dVar4 = DAT_01dbe820;
    if ((uVar3 == 0) && (bVar1 = FUN_00458410(param_1,7), dVar4 = DAT_01dbe818, 0x7f < bVar1)) {
      dVar4 = DAT_01dbe810;
    }
  }
  else if ((uVar2 >> 4 & 0x7ff) == 0) {
    dVar4 = (double)uVar3 / 4503599627370496.0;
  }
  else {
    dVar4 = (double)uVar3 / 4503599627370496.0 + 1.0;
  }
  return dVar4;
}

