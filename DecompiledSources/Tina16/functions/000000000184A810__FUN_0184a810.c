/* Ghidra address: 0184a810 */
/* Ghidra symbol: FUN_0184a810 */


void FUN_0184a810(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined1 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_5;
  uStack_30 = param_5[1];
  puVar3 = &local_38;
  FUN_0184ab90(param_1);
  iVar1 = FUN_01847410(*(undefined8 *)(param_1 + 0xa0));
  uVar2 = FUN_0184a250(param_1,iVar1 + -1,param_3,param_4,puVar3,param_6);
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  return;
}

