/* Ghidra address: 0074c910 */
/* Ghidra symbol: FUN_0074c910 */


void FUN_0074c910(longlong *param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  bool bVar3;
  uint local_30;
  undefined4 local_2c [3];
  
  FUN_00650d70(param_1,param_2,param_3,param_4);
  if (((param_2 & 8) != 0) && (param_1[0x66] != 0)) {
    FUN_0074c7b0(param_1,param_3,param_4,local_2c,&local_30);
    uVar1 = (**(code **)(*param_1 + 0x1b8))(param_1,local_2c);
    if ((char)uVar1 != '\0') {
      if (*(byte *)(param_1 + 0x6f) < 8) {
        bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) <<
                 (*(byte *)(param_1 + 0x6f) & 0x1f) & 10U) != 0;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        FUN_0074ba60(param_1);
      }
      *(undefined4 *)((longlong)param_1 + 0x354) = local_2c[0];
      uVar2 = (ulonglong)local_30;
      *(uint *)((longlong)param_1 + 0x37c) = local_30;
      if ((char)param_1[0x6f] == '\x02') {
        uVar2 = FUN_0074c580(param_1);
      }
      if (*(byte *)(param_1 + 0x6f) < 8) {
        bVar3 = ((int)CONCAT71((int7)(uVar2 >> 8),1) << (*(byte *)(param_1 + 0x6f) & 0x1f) & 10U) !=
                0;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        FUN_0074ba60(param_1);
      }
    }
  }
  return;
}

