/* Ghidra address: 016eebe0 */
/* Ghidra symbol: FUN_016eebe0 */


undefined8
FUN_016eebe0(undefined8 param_1,longlong *param_2,ushort param_3,undefined4 param_4,longlong param_5
            )

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong local_68 [9];
  
  plVar3 = local_68;
  for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar3 = *param_2;
    param_2 = param_2 + 1;
    plVar3 = plVar3 + 1;
  }
  if (param_5 == 0) {
    iVar1 = FUN_01b057d0(param_1,param_4);
    uVar4 = *(undefined8 *)(local_68[param_3] + (longlong)iVar1 * 8);
  }
  else {
    iVar1 = FUN_01b057d0(param_5,param_4);
    uVar4 = *(undefined8 *)(local_68[param_3] + (longlong)iVar1 * 8);
  }
  return uVar4;
}

