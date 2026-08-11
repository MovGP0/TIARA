/* Ghidra address: 0104e320 */
/* Ghidra symbol: FUN_0104e320 */


void FUN_0104e320(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_006d68c0(*(undefined8 *)(param_1 + 0x7a8),0);
  uVar1 = FUN_01051600(param_1);
  *(undefined1 *)(param_1 + 0x940) = 1;
  (**(code **)(**(longlong **)(param_1 + 0x858) + 0x268))
            (*(longlong **)(param_1 + 0x858),CONCAT71((int7)((ulonglong)uVar1 >> 8),1) & 0xffffffff)
  ;
  if (*(longlong *)(param_1 + 0x9d8) != 0) {
    FUN_00f8d160(*(longlong *)(param_1 + 0x9d8),*(undefined1 *)(param_1 + 0x940));
  }
  uVar1 = FUN_00b89270();
  FUN_00b8d260(uVar1,param_1,0xffffffff);
  FUN_010508e0(param_1);
  return;
}

