/* Ghidra address: 009d3290 */
/* Ghidra symbol: FUN_009d3290 */


undefined8 FUN_009d3290(longlong param_1)

{
  undefined8 uVar1;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  if (param_1 == 0) {
    FUN_0041ddd0(&local_10,&PTR_PTR_009d1408);
    uVar1 = FUN_0044d490(&PTR_FUN_0086bd98,1,local_10);
    FUN_004134c0(uVar1);
  }
  FUN_0041b890(&local_18,param_1,&DAT_009d3358);
  uVar1 = (**(code **)(*local_18 + 0x18))(local_18);
  FUN_0041b800(&local_18);
  FUN_00414480(&local_10);
  return uVar1;
}

