/* Ghidra address: 01996ef0 */
/* Ghidra symbol: FUN_01996ef0 */


undefined4 FUN_01996ef0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_019aead0(param_1);
  FUN_019af0a0(param_1);
  uVar1 = FUN_01d3bed0(*(undefined8 *)(param_1 + 0x488));
  uVar2 = FUN_0199a410(param_1,param_2,param_3,0,1,param_4,param_1,uVar1);
  iVar3 = FUN_019954d0(param_1);
  FUN_019aed30(param_1,iVar3 + 1);
  FUN_019aede0(param_1,0,param_1,0);
  return uVar2;
}

