/* Ghidra address: 01cfdae0 */
/* Ghidra symbol: FUN_01cfdae0 */


undefined8 FUN_01cfdae0(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1[0x1c] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x1d0))(param_1);
    if ((param_2 <= iVar1 + -1) && (-1 < param_2)) {
      uVar2 = *(undefined8 *)(param_1[0x1c] + (longlong)param_2 * 8);
    }
  }
  return uVar2;
}

