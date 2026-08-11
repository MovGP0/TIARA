/* Ghidra address: 01ccb530 */
/* Ghidra symbol: FUN_01ccb530 */


ulonglong FUN_01ccb530(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RDI;
  bool bVar1;
  undefined1 local_30 [16];
  
  bVar1 = *(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x28);
  if (bVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(*(longlong **)(param_1 + 0x18),param_2,8);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
              (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x30),1);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(*(longlong **)(param_1 + 0x18),local_30,8)
    ;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(*(longlong **)(param_1 + 0x18),param_3,8);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
              (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x34),1);
    FUN_00c43b50(local_30,param_3);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar1) & 0xffffffff;
}

