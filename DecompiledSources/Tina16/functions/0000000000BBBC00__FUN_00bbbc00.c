/* Ghidra address: 00bbbc00 */
/* Ghidra symbol: FUN_00bbbc00 */


undefined1 FUN_00bbbc00(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [48];
  undefined8 local_48 [3];
  undefined1 *local_30;
  undefined1 local_19 [9];
  
  local_30 = auStack_78;
  local_48[0] = 0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    local_30 = auStack_78;
    FUN_004134c0(param_2);
  }
  else {
    local_19[0] = 1;
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_1,param_2,local_19);
  }
  FUN_00414480(local_48);
  return local_19[0];
}

