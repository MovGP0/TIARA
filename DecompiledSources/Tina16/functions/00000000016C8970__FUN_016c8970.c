/* Ghidra address: 016c8970 */
/* Ghidra symbol: FUN_016c8970 */


void FUN_016c8970(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_016bc3a0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_2 + 0x38));
  if (*(longlong *)(param_2 + 0x40) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_016bc3a0(*(undefined8 *)(param_1 + 0x50),*(longlong *)(param_2 + 0x40));
  }
  if (*(longlong *)(param_2 + 0x10) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
  }
  else {
    if (*(longlong *)(param_1 + 0x60) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x488);
    }
    uVar3 = FUN_016c5420(*(undefined8 *)(param_1 + 0x50),param_2,
                         *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x9e8),0,0,0,2,uVar3);
  }
  FUN_014e3a70(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_2 + 8),uVar1,uVar2,uVar3,
               *(undefined8 *)(param_1 + 0x50));
  return;
}

