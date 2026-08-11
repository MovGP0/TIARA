/* Ghidra address: 00a3c1f0 */
/* Ghidra symbol: FUN_00a3c1f0 */


longlong FUN_00a3c1f0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00a39e90();
  return (*(longlong *)(lVar1 + 0x470) +
         (ulonglong)(uint)((*(int *)(lVar1 + 0x48c) + -1) * *(int *)(lVar1 + 0x498))) -
         (longlong)(param_2 * *(int *)(lVar1 + 0x498));
}

