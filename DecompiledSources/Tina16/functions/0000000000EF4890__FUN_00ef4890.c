/* Ghidra address: 00ef4890 */
/* Ghidra symbol: FUN_00ef4890 */


void FUN_00ef4890(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  bVar1 = 0;
  do {
    bVar2 = 0;
    do {
      uVar3 = (ulonglong)bVar1;
      uVar4 = (ulonglong)bVar2;
      if (*(longlong *)(*param_1 + uVar3 * 0x200 + uVar4 * 8) != 0) {
        FUN_004095f0(*(undefined8 *)(*param_1 + uVar3 * 0x200 + uVar4 * 8));
        *(undefined8 *)(*param_1 + uVar3 * 0x200 + uVar4 * 8) = 0;
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 != 0x40);
    bVar1 = bVar1 + 1;
  } while (bVar1 != 0x40);
  return;
}

