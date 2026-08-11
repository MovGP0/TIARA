/* Ghidra address: 00423f10 */
/* Ghidra symbol: FUN_00423f10 */


undefined8 FUN_00423f10(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined2 local_res8;
  undefined2 uStackX_a;
  undefined2 local_res10;
  undefined2 uStackX_12;
  
  local_res8 = (short)param_1;
  local_res10 = (short)param_2;
  if ((local_res8 == local_res10) &&
     (uStackX_a = (short)((uint)param_1 >> 0x10), uStackX_12 = (short)((uint)param_2 >> 0x10),
     uStackX_a == uStackX_12)) {
    uVar1 = CONCAT71((uint7)(byte)((uint)param_1 >> 0x18),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

