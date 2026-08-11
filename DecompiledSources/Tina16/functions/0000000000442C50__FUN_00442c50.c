/* Ghidra address: 00442c50 */
/* Ghidra symbol: FUN_00442c50 */


void FUN_00442c50(int param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  undefined2 *local_78;
  undefined1 local_70;
  undefined2 local_68 [36];
  
  if (0x1f < param_3) {
    param_3 = 0x1f;
  }
  cVar1 = FUN_0044f3e0(param_2,param_3 - 1);
  if (cVar1 == '\x01') {
    param_3 = param_3 - 1;
  }
  FUN_00442480(local_68,param_2,param_3);
  local_68[param_3] = 0;
  local_78 = local_68;
  local_70 = 10;
  FUN_0043dbd0((&PTR_PTR_01dc04b8)[param_1],&local_78,0);
  return;
}

