/* Ghidra address: 00cebd10 */
/* Ghidra symbol: FUN_00cebd10 */


undefined1 FUN_00cebd10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 local_30 [2];
  undefined1 local_19 [9];
  
  local_30[0] = 0;
  puVar1 = (undefined8 *)FUN_00cebce0(param_1);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_00414480(param_3);
    local_19[0] = 0;
    if (DAT_01eb1400 != (code *)0x0) {
      (*DAT_01eb1400)(DAT_01eb1408,param_1,param_2,param_3,local_19);
    }
  }
  else {
    (*(code *)*puVar1)(puVar1,local_30,param_1,param_2);
    FUN_00414ad0(param_3,local_30[0]);
    local_19[0] = 1;
  }
  FUN_00414480(local_30);
  return local_19[0];
}

