/* Ghidra address: 00b606e0 */
/* Ghidra symbol: FUN_00b606e0 */


undefined8 FUN_00b606e0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x44) = 1;
  uVar2 = FUN_00b5c270(*(undefined8 *)(param_1 + 0x60));
  if ((char)uVar2 != '\0') {
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x78) + 0x10);
    if ((iVar1 == 0x3c) || (iVar1 == 0xeb)) {
      uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

