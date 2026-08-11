/* Ghidra address: 00868af0 */
/* Ghidra symbol: FUN_00868af0 */


undefined4 FUN_00868af0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_20 = (longlong *)0x0;
  local_28 = 0;
  *param_3 = 0;
  FUN_008687d0(param_1,&local_20);
  FUN_004168e0(&local_28,param_2);
  uVar2 = FUN_0041b800(&local_18);
  uVar1 = (**(code **)(*local_20 + 0x198))(local_20,local_28,uVar2);
  FUN_0041d630(uVar1);
  lVar3 = FUN_00863630(&DAT_008608b0,1,local_18);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar3 + 0x10;
  }
  FUN_0041b890(param_3,lVar3,&DAT_00868c0c);
  local_10 = 0;
  FUN_00414520(&local_28);
  FUN_0041b800(&local_20);
  FUN_0041b800(&local_18);
  return local_10;
}

