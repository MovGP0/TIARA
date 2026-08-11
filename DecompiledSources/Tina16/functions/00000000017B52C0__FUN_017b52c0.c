/* Ghidra address: 017b52c0 */
/* Ghidra symbol: FUN_017b52c0 */


undefined8 FUN_017b52c0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  if (iVar1 + 1 == 0) {
    uVar2 = 0x19;
  }
  else {
    uVar2 = CONCAT62((uint6)(ushort)((uint)(iVar1 + 1) >> 0x10),0xffea);
  }
  return uVar2;
}

