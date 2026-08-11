/* Ghidra address: 0108a1b0 */
/* Ghidra symbol: FUN_0108a1b0 */


void FUN_0108a1b0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_20;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xac0) + 0x18);
  uVar2 = FUN_010b3340(*(undefined8 *)(param_1 + 0xac8),uVar1,&local_20);
  FUN_010af100(local_20,uVar2);
  FUN_00410f20(uVar1);
  (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x180))(*(longlong **)(param_1 + 0xa78));
  iVar3 = FUN_006d5120(*(undefined8 *)(param_1 + 0x798));
  if (iVar3 == 3) {
    FUN_01088c80(param_1);
  }
  return;
}

