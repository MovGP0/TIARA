/* Ghidra address: 01795b80 */
/* Ghidra symbol: FUN_01795b80 */


void FUN_01795b80(longlong param_1)

{
  char cVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  cVar1 = FUN_01795d10(param_1);
  if (cVar1 != '\0') {
    FUN_0177d560(*(undefined8 *)(param_1 + 0xce0),*(undefined8 *)(param_1 + 0xcd8));
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xce0) + 0xa8))(*(longlong **)(param_1 + 0xce0));
    if (cVar1 != '\0') {
      FUN_00724270(*(undefined8 *)(param_1 + 0xce0),local_20);
      FUN_017960f0(param_1,local_20[0],*(undefined8 *)(param_1 + 0xd18));
      FUN_01795670(param_1,0);
      FUN_00724270(*(undefined8 *)(param_1 + 0xce0),&local_28);
      FUN_00414ad0(param_1 + 0xc98,local_28);
      FUN_01798270(param_1);
      FUN_01798460(param_1,0);
      (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))(*(longlong **)(param_1 + 0x758),0);
      FUN_017989e0(param_1);
      FUN_0064e770(*(undefined8 *)(param_1 + 0x948));
      (**(code **)(**(longlong **)(param_1 + 0xc38) + 0x268))
                (*(longlong **)(param_1 + 0xc38),
                 *(undefined1 *)(*(longlong *)(param_1 + 0xd18) + 0x48));
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

