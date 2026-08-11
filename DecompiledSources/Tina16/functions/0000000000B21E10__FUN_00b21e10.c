/* Ghidra address: 00b21e10 */
/* Ghidra symbol: FUN_00b21e10 */


void FUN_00b21e10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined1 local_1c;
  undefined1 local_1b;
  
  local_20 = (undefined2)*param_1;
  local_1e = (undefined2)((uint)*param_1 >> 0x10);
  local_1c = (undefined1)*(undefined2 *)(param_1 + 1);
  local_1b = (undefined1)((ushort)*(undefined2 *)(param_1 + 1) >> 8);
  FUN_00b21dd0(local_20,local_1e,local_1c,local_1b,param_2,param_3,param_4,param_5);
  return;
}

