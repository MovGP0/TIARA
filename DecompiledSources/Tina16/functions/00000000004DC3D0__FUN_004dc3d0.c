/* Ghidra address: 004dc3d0 */
/* Ghidra symbol: FUN_004dc3d0 */


undefined4 FUN_004dc3d0(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 unaff_RSI;
  
  if ((*(uint *)(param_1 + 4) & 9) != 8) {
    cVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    if (cVar1 != '\0') {
      uVar2 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      goto LAB_004dc3ff;
    }
  }
  uVar2 = 0;
LAB_004dc3ff:
  if ((char)uVar2 != '\0') {
    FUN_004dc660(param_1,8,8);
  }
  return uVar2;
}

