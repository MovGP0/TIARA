/* Ghidra address: 01cc8040 */
/* Ghidra symbol: FUN_01cc8040 */


ulonglong FUN_01cc8040(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RDI;
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x28);
  if (bVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(*(longlong **)(param_1 + 0x18),param_2,8);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
              (*(longlong **)(param_1 + 0x18),param_3,*(int *)(param_1 + 0x2c) + -8);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar1) & 0xffffffff;
}

