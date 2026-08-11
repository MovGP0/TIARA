/* Ghidra address: 01be77e0 */
/* Ghidra symbol: FUN_01be77e0 */


undefined8 FUN_01be77e0(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((-1 < param_2) && (iVar1 = (**(code **)(*param_1 + 0x2e8))(param_1), param_2 < iVar1)) {
    uVar2 = FUN_01bfaa70(param_1[0x93]);
    lVar3 = FUN_01bfb960(uVar2,param_2);
    return *(undefined8 *)(lVar3 + 0x80);
  }
  return 0;
}

