/* Ghidra address: 00cd1a90 */
/* Ghidra symbol: FUN_00cd1a90 */


undefined8 FUN_00cd1a90(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = (**(code **)PTR_DAT_02005578)(*(undefined8 *)(param_1 + 0x18));
    if (lVar1 != 0) {
      uVar2 = FUN_00cd2cb0(&PTR_FUN_00cc9b60,1,lVar1,0);
      *(undefined8 *)(param_1 + 0x10) = uVar2;
    }
  }
  return *(undefined8 *)(param_1 + 0x10);
}

