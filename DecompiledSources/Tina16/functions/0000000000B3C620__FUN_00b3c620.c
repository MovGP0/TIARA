/* Ghidra address: 00b3c620 */
/* Ghidra symbol: FUN_00b3c620 */


void FUN_00b3c620(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ushort uVar3;
  byte bVar4;
  short sVar5;
  char cVar6;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  uVar2 = FUN_00b1ae90(&DAT_00b1a180,1,0x1fff);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  FUN_004aef40(uVar2,(((uint)*(ushort *)(param_1 + 0x1a) - (uint)*(ushort *)(param_1 + 0x18)) + 1) *
                     (((uint)*(byte *)(param_1 + 0x1d) - (uint)*(byte *)(param_1 + 0x1c)) + 1));
  uVar3 = *(ushort *)(param_1 + 0x18);
  if (uVar3 <= *(ushort *)(param_1 + 0x1a)) {
    sVar5 = (*(ushort *)(param_1 + 0x1a) - uVar3) + 1;
    do {
      bVar4 = *(byte *)(param_1 + 0x1c);
      if (bVar4 <= *(byte *)(param_1 + 0x1d)) {
        cVar6 = (*(byte *)(param_1 + 0x1d) - bVar4) + '\x01';
        do {
          FUN_00b3b4a0(local_40,*(undefined8 *)(param_1 + 8),uVar3,bVar4);
          iVar1 = FUN_00b1b100(*(undefined8 *)(param_1 + 0x20),local_40);
          if (iVar1 < 0) {
            iVar1 = FUN_00b1b130(*(undefined8 *)(param_1 + 0x20));
            FUN_00b1b070(*(undefined8 *)(param_1 + 0x20),local_40[0]);
          }
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),(longlong)iVar1);
          bVar4 = bVar4 + 1;
          cVar6 = cVar6 + -1;
        } while (cVar6 != '\0');
      }
      uVar3 = uVar3 + 1;
      sVar5 = sVar5 + -1;
    } while (sVar5 != 0);
  }
  FUN_004144d0(local_40);
  return;
}

