/* Ghidra address: 010e1a60 */
/* Ghidra symbol: FUN_010e1a60 */


undefined8 FUN_010e1a60(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x7f9);
  if (*(longlong *)(*(longlong *)(param_1 + 0x8c0) + 0x88 + (ulonglong)bVar1 * 0x20) == 0) {
    uVar2 = FUN_010e1810(&PTR_FUN_01133e90,CONCAT71((int7)((ulonglong)bVar1 * 4 >> 8),1),
                         *(undefined8 *)PTR_DAT_02004030,0,bVar1,3,0,0,0);
    *(undefined8 *)
     (*(longlong *)(param_1 + 0x8c0) + 0x88 + (ulonglong)*(byte *)(param_1 + 0x7f9) * 0x20) = uVar2;
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x8c0) >> 8),
                     *(longlong *)
                      (*(longlong *)(param_1 + 0x8c0) + 0x88 +
                      (ulonglong)*(byte *)(param_1 + 0x7f9) * 0x20) != 0);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

