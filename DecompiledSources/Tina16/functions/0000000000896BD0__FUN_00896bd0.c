/* Ghidra address: 00896bd0 */
/* Ghidra symbol: FUN_00896bd0 */


void FUN_00896bd0(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  uint local_1c [3];
  
  local_1c[0] = (uint)(param_3 == '\0');
  uVar1 = (**(code **)PTR_PTR_020050a8)(param_2,0x8004667e,local_1c);
  FUN_0089c9c0(param_1,uVar1);
  return;
}

