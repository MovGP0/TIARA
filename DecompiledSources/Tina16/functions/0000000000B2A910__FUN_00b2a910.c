/* Ghidra address: 00b2a910 */
/* Ghidra symbol: FUN_00b2a910 */


uint FUN_00b2a910(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_00b28de0();
  uVar5 = 0;
  uVar4 = 0xffffffff;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_00b28dc0(param_1,uVar5);
      iVar2 = FUN_00416420(*(undefined8 *)(lVar3 + 8),param_2);
      if (iVar2 == 0) {
        iVar2 = FUN_00416420(param_2,0);
        uVar4 = uVar5;
        if (iVar2 == 0) {
          lVar3 = FUN_00b28dc0(param_1,uVar5);
          if (*(char *)(lVar3 + 0x21) != '\0') break;
        }
        iVar2 = FUN_00416420(param_2,0);
        if (iVar2 != 0) break;
      }
      uVar5 = uVar5 + 1;
      iVar1 = iVar1 + -1;
      uVar4 = 0xffffffff;
    } while (iVar1 != 0);
  }
  if ((short)uVar4 == -1) {
    lVar3 = FUN_00b282a0(&DAT_00b260d0,1);
    FUN_00414b90(lVar3 + 8,param_2);
    iVar1 = FUN_00416420(param_2,0);
    if (iVar1 == 0) {
      *(undefined1 *)(lVar3 + 0x21) = 1;
    }
    FUN_004ae7e0(*(undefined8 *)(param_1 + 8),lVar3);
    uVar4 = (uint)(ushort)(*(short *)(*(longlong *)(param_1 + 8) + 0x10) - 1);
  }
  return uVar4;
}

