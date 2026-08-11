/* Ghidra address: 00a559d0 */
/* Ghidra symbol: FUN_00a559d0 */


void FUN_00a559d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar3;
  bool bVar5;
  undefined8 local_31;
  undefined1 uStack_29;
  ulonglong uVar4;
  
  local_31 = *param_2;
  uStack_29 = *(undefined1 *)(param_2 + 1);
  uVar4 = 0;
  do {
    if ((byte)uVar4 < 0x48) {
      uVar2 = (ulonglong)&local_31 & 7;
      uVar1 = (uVar4 & 0x7f) + uVar2 * 8;
      bVar5 = (*(byte *)((longlong)&local_31 + (((longlong)uVar1 >> 3) - uVar2)) >> (uVar1 & 7) & 1)
              != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      FUN_00a55820(param_1,uVar4,param_3);
    }
    bVar3 = (byte)uVar4 + 1;
    uVar4 = (ulonglong)bVar3;
  } while (bVar3 != 0x43);
  return;
}

