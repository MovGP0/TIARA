/* Ghidra address: 01aab4c0 */
/* Ghidra symbol: FUN_01aab4c0 */


char FUN_01aab4c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 local_d0 [21];
  
  local_d0[0] = 0;
  *(undefined4 *)(param_1 + 0x19c1c) = 0;
  iVar6 = 0;
  do {
    cVar2 = FUN_01aab210(param_1);
    cVar3 = FUN_01aacbb0(param_1,0,0,0);
    iVar6 = iVar6 + 1;
    if (cVar3 == '\0') break;
  } while (iVar6 < 6);
  DAT_02110a54 = cVar2;
  if ((cVar2 != '\0') && (uVar7 = (uint)*(ushort *)(param_1 + 0x10), uVar7 != 0)) {
    plVar8 = (longlong *)(param_1 + 0x18);
    do {
      lVar1 = *plVar8;
      sVar4 = FUN_01d03160(*(undefined8 *)(lVar1 + 0x550));
      if ((((((sVar4 == 0x460) || (sVar4 == 0x461)) || (sVar4 == 0xbb9)) ||
           ((sVar4 == 0x32 || (sVar4 == 0x81)))) ||
          ((sVar4 == 0x87 || ((sVar4 == 0x33 || (sVar4 == 0x2c)))))) ||
         ((sVar4 == 0x8a || (sVar4 == 0x8b)))) {
        uVar5 = FUN_019a45d0();
        uVar5 = FUN_0198d430(uVar5);
        FUN_01d04aa0(*(undefined8 *)(lVar1 + 0x550),uVar5);
      }
      plVar8 = plVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_00414480(local_d0);
  return cVar2;
}

