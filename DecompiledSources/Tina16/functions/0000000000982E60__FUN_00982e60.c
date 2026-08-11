/* Ghidra address: 00982e60 */
/* Ghidra symbol: FUN_00982e60 */


void FUN_00982e60(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_0097cfa0(&PTR_FUN_00921528,1,param_1);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  uVar1 = FUN_00973570(&PTR_FUN_009224b8,1,param_1);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  lVar2 = FUN_00974f30(&PTR_FUN_00922d80,1,param_1);
  *(longlong *)(param_1 + 0x90) = lVar2;
  *(undefined1 *)(lVar2 + 0x79) = 1;
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x98))
            (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x80) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x80) = *(undefined8 *)(param_1 + 0x90);
  return;
}

