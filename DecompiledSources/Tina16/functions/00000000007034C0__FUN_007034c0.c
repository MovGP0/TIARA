/* Ghidra address: 007034c0 */
/* Ghidra symbol: FUN_007034c0 */


void FUN_007034c0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(longlong *)(param_1 + 0x498) = param_2;
  if ((*(ushort *)(param_1 + 0x34) & 8) == 0) {
    uVar2 = 0;
    if (param_2 != 0) {
      FUN_00703400(param_1);
      FUN_004d26c0(*(undefined8 *)(param_1 + 0x498),param_1);
      (**(code **)(**(longlong **)(param_1 + 0x498) + 0x130))
                (*(longlong **)(param_1 + 0x498),param_1);
      uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x498));
    }
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      uVar3 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar3,0x1401,0,uVar2);
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar2,0x1402,0,0);
    }
  }
  return;
}

