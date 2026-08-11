/* Ghidra address: 006eb5c0 */
/* Ghidra symbol: FUN_006eb5c0 */


undefined4 FUN_006eb5c0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,byte param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 local_res10 [3];
  undefined8 local_30;
  int local_28;
  int local_24;
  undefined8 local_20;
  
  local_30 = 0;
  local_24 = param_3 + param_4;
  uVar3 = 1;
  if ((param_5 & 1) != 0) {
    uVar3 = 3;
  }
  if ((param_5 & 2) != 0) {
    uVar3 = uVar3 | 4;
  }
  local_res10[0] = param_2;
  local_28 = param_3;
  FUN_00456a50(local_res10,&local_30,&DAT_006eb6b4,&DAT_006eb6c8,1);
  local_20 = FUN_00416740(local_30);
  uVar2 = FUN_0065b870(param_1);
  uVar1 = FUN_004701a0(uVar2,0x438,uVar3,&local_28);
  FUN_00414480(&local_30);
  return uVar1;
}

