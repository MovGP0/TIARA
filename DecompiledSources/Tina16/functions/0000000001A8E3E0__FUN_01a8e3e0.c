/* Ghidra address: 01a8e3e0 */
/* Ghidra symbol: FUN_01a8e3e0 */


undefined8 FUN_01a8e3e0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  int local_20;
  int iStack_1c;
  
  local_20 = param_3 + param_5;
  iStack_1c = param_4 + param_6;
  uVar1 = param_1 - param_3 >> 0x1f;
  uVar2 = param_1 - local_20 >> 0x1f;
  if ((int)((param_1 - param_3 ^ uVar1) - uVar1) < (int)((param_1 - local_20 ^ uVar2) - uVar2)) {
    local_20 = param_3;
  }
  uVar1 = param_2 - param_4 >> 0x1f;
  uVar2 = param_2 - iStack_1c >> 0x1f;
  if ((int)((param_2 - param_4 ^ uVar1) - uVar1) < (int)((param_2 - iStack_1c ^ uVar2) - uVar2)) {
    iStack_1c = param_4;
  }
  return CONCAT44(iStack_1c,local_20);
}

