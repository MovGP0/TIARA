/* Ghidra address: 01436450 */
/* Ghidra symbol: FUN_01436450 */


longlong * FUN_01436450(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_24;
  undefined8 local_20 [2];
  
  local_30 = auStack_58;
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x38))(param_1,param_2);
  if ((*param_2 != 0) && (*(short *)*param_2 == 0x40)) {
    FUN_00414480(local_20);
    local_24 = 0;
    if (*param_2 != 0) {
      local_24 = *(undefined4 *)(*param_2 + -4);
    }
    FUN_00416dc0(local_20,*param_2,2,local_24);
    FUN_00414ad0(param_2,local_20[0]);
    FUN_00414480(local_20);
  }
  FUN_00414480(local_20);
  return param_2;
}

