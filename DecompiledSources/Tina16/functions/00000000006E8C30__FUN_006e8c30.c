/* Ghidra address: 006e8c30 */
/* Ghidra symbol: FUN_006e8c30 */


void FUN_006e8c30(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  if (param_2 == '\0') {
    uVar2 = FUN_0065b870(uVar1);
    uVar3 = thunk_FUN_041b2403(uVar2,0x43b,0,0);
    uVar3 = uVar3 & 0xfffffffe;
  }
  else {
    uVar2 = FUN_0065b870(uVar1);
    uVar3 = thunk_FUN_041b2403(uVar2,0x43b,0,0);
    uVar3 = uVar3 | 1;
  }
  uVar1 = FUN_0065b870(uVar1);
  thunk_FUN_041b2403(uVar1,0x445,0,(longlong)(int)uVar3);
  return;
}

