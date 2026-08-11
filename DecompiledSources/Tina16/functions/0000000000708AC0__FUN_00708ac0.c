/* Ghidra address: 00708ac0 */
/* Ghidra symbol: FUN_00708ac0 */


void FUN_00708ac0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x62) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 99) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x60) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x61) = 0;
  thunk_FUN_041543e0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48),0,0,1,uVar1,uVar2,uVar3,
                     uVar4);
  return;
}

