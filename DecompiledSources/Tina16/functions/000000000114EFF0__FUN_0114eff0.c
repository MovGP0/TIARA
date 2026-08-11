/* Ghidra address: 0114eff0 */
/* Ghidra symbol: FUN_0114eff0 */


undefined8 FUN_0114eff0(longlong param_1,byte param_2,ulonglong param_3,char param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  bool bVar6;
  undefined8 uVar7;
  
  bVar5 = (byte)param_3;
  if ((param_2 == 0) && (bVar5 == 0)) {
    uVar7 = FUN_00409eb0();
  }
  else {
    uVar3 = 0;
    uVar1 = 0;
    if (bVar5 == 0) {
      uVar4 = (ushort)param_2;
      uVar2 = 1;
      if (param_2 != 0) {
        do {
          if ((ushort)uVar2 < 0x100) {
            bVar6 = (*(byte *)(param_1 + 0x60 + ((longlong)uVar2 >> 3)) >> (uVar2 & 7) & 1) != 0;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) {
            uVar3 = uVar3 + 1;
          }
          uVar2 = (ulonglong)(ushort)((ushort)uVar2 + 1);
          uVar4 = uVar4 - 1;
          uVar1 = uVar3;
        } while (uVar4 != 0);
      }
      uVar3 = *(ushort *)(param_1 + 0x40);
    }
    else if (param_2 == 0) {
      uVar4 = (ushort)param_3 & 0xff;
      uVar2 = 1;
      if ((param_3 & 0xff) != 0) {
        do {
          if ((ushort)uVar2 < 0x100) {
            bVar6 = (*(byte *)(param_1 + 0x80 + ((longlong)uVar2 >> 3)) >> (uVar2 & 7) & 1) != 0;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) {
            uVar3 = uVar3 + 1;
          }
          uVar2 = (ulonglong)(ushort)((ushort)uVar2 + 1);
          uVar4 = uVar4 - 1;
          uVar1 = uVar3;
        } while (uVar4 != 0);
      }
      uVar3 = *(ushort *)(param_1 + 0x4a);
    }
    else {
      uVar3 = *(ushort *)(param_1 + 0x42);
      uVar1 = FUN_0114ef80(param_1,CONCAT62((int6)(param_3 >> 0x10),
                                            (ushort)bVar5 + (ushort)param_2 * 0x100) & 0xffffffff);
    }
    if (param_4 == '\0') {
      uVar7 = *(undefined8 *)
               (*(longlong *)(param_1 + 0x50) + -8 + (ulonglong)((uint)uVar3 + (uint)uVar1 * 2) * 8)
      ;
    }
    else {
      uVar7 = *(undefined8 *)
               (*(longlong *)(param_1 + 0x50) + -8 +
               (longlong)(int)((uint)uVar3 + (uint)uVar1 * 2 + -1) * 8);
    }
  }
  return uVar7;
}

