/* Ghidra address: 00ea1420 */
/* Ghidra symbol: FUN_00ea1420 */


undefined8 FUN_00ea1420(ushort *param_1,ulonglong param_2,undefined4 *param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if ((int)param_2 < 0) {
    puVar2 = param_1 + -1;
    do {
      puVar1 = puVar2 + 1;
      puVar2 = puVar2 + 1;
    } while (*puVar1 != 0);
    param_2 = (ulonglong)((longlong)puVar2 - (longlong)param_1) >> 1;
  }
  uVar3 = (uint)param_2;
  puVar2 = param_1;
  do {
    if ((int)uVar3 < 1) {
      return 0;
    }
    uVar3 = (int)param_2 - 1;
    if ((*puVar2 & 0xf800) == 0xd800) {
      if ((*puVar2 & 0x400) != 0) {
        uVar4 = 3;
LAB_00ea14b1:
        *param_3 = (int)((ulonglong)((longlong)puVar2 - (longlong)param_1) >> 1);
        return uVar4;
      }
      if (uVar3 == 0) {
        uVar4 = 1;
        goto LAB_00ea14b1;
      }
      puVar1 = puVar2 + 1;
      puVar2 = puVar2 + 1;
      if ((*puVar1 & 0xfc00) != 0xdc00) {
        uVar4 = 2;
        goto LAB_00ea14b1;
      }
      uVar3 = (int)param_2 - 2;
    }
    puVar2 = puVar2 + 1;
    param_2 = (ulonglong)uVar3;
  } while( true );
}

