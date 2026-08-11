/* Ghidra address: 01512d60 */
/* Ghidra symbol: FUN_01512d60 */


void FUN_01512d60(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(char *)(*(longlong *)(param_1 + 0xdd8) + 0x328) != '\0') &&
     (*(char *)(param_1 + 0xec2) == '\0')) {
    *(undefined1 *)(param_1 + 0xec2) = 1;
    FUN_01513140(param_1);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xc0))(*(longlong **)(param_1 + 0xee0));
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xc0))(*(longlong **)(param_1 + 0xee0));
    FUN_01506ac0(param_1,uVar1,uVar2);
    FUN_010eb4a0(*(undefined8 *)(param_1 + 0x9b0),L"Time",&DAT_01512e38,0);
    FUN_01506c70(param_1);
    FUN_010f6920(param_1,1);
  }
  return;
}

