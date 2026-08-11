/* Ghidra address: 01d83ea0 */
/* Ghidra symbol: FUN_01d83ea0 */


void FUN_01d83ea0(longlong param_1,undefined8 param_2,short *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_3 == 0xd) {
    *param_3 = 0;
    lVar1 = *(longlong *)(param_1 + 0xae0);
    uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0xa20));
    *(undefined8 *)(lVar1 + 0x118) = uVar2;
    (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x78))
              (*(longlong **)(param_1 + 0xa88),lVar1 + 0x2a,lVar1 + 0x118,0);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xa20),*(undefined8 *)(lVar1 + 0x118));
    FUN_01d838a0(param_1,param_1);
  }
  return;
}

