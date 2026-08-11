/* Ghidra address: 00a7c6c0 */
/* Ghidra symbol: FUN_00a7c6c0 */


void FUN_00a7c6c0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if ((*(char *)(param_1 + 0x39) == '\x02') && (*(longlong *)(param_1 + 0x30) != 0)) {
    FUN_009ec440(&local_28,local_res10[0]);
    local_10 = FUN_004b9860(&PTR_FUN_0047c498,1,local_28,0xff00);
    uVar1 = FUN_00a7c600(param_1);
    FUN_004b8ba0(local_10,uVar1,0);
    FUN_00410f20(local_10);
  }
  FUN_00414480(&local_28);
  FUN_00414480(local_res10);
  return;
}

