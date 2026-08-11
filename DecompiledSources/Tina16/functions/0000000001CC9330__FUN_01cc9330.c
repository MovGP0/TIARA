/* Ghidra address: 01cc9330 */
/* Ghidra symbol: FUN_01cc9330 */


ulonglong FUN_01cc9330(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_R13;
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x28);
  if (bVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
              (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x30),1);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(*(longlong **)(param_1 + 0x18),param_2,8);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(*(longlong **)(param_1 + 0x18),param_3,8);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
              (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x34),1);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  return CONCAT71((int7)((ulonglong)unaff_R13 >> 8),bVar1) & 0xffffffff;
}

