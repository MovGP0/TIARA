/* Ghidra address: 00bd3dc0 */
/* Ghidra symbol: FUN_00bd3dc0 */


int FUN_00bd3dc0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54 [5];
  int local_40;
  int local_34;
  
  thunk_FUN_04172119(param_2,local_54);
  iVar1 = thunk_FUN_0419b8dc(param_2,0x4d,0x4d,&local_60);
  if (iVar1 == 0) {
    local_60 = 0;
    local_5c = local_40;
    local_58 = 0;
    local_34 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = (local_54[0] ^ (int)local_54[0] >> 0x1f) - ((int)local_54[0] >> 0x1f);
  }
  return local_60 + local_5c + local_58 + local_34;
}

