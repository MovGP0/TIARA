/* Ghidra address: 00705830 */
/* Ghidra symbol: FUN_00705830 */


void FUN_00705830(longlong param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  bool bVar2;
  
  if (*(byte *)(param_1 + 0x580) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_1 + 0x580) & 0x1f)
            & 3U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_0065b830(param_1);
    uVar1 = FUN_00416740(param_2);
    thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x4f8),0xc2,0,uVar1);
  }
  return;
}

