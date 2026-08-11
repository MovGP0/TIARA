/* Ghidra address: 01c01860 */
/* Ghidra symbol: FUN_01c01860 */


undefined8 FUN_01c01860(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((-1 < param_2) && (iVar1 = (**(code **)(*param_1 + 0x2e8))(param_1), param_2 < iVar1)) {
    uVar2 = FUN_01c019a0(param_1);
    lVar3 = FUN_01bfb960(uVar2,param_2);
    return *(undefined8 *)(lVar3 + 0x80);
  }
  return 0;
}

