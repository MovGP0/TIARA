/* Ghidra address: 005889e0 */
/* Ghidra symbol: FUN_005889e0 */


longlong FUN_005889e0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  
  if (**(ushort **)(param_1 + 0xe0) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) <<
             ((byte)**(ushort **)(param_1 + 0xe0) & 0x1f) & 0xf0U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_00464c60(*(undefined8 *)(param_1 + 0xe0));
    lVar1 = FUN_0040c840();
  }
  else {
    lVar1 = FUN_004634b0(*(undefined8 *)(param_1 + 0xe0));
  }
  if ((lVar1 < param_2) || (param_3 < lVar1)) {
    FUN_00588420();
  }
  return lVar1;
}

