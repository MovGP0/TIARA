/* Ghidra address: 01cfd920 */
/* Ghidra symbol: FUN_01cfd920 */


undefined4 FUN_01cfd920(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if (param_1[0x1b] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x1c8))(param_1);
    uVar2 = 0xffffffff;
    if ((param_2 <= iVar1 + -1) && (-1 < param_2)) {
      uVar2 = *(undefined4 *)(param_1[0x1b] + 8 + (longlong)param_2 * 0x10c);
    }
  }
  return uVar2;
}

