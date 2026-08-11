/* Ghidra address: 01cfd880 */
/* Ghidra symbol: FUN_01cfd880 */


undefined4 FUN_01cfd880(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1[0x1b] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x1c8))(param_1);
    uVar2 = 0;
    if ((param_2 <= iVar1 + -1) && (-1 < param_2)) {
      uVar2 = *(undefined4 *)(param_1[0x1b] + 4 + (longlong)param_2 * 0x10c);
    }
  }
  return uVar2;
}

