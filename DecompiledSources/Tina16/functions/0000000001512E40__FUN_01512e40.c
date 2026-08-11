/* Ghidra address: 01512e40 */
/* Ghidra symbol: FUN_01512e40 */


void FUN_01512e40(longlong param_1)

{
  double dVar1;
  
  if ((*(char *)(*(longlong *)(param_1 + 0xdd0) + 0x328) != '\0') &&
     (*(char *)(param_1 + 0xec2) != '\0')) {
    *(undefined1 *)(param_1 + 0xec2) = 0;
    FUN_01513140(param_1);
    dVar1 = (double)(**(code **)(**(longlong **)(param_1 + 0xee0) + 0xc0))
                              (*(longlong **)(param_1 + 0xee0));
    FUN_01506ac0(param_1,1.0 / dVar1,0x3ff0000000000000);
    FUN_010eb4a0(*(undefined8 *)(param_1 + 0x9b0),L"Click",0,0);
    FUN_01506c70(param_1);
    FUN_010f6920(param_1,1);
  }
  return;
}

