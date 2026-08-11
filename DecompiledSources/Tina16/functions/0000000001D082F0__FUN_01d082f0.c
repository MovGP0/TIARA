/* Ghidra address: 01d082f0 */
/* Ghidra symbol: FUN_01d082f0 */


undefined8
FUN_01d082f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_res18 [2];
  undefined1 local_1c [12];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar3 = FUN_019a4600();
  uVar2 = FUN_01d08030(param_1,uVar3);
  if ((uVar2 & 4) != 0) {
    uVar3 = FUN_019a4600();
    cVar1 = FUN_01d080f0(param_1,uVar3,2,param_4,param_5,local_1c);
    if (cVar1 != '\0') {
      FUN_00416ba0(local_res18,&DAT_01d08428,local_res18[0]);
    }
  }
  if ((uVar2 & 2) != 0) {
    uVar3 = FUN_019a4600();
    cVar1 = FUN_01d080f0(param_1,uVar3,1,param_4,param_5,local_1c);
    if (cVar1 != '\0') {
      FUN_00416ba0(local_res18,&LAB_01d0843c,local_res18[0]);
    }
  }
  FUN_00414ad0(param_2,local_res18[0]);
  FUN_00414480(local_res18);
  return param_2;
}

