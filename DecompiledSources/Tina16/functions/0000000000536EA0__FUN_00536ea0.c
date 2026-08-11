/* Ghidra address: 00536ea0 */
/* Ghidra symbol: FUN_00536ea0 */


undefined8 FUN_00536ea0(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if ((param_2 == (byte *)0x0) || (0x1f < *param_2 || (1 << (*param_2 & 0x1f) & 0x1020eU) == 0)) {
    uVar1 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02005920);
    FUN_004134c0(uVar1);
  }
  uVar1 = FUN_00417740(param_1,&DAT_00527bf8);
  FUN_00538080(local_res18,param_2,uVar1);
  return param_1;
}

