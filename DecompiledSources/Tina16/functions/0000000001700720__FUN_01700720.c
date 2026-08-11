/* Ghidra address: 01700720 */
/* Ghidra symbol: FUN_01700720 */


void FUN_01700720(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
                 longlong param_5)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00416910(param_3 + 0x36,local_res8[0],0xff);
  uVar2 = (**(code **)(*param_3 + 0xf8))(param_3);
  cVar1 = FUN_01d41fb0(uVar2);
  if (cVar1 == '\0') {
    if (param_5 == 0) {
      uVar4 = FUN_017105e0(0);
      lVar5 = FUN_016fef60(uVar4,local_res8[0],param_2,2,param_4);
    }
    else {
      lVar5 = FUN_016fef60(param_5,local_res8[0],param_2,2,param_4);
    }
  }
  else if (param_5 == 0) {
    uVar4 = FUN_017105e0(0);
    lVar5 = FUN_016fef60(uVar4,local_res8[0],param_2,3,param_4);
  }
  else {
    lVar5 = FUN_016fef60(param_5,local_res8[0],param_2,3,param_4);
  }
  if (lVar5 != 0) {
    if (cVar1 == '\0') {
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
    }
    FUN_017002a0(param_3,lVar5,uVar3);
    FUN_00410f20(lVar5);
  }
  FUN_00414480(local_res8);
  return;
}

