/* Ghidra address: 00ea90f0 */
/* Ghidra symbol: FUN_00ea90f0 */


undefined8
FUN_00ea90f0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,int param_5)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_14;
  undefined8 local_10;
  
  local_20 = auStack_48;
  if (param_3 == 0) {
    FUN_00419430(param_2,&DAT_004210c0);
  }
  else {
    local_14 = 0;
    if (param_3 != 0) {
      local_14 = *(int *)(param_3 + -4);
    }
    if ((local_14 < param_5) || (local_20 = auStack_48, param_5 < 1)) {
      local_20 = auStack_48;
      FUN_00ea68e0(param_5);
    }
    local_10 = FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_00ea4ee0(*(undefined8 *)(param_1 + 0x20),param_3);
    FUN_00ea5080(*(undefined8 *)(param_1 + 0x20),local_10,param_4,param_5);
    FUN_004b5550(local_10,param_2);
    FUN_00410f20(local_10);
  }
  return param_2;
}

