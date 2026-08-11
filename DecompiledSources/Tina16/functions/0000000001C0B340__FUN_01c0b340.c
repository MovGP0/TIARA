/* Ghidra address: 01c0b340 */
/* Ghidra symbol: FUN_01c0b340 */


void FUN_01c0b340(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_01beb450(*(undefined8 *)(param_1 + 0x70));
  lVar3 = FUN_01c03e40(uVar2);
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x310) + 0x80),
               *(undefined4 *)(lVar3 + 0xb4));
  uVar2 = FUN_01c07120(*(undefined8 *)(param_1 + 0x70));
  lVar3 = FUN_01c03e40(uVar2);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x310) + 0x78),
               *(undefined4 *)(lVar3 + 0x84));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x310);
  (**(code **)(*plVar1 + 0xf8))
            (plVar1,0,0,*(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x98),
             *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x9c));
  FUN_00423b10(*(undefined8 *)(param_1 + 0x78),0xffffffff,0xffffffff);
  return;
}

