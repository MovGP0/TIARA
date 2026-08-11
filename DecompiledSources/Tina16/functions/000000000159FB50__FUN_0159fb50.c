/* Ghidra address: 0159fb50 */
/* Ghidra symbol: FUN_0159fb50 */


undefined8 FUN_0159fb50(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(undefined4 *)(lVar1 + 0x2c) = 0;
    *(undefined4 *)(lVar1 + 0x30) = 0;
    *(undefined4 *)(lVar1 + 0x34) = 0;
    uVar2 = FUN_015a0160(param_1);
  }
  return uVar2;
}

