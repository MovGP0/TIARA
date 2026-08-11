/* Ghidra address: 0160a650 */
/* Ghidra symbol: FUN_0160a650 */


undefined8 FUN_0160a650(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_91 [129];
  undefined4 local_10;
  undefined4 local_c;
  
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  FUN_00414480(param_1);
  FUN_01609da0(&local_ac);
  uVar2 = FUN_004425e0(local_91,local_res10[0]);
  cVar1 = _Tiva_FindDevice(uVar2,&local_c,&local_10);
  if (cVar1 != '\0') {
    local_ac = local_c;
    local_a8 = local_10;
    FUN_0160a160(param_1,&local_ac);
  }
  FUN_004144d0(local_res10);
  return param_1;
}

