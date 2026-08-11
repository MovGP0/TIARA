/* Ghidra address: 016eeca0 */
/* Ghidra symbol: FUN_016eeca0 */


void FUN_016eeca0(undefined8 param_1,longlong *param_2,ushort param_3,undefined4 param_4,
                 undefined8 param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_68 [9];
  
  plVar3 = local_68;
  for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar3 = *param_2;
    param_2 = param_2 + 1;
    plVar3 = plVar3 + 1;
  }
  if (param_6 == 0) {
    iVar1 = FUN_01b057d0(param_1,param_4);
    *(undefined8 *)(local_68[param_3] + (longlong)iVar1 * 8) = param_5;
  }
  else {
    iVar1 = FUN_01b057d0(param_6,param_4);
    *(undefined8 *)(local_68[param_3] + (longlong)iVar1 * 8) = param_5;
  }
  return;
}

