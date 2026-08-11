/* Ghidra address: 01663c80 */
/* Ghidra symbol: FUN_01663c80 */


void FUN_01663c80(longlong param_1,char param_2)

{
  longlong local_28;
  longlong local_20;
  
  if (param_2 == '\0') {
    local_20 = 0;
    local_28 = 0x3ff0000000000000;
  }
  else {
    local_20 = *(longlong *)PTR_DAT_02005998;
    local_28 = *(longlong *)PTR_DAT_020023b8;
  }
  FUN_0165dfb0(param_1,4);
  FUN_0165dfb0(param_1,0xff);
  FUN_0165dfb0(param_1,0x48);
  FUN_0165dfb0(param_1,0x19);
  FUN_0165dfb0(param_1,0xc0);
  FUN_0165dfb0(param_1,0x48);
  FUN_0165dfb0(param_1,0xb9);
  FUN_0165e030(param_1,local_28 - local_20);
  FUN_0165dfb0(param_1,0x48);
  FUN_0165dfb0(param_1,0x21);
  FUN_0165dfb0(param_1,200);
  FUN_0165dfb0(param_1,0x48);
  FUN_0165dfb0(param_1,0xb9);
  FUN_0165e030(param_1,local_20);
  FUN_0165dfb0(param_1,0x48);
  FUN_0165dfb0(param_1,1);
  FUN_0165dfb0(param_1,200);
  FUN_0165dfb0(param_1,0x48);
  FUN_0165dfb0(param_1,0x89);
  FUN_0165dfb0(param_1,0x84);
  FUN_0165dfb0(param_1,0x24);
  FUN_0165e0c0(param_1,*(int *)(param_1 + 0x13ac0) * 8);
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_0165dfb0(param_1,0x48);
    FUN_0165dfb0(param_1,0xbb);
    FUN_0165e150(param_1,*(undefined8 *)(param_1 + 0x118));
    FUN_0165dfb0(param_1,0x48);
    FUN_0165dfb0(param_1,0x89);
    FUN_0165dfb0(param_1,3);
  }
  *(int *)(param_1 + 0x13ac0) = *(int *)(param_1 + 0x13ac0) + 1;
  if (*(int *)(param_1 + 0x13ac4) < *(int *)(param_1 + 0x13ac0)) {
    *(int *)(param_1 + 0x13ac4) = *(int *)(param_1 + 0x13ac0);
  }
  return;
}

