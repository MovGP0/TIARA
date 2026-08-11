/* Ghidra address: 01c12310 */
/* Ghidra symbol: FUN_01c12310 */


void FUN_01c12310(longlong param_1,byte param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 local_40 [4];
  
  uVar2 = FUN_01c07120(*(undefined8 *)(param_1 + 0x70));
  lVar3 = FUN_01c03e40(uVar2);
  local_40[0] = *(undefined4 *)(lVar3 + 0xc4);
  uVar2 = FUN_01c07120(*(undefined8 *)(param_1 + 0x70));
  lVar3 = FUN_01c03e40(uVar2);
  local_40[1] = *(undefined4 *)(lVar3 + 0xcc);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x310) + 0x78),
               local_40[param_2]);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x310);
  uVar4 = (uint)(param_2 == 0);
  (**(code **)(*plVar1 + 200))
            (plVar1,*(int *)(*(longlong *)(param_1 + 0x78) + 8) - uVar4,
             *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 4));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x310);
  (**(code **)(*plVar1 + 0xc0))
            (plVar1,**(undefined4 **)(param_1 + 0x78),
             *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 4));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x310);
  (**(code **)(*plVar1 + 0xc0))
            (plVar1,**(undefined4 **)(param_1 + 0x78),
             *(int *)(*(longlong *)(param_1 + 0x78) + 0xc) - uVar4);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x310) + 0x78),
               local_40[param_2 == 0]);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x310);
  (**(code **)(*plVar1 + 200))
            (plVar1,*(int *)(*(longlong *)(param_1 + 0x78) + 8) + -1,
             *(int *)(*(longlong *)(param_1 + 0x78) + 4) - (uint)param_2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x310);
  (**(code **)(*plVar1 + 0xc0))
            (plVar1,*(int *)(*(longlong *)(param_1 + 0x78) + 8) + -1,
             *(int *)(*(longlong *)(param_1 + 0x78) + 0xc) + -1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x310);
  (**(code **)(*plVar1 + 0xc0))
            (plVar1,**(int **)(param_1 + 0x78) + (uint)param_2,
             *(int *)(*(longlong *)(param_1 + 0x78) + 0xc) + -1);
  FUN_00423b10(*(undefined8 *)(param_1 + 0x78),0xffffffff,0xffffffff);
  return;
}

