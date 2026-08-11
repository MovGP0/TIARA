/* Ghidra address: 01be1140 */
/* Ghidra symbol: FUN_01be1140 */


void FUN_01be1140(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x150);
  if (cVar1 == '\0') {
    uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x138));
    uVar3 = thunk_FUN_03de17fb(uVar3);
    uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x138));
    thunk_FUN_041b2403(uVar3,0x222,uVar2,0);
  }
  else if (cVar1 == '\x01') {
    FUN_00805200(*(undefined8 *)(param_1 + 0x138));
  }
  else if (cVar1 == '\x02') {
    uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x138));
    uVar3 = thunk_FUN_03de17fb(uVar3);
    uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x138));
    thunk_FUN_041b2403(uVar3,0x223,uVar2,0);
  }
  else if (cVar1 == '\x03') {
    uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x138));
    thunk_FUN_03ab0e43(uVar3,6);
  }
  return;
}

