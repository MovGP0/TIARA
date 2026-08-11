/* Ghidra address: 015bff90 */
/* Ghidra symbol: FUN_015bff90 */


undefined4 FUN_015bff90(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 local_c;
  
  plVar1 = (longlong *)FUN_015bfd70(param_1,param_2);
  if (*plVar1 == 0) {
    local_c = 0xffffffff;
  }
  else {
    local_c = *(undefined4 *)(*plVar1 + 0x10);
  }
  return local_c;
}

