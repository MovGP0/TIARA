/* Ghidra address: 00a35880 */
/* Ghidra symbol: FUN_00a35880 */


uint FUN_00a35880(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 local_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  
  lVar4 = FUN_00a33f40(param_1);
  cVar1 = *(char *)(lVar4 + 0x491);
  if (cVar1 == '\0') {
    uVar2 = *(undefined1 *)(lVar4 + 0x6e + (ulonglong)*(byte *)(param_1 + 0x2a) * 4);
    uVar7 = (uint)CONCAT12(uVar2,CONCAT11(uVar2,uVar2));
  }
  else if (cVar1 == '\x02') {
    uVar7 = (uint)CONCAT12(*(undefined1 *)
                            (*(longlong *)(lVar4 + 0x18) + 0x169 +
                            (ulonglong)*(byte *)(param_1 + 0x2e)),
                           CONCAT11(*(undefined1 *)
                                     (*(longlong *)(lVar4 + 0x18) + 0x169 +
                                     (ulonglong)*(byte *)(param_1 + 0x2c)),
                                    *(undefined1 *)
                                     (*(longlong *)(lVar4 + 0x18) + 0x169 +
                                     (ulonglong)*(byte *)(param_1 + 0x2a))));
  }
  else {
    uVar7 = 0;
    if (cVar1 == '\x03') {
      uVar5 = FUN_00a33e30(*(undefined8 *)(*(longlong *)(lVar4 + 0x18) + 0x160));
      iVar8 = *(int *)(param_1 + 0x10);
      iVar6 = 0;
      uVar7 = 0;
      if (-1 < iVar8 + -1) {
        do {
          if (*(char *)(param_1 + 0x29 + (longlong)iVar6) == '\0') {
            uVar3 = FUN_00a38d30(uVar5,iVar6);
            uStack_1a = (undefined1)((uint)uVar3 >> 0x10);
            uStack_1b = (undefined1)((uint)uVar3 >> 8);
            local_1c = (undefined1)uVar3;
            return (uint)CONCAT12(local_1c,CONCAT11(uStack_1b,uStack_1a));
          }
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
  }
  return uVar7;
}

