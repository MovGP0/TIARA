/* Ghidra address: 010b3f40 */
/* Ghidra symbol: FUN_010b3f40 */


int FUN_010b3f40(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8));
  iVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10));
  iVar3 = (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18));
  iVar4 = FUN_01d321c0(*(undefined8 *)(param_1 + 0x20));
  iVar5 = FUN_01d321c0(*(undefined8 *)(param_1 + 0x30));
  iVar6 = (**(code **)**(undefined8 **)(param_1 + 0x28))(*(undefined8 **)(param_1 + 0x28));
  return iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + 0x10;
}

