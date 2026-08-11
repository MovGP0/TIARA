/* Ghidra address: 0082a1c0 */
/* Ghidra symbol: FUN_0082a1c0 */


void FUN_0082a1c0(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_00651da0(param_1);
  uVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
  if ((char)uVar2 == '\0') {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  FUN_00827a10(param_1[100],uVar1);
  return;
}

