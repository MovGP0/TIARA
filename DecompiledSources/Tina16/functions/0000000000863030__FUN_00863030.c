/* Ghidra address: 00863030 */
/* Ghidra symbol: FUN_00863030 */


undefined8 FUN_00863030(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_28 = (longlong *)0x0;
  local_20[0] = 0;
  if (param_2 == 0) {
    FUN_0041ddd0(local_20,PTR_PTR_02002c18);
    uVar1 = FUN_0044d490(&PTR_FUN_0086bd98,1,local_20[0]);
    FUN_004134c0(uVar1);
  }
  FUN_0041b890(&local_28,param_2,&DAT_008630f8);
  (**(code **)(*local_28 + 0x18))(local_28,param_1);
  FUN_0041b800(&local_28);
  FUN_00414480(local_20);
  return param_1;
}

