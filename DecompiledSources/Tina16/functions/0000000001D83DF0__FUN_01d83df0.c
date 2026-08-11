/* Ghidra address: 01d83df0 */
/* Ghidra symbol: FUN_01d83df0 */


void FUN_01d83df0(longlong param_1,undefined8 param_2,short *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_3 == 0xd) {
    *param_3 = 0;
    lVar1 = *(longlong *)(param_1 + 0xae0);
    uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0xa28));
    *(undefined8 *)(lVar1 + 0x110) = uVar2;
    FUN_01d82d90(param_1,param_1);
  }
  return;
}

