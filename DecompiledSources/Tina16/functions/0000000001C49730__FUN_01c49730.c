/* Ghidra address: 01c49730 */
/* Ghidra symbol: FUN_01c49730 */


void FUN_01c49730(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_019a4600();
  FUN_00f5d280(*(undefined8 *)(param_1 + 0x6d8),0,uVar1);
  FUN_00f07ca0(*(undefined8 *)(param_1 + 0x6f0),*(undefined8 *)(PTR_DAT_02004010 + 0x38d),
               *(undefined8 *)(PTR_DAT_02004010 + 0x395),*(undefined2 *)(PTR_DAT_02004010 + 0x38b),
               PTR_DAT_02004010[0x39d],*(undefined2 *)(PTR_DAT_02004010 + 0x39e));
  uVar1 = FUN_019a4600();
  FUN_010be2d0(*(undefined8 *)(param_1 + 0x6e8),0,uVar1);
  FUN_0149c9f0(*(undefined8 *)(param_1 + 0x6e0),0);
  (**(code **)(**(longlong **)(param_1 + 0x710) + 0x268))
            (*(longlong **)(param_1 + 0x710),PTR_DAT_02004010[0x8bc]);
  (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))
            (*(longlong **)(param_1 + 0x718),PTR_DAT_02004010[0x8bd]);
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x268))
            (*(longlong **)(param_1 + 0x720),PTR_DAT_02004010[0x8be]);
  (**(code **)(**(longlong **)(param_1 + 0x728) + 0x268))
            (*(longlong **)(param_1 + 0x728),PTR_DAT_02004010[0x8bf]);
  FUN_0064dbe0(*(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x538),0);
  FUN_0064cf60(param_1,0x4b1);
  return;
}

