/* Ghidra address: 017b1aa0 */
/* Ghidra symbol: FUN_017b1aa0 */


void FUN_017b1aa0(longlong param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  param_3 = param_3 & 0xffffffff;
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_017ad600(*(undefined4 *)(param_1 + 0x54));
    FUN_005fd6d0(param_2[0xf],uVar1);
    FUN_005fd4e0(param_2[0xf],*(undefined4 *)(param_1 + 0x50));
    FUN_005fd640(param_2[0xf],param_3);
    (**(code **)(*param_2 + 200))
              (param_2,DAT_01fa23a8 * *(int *)(param_1 + 0x18),
               DAT_01fa23ac * *(int *)(param_1 + 0x1c));
    (**(code **)(*param_2 + 0xc0))
              (param_2,DAT_01fa23a8 * *(int *)(param_1 + 0x48),
               DAT_01fa23ac * *(int *)(param_1 + 0x4c));
    if (*(char *)(param_1 + 0x21) != '\0') {
      if ((char)param_3 != '\x01') {
        param_3 = CONCAT71((int7)(param_3 >> 8),0xf);
      }
      FUN_005fd4e0(param_2[0xf],0x808080);
      FUN_005fd6d0(param_2[0xf],0);
      FUN_005fd640(param_2[0xf],param_3);
      FUN_005fdab0(param_2[0x10],0x808080);
      FUN_005fdcb0(param_2[0x10],0);
      iVar2 = DAT_01fa23a8 * *(int *)(param_1 + 0x18);
      iVar3 = DAT_01fa23a8 * *(int *)(param_1 + 0x1c);
      (**(code **)(*param_2 + 0xf8))(param_2,iVar2 + -2,iVar3 + -2,iVar2 + 3,iVar3 + 3);
      iVar2 = DAT_01fa23a8 * *(int *)(param_1 + 0x48);
      iVar3 = DAT_01fa23a8 * *(int *)(param_1 + 0x4c);
      (**(code **)(*param_2 + 0xf8))(param_2,iVar2 + -2,iVar3 + -2,iVar2 + 3,iVar3 + 3);
    }
  }
  return;
}

