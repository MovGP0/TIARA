/* Ghidra address: 01c1fcc0 */
/* Ghidra symbol: FUN_01c1fcc0 */


void FUN_01c1fcc0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x130))
            (*(longlong **)(param_1 + 0x6e0),*(undefined8 *)(param_1 + 0x6d8));
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x6e0));
  iVar1 = thunk_FUN_04118143(uVar2,0xffffffec);
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x6e0));
  thunk_FUN_03c9d277(uVar2,0xffffffec,(longlong)(iVar1 + -0x20000));
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x720) = uVar2;
  *(undefined1 *)(param_1 + 0x718) = 0;
  *(undefined1 *)(param_1 + 0x719) = 0;
  uVar2 = FUN_015e1d70(&PTR_FUN_015be748,1,param_1);
  *(undefined8 *)(param_1 + 0x710) = uVar2;
  return;
}

