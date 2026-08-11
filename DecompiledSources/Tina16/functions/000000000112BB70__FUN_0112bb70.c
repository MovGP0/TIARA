/* Ghidra address: 0112bb70 */
/* Ghidra symbol: FUN_0112bb70 */


undefined8 * FUN_0112bb70(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined4 local_1c;
  
  local_38 = 0;
  local_2c = *param_3;
  uStack_24 = param_3[1];
  local_1c = *(undefined4 *)(param_3 + 2);
  uVar2 = FUN_0112bad0(&local_2c);
  FUN_0044a090(param_1,param_2,uVar2,PTR_DAT_02004830);
  uVar1 = (int)(short)local_1c >> 0x1f;
  uVar2 = FUN_00448a90(((int)(short)local_1c ^ uVar1) - uVar1,local_1c._2_2_,0,0);
  FUN_0044a090(&local_38,L"hh:nn",uVar2,PTR_DAT_02004830);
  if ((short)local_1c < 0) {
    FUN_00416cd0(param_1,3,*param_1,&DAT_0112bcbc,local_38);
  }
  else {
    FUN_00416cd0(param_1,3,*param_1,&LAB_0112bcd0,local_38);
  }
  FUN_00414480(&local_38);
  return param_1;
}

