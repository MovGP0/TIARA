/* Ghidra address: 014ced30 */
/* Ghidra symbol: FUN_014ced30 */


void FUN_014ced30(longlong param_1)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  undefined8 local_38;
  undefined1 local_30 [7];
  undefined1 local_29 [9];
  
  local_38 = 0;
  FUN_01995600(*(undefined8 *)(param_1 + 8),0,0);
  plVar3 = (longlong *)FUN_01995660(*(undefined8 *)(param_1 + 8),0,0);
  while (plVar3 != (longlong *)0x0) {
    sVar2 = FUN_01d03160(plVar3);
    (**(code **)(*plVar3 + 0x288))(plVar3,&local_38);
    if (sVar2 == 0x32) {
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x60),plVar3);
    }
    if ((sVar2 == 0x39) &&
       (cVar1 = FUN_015f5c70(*(undefined8 *)(param_1 + 0x28),plVar3,0xffff,local_30,local_29),
       cVar1 != '\0')) {
      *(longlong **)(param_1 + 0x210) = plVar3;
    }
    FUN_01995800(*(undefined8 *)(param_1 + 8),0,0);
    plVar3 = (longlong *)FUN_01995660(*(undefined8 *)(param_1 + 8),0);
  }
  FUN_00414480(&local_38);
  return;
}

