/* Ghidra address: 01111380 */
/* Ghidra symbol: FUN_01111380 */


void FUN_01111380(longlong *param_1,undefined2 param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  
  *(undefined2 *)((longlong)param_1 + 0x5ba) = param_2;
  bVar1 = 0;
  do {
    if (bVar1 < 0x10) {
      bVar2 = ((ushort)((int)CONCAT62((int6)((ulonglong)param_3 >> 0x10),1) << (bVar1 & 0x1f)) &
              *(ushort *)((longlong)param_1 + 0x5ba)) != 0;
    }
    else {
      bVar2 = false;
    }
    param_3 = 0;
    *(bool *)((longlong)param_1 + (ulonglong)bVar1 * 0x20 + 0x499) = bVar2;
    bVar1 = bVar1 + 1;
  } while (bVar1 != 9);
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

