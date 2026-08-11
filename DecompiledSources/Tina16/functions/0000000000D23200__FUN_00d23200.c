/* Ghidra address: 00d23200 */
/* Ghidra symbol: FUN_00d23200 */


/* WARNING: Removing unreachable block (ram,0x00d23233) */

void FUN_00d23200(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  byte bVar2;
  bool bVar3;
  
  bVar2 = (byte)param_4;
  if (bVar2 == 1) {
    if ((*(byte *)(param_1 + 0x20) & 2) != 0) {
      FUN_00d22a60(param_1,param_2,param_2,param_3);
    }
    FUN_00cd57a0(param_1,param_2,param_3,param_4);
  }
  else {
    uVar1 = FUN_00cd57a0(param_1,param_2,param_3,param_4);
    if (bVar2 < 8) {
      bVar3 = ((byte)((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << (bVar2 & 0x1f)) &
              *(byte *)(param_1 + 0x20)) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      FUN_00d222a0(param_1,param_2,param_2,param_3);
    }
  }
  return;
}

