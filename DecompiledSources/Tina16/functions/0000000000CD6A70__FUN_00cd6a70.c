/* Ghidra address: 00cd6a70 */
/* Ghidra symbol: FUN_00cd6a70 */


undefined8 * FUN_00cd6a70(longlong param_1,undefined8 *param_2,byte *param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  FUN_004144d0(param_2);
  if (param_3 != (byte *)0x0) {
    if (param_4 < 0) {
      param_4 = FUN_00414ce0(param_3);
    }
    if (param_4 != 0) {
      FUN_00415d10(param_2,(param_4 * 4) / 3 + 4,0);
      lVar2 = FUN_00415ab0(*param_2);
      lVar3 = (**(code **)(param_1 + 0x28))(param_1);
      while (0 < param_4) {
        uVar1 = 0;
        iVar4 = 3;
        do {
          uVar1 = uVar1 << 8;
          if (0 < param_4) {
            uVar1 = uVar1 | *param_3;
            param_3 = param_3 + 1;
          }
          param_4 = param_4 + -1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        iVar4 = 3;
        do {
          if (param_4 < 0) {
            *(undefined1 *)(lVar2 + iVar4) = *(undefined1 *)(lVar3 + 0x40);
            param_4 = param_4 + 1;
          }
          else {
            *(undefined1 *)(lVar2 + iVar4) = *(undefined1 *)(lVar3 + (ulonglong)(uVar1 & 0x3f));
          }
          uVar1 = uVar1 >> 6;
          iVar4 = iVar4 + -1;
        } while (iVar4 != -1);
        lVar2 = lVar2 + 4;
      }
      lVar3 = FUN_00415ab0(*param_2);
      FUN_00415d10(param_2,lVar2 - lVar3,0);
    }
  }
  return param_2;
}

