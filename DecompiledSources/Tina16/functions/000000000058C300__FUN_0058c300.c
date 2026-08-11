/* Ghidra address: 0058c300 */
/* Ghidra symbol: FUN_0058c300 */


undefined8
FUN_0058c300(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  iVar1 = FUN_0058c240(*(undefined8 *)*param_3);
  if (iVar1 < 9) {
    local_60 = FUN_00590a90(&LAB_0058d838,param_2,param_3);
    FUN_0040f840(&local_60,&local_80,0,8);
    local_58 = local_80;
    uStack_50 = uStack_78;
    uStack_48 = uStack_70;
    uStack_40 = uStack_68;
  }
  else {
    FUN_00590be0(&LAB_0058d9d0,&local_58,param_2,param_3);
  }
  FUN_0058c3b0(param_1,param_3,&local_58,param_4);
  return param_1;
}

