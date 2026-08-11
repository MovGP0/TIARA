/* Ghidra address: 010b3150 */
/* Ghidra symbol: FUN_010b3150 */


undefined1 FUN_010b3150(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res18 [2];
  undefined1 local_19;
  longlong local_18;
  undefined4 local_c;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_19 = 0;
  FUN_010b13a0(param_1,local_res18[0],&local_18,0);
  if (local_18 != 0) {
    cVar1 = FUN_010af1b0(local_18,param_2,&local_c);
    if (cVar1 != '\0') {
      uVar2 = FUN_004aeac0(*(undefined8 *)(local_18 + 0x40),local_c);
      cVar1 = FUN_010ae9c0(uVar2);
      if (cVar1 == '\0') {
        FUN_010aecc0(local_18,local_c);
      }
      local_19 = 1;
    }
  }
  FUN_00414480(local_res18);
  return local_19;
}

