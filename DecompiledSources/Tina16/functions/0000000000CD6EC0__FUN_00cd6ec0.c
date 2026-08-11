/* Ghidra address: 00cd6ec0 */
/* Ghidra symbol: FUN_00cd6ec0 */


undefined8 * FUN_00cd6ec0(longlong param_1,undefined8 *param_2,byte *param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  FUN_004144d0(param_2);
  if (param_3 != (byte *)0x0) {
    if (param_4 < 0) {
      param_4 = FUN_00414ce0(param_3);
    }
    if (param_4 != 0) {
      FUN_00415d10(param_2,(param_4 * 4) / 3 + param_4 / 0x2d + 10);
      puVar1 = (undefined1 *)FUN_00415ab0(*param_2);
      lVar2 = (**(code **)(param_1 + 0x28))(param_1);
      while (0 < param_4) {
        iVar3 = param_4;
        if (0x2d < param_4) {
          iVar3 = 0x2d;
        }
        param_4 = param_4 - iVar3;
        *puVar1 = *(undefined1 *)(lVar2 + iVar3);
        while (0 < iVar3) {
          uVar6 = 0;
          iVar4 = 3;
          do {
            uVar5 = (int)uVar6 << 8;
            if (0 < iVar3) {
              uVar5 = uVar5 | *param_3;
              param_3 = param_3 + 1;
            }
            uVar6 = (ulonglong)uVar5;
            iVar3 = iVar3 + -1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          iVar4 = 4;
          do {
            puVar1[iVar4] = *(undefined1 *)(lVar2 + (ulonglong)((uint)uVar6 & 0x3f));
            uVar6 = uVar6 >> 6;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          puVar1 = puVar1 + 4;
        }
        puVar1 = puVar1 + 1;
      }
      lVar2 = FUN_00415ab0(*param_2);
      FUN_00415d10(param_2,(longlong)puVar1 - lVar2,0);
    }
  }
  return param_2;
}

