/* Ghidra address: 0119ae70 */
/* Ghidra symbol: FUN_0119ae70 */


undefined4 FUN_0119ae70(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  uVar2 = FUN_00414610(param_1);
  uVar1 = FUN_0119af40(local_res8[0],param_2,
                       CONCAT62((int6)((ulonglong)uVar2 >> 0x10),10) & 0xffffffff);
  FUN_00414480(local_res8);
  return uVar1;
}

