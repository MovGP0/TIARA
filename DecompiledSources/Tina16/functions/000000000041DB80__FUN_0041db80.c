/* Ghidra address: 0041db80 */
/* Ghidra symbol: FUN_0041db80 */


undefined8 FUN_0041db80(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00414480(param_1);
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    iVar1 = FUN_00414ce0(param_2);
    FUN_004169f0(local_20,iVar1);
    uVar2 = FUN_00416740(local_20[0]);
    iVar1 = FUN_0041d770(uVar2,iVar1 + 1,param_2,iVar1);
    if (iVar1 < 1) {
      FUN_00414480(local_20);
    }
    else {
      FUN_004169f0(local_20,iVar1 + -1);
    }
    FUN_00414ad0(param_1,local_20[0]);
  }
  FUN_00414480(local_20);
  return param_1;
}

