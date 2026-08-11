/* Ghidra address: 00b3ef80 */
/* Ghidra symbol: FUN_00b3ef80 */


ulonglong FUN_00b3ef80(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined6 uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  
  uVar3 = 0;
  uVar4 = 0;
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = (ushort)*(undefined4 *)(param_1 + -4);
  }
  if (0xf < uVar6) {
    uVar3 = 1;
    uVar4 = 0;
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Sheet protection password must have 0-15 characters."
                        );
    param_1 = FUN_004134c0(uVar2);
  }
  uVar5 = 1;
  for (uVar7 = uVar6; uVar7 != 0; uVar7 = uVar7 - 1) {
    bVar1 = *(byte *)(param_1 + -1 + (ulonglong)uVar5);
    uVar3 = uVar3 ^ ((ushort)bVar1 << ((byte)uVar5 & 0x1f) & 0x7fff |
                    (ushort)(bVar1 >> (0xf - (byte)uVar5 & 0x1f)));
    uVar5 = uVar5 + 1;
  }
  return CONCAT62(uVar4,uVar3 ^ uVar6) & 0xffffffff ^ 0xce4b;
}

