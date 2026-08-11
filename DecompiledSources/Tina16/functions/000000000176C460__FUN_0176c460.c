/* Ghidra address: 0176c460 */
/* Ghidra symbol: FUN_0176c460 */


void FUN_0176c460(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_28 = 0;
  FUN_01769f90(param_1,param_2);
  *(undefined1 *)(param_2 + 0xb0) = *(undefined1 *)(param_1 + 0xb0);
  uVar2 = FUN_0177aa70(*(undefined8 *)(param_1 + 0xc0));
  local_20 = (longlong *)FUN_0177ae90(uVar2);
  while( true ) {
    cVar1 = thunk_FUN_0177b033(local_20);
    if (cVar1 == '\0') break;
    FUN_0177aee0(local_20,&local_28);
    uVar2 = FUN_01779a20(*(undefined8 *)(param_1 + 0xc0),local_28);
    FUN_0177a520(*(undefined8 *)(param_2 + 0xc0),local_28,uVar2);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_004144d0(&local_28);
  return;
}

