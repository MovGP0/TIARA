/* Ghidra address: 01d862b0 */
/* Ghidra symbol: FUN_01d862b0 */


undefined8 FUN_01d862b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined2 local_2a [9];
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x58);
    local_2a[0] = 0xd;
    FUN_00b90440(*(undefined8 *)(lVar1 + 0xa18));
    FUN_01d83f80(lVar1,param_1,local_2a);
    FUN_00b90440(*(undefined8 *)(lVar1 + 0xa00),param_3);
    local_2a[0] = 0xd;
    FUN_01d83750(lVar1,param_1,local_2a);
  }
  return 0;
}

