/* Ghidra address: 018afb60 */
/* Ghidra symbol: FUN_018afb60 */


void FUN_018afb60(longlong param_1,undefined8 param_2,undefined2 param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  uVar1 = *param_5;
  local_10._0_4_ = (int)uVar1;
  if (((int)local_10 != 0x7fff) &&
     (local_10._4_4_ = (int)((ulonglong)uVar1 >> 0x20), local_10._4_4_ != 0x7fff)) {
    local_10 = uVar1;
    FUN_018ac930(*(undefined8 *)(param_1 + 0x848),param_4,param_3,&local_10,0);
  }
  return;
}

