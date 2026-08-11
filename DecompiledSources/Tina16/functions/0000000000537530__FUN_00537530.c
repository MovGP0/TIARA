/* Ghidra address: 00537530 */
/* Ghidra symbol: FUN_00537530 */


undefined4 FUN_00537530(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  byte *pbVar6;
  
  uVar3 = FUN_00537480(param_1);
  if ((char)uVar3 != '\0') {
    *param_2 = 0;
    cVar2 = FUN_005360d0(param_1);
    if (cVar2 == '\0') {
      pcVar4 = (char *)FUN_00536180(param_1);
      cVar2 = *pcVar4;
      if (((byte)(cVar2 - 1U) < 3) || (cVar2 == '\t')) {
        uVar5 = FUN_00536180(param_1);
        pbVar6 = (byte *)FUN_00589390(uVar5);
        bVar1 = *pbVar6;
        if (bVar1 < 4) {
          if (bVar1 == 3) {
            *param_2 = (ulonglong)*(ushort *)(param_1 + 0x10);
          }
          else if (bVar1 == 0) {
            *param_2 = (longlong)*(char *)(param_1 + 0x10);
          }
          else if (bVar1 == 1) {
            *param_2 = (ulonglong)*(byte *)(param_1 + 0x10);
          }
          else if (bVar1 == 2) {
            *param_2 = (longlong)*(short *)(param_1 + 0x10);
          }
        }
        else if (bVar1 == 4) {
          *param_2 = (longlong)*(int *)(param_1 + 0x10);
        }
        else if (bVar1 == 5) {
          *param_2 = (ulonglong)*(uint *)(param_1 + 0x10);
        }
      }
      else if (cVar2 == '\x10') {
        *param_2 = *(ulonglong *)(param_1 + 0x10);
      }
    }
  }
  return uVar3;
}

