/* Ghidra address: 00b29a30 */
/* Ghidra symbol: FUN_00b29a30 */


uint FUN_00b29a30(longlong param_1,short param_2,short param_3,short param_4,byte param_5)

{
  int iVar1;
  short *psVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0xffffffff;
  iVar1 = FUN_00b28e10();
  uVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      psVar2 = (short *)FUN_00b28df0(param_1,uVar5);
      if (((*psVar2 == param_2) &&
          (lVar3 = FUN_00b28df0(param_1,uVar5), *(short *)(lVar3 + 2) == param_3)) &&
         (lVar3 = FUN_00b28df0(param_1,uVar5), *(short *)(lVar3 + 4) == param_4)) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((param_5 & 1) != 0) {
    psVar2 = (short *)FUN_004095c0(6);
    *psVar2 = param_2;
    psVar2[1] = param_3;
    psVar2[2] = param_4;
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),psVar2);
    uVar4 = (uint)(ushort)(*(short *)(*(longlong *)(param_1 + 0x10) + 0x10) - 1);
  }
  return uVar4;
}

