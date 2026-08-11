/* Ghidra address: 004644c0 */
/* Ghidra symbol: FUN_004644c0 */


undefined8 FUN_004644c0(undefined2 *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30[0] = 0;
  local_18 = 0;
  FUN_00467310(&local_18,param_1);
  uVar3 = FUN_00415f70(local_18);
  iVar2 = (**(code **)PTR_DAT_02003b78)(uVar3,0x400,0,&local_10);
  if (iVar2 == -0x7ffdfffb) {
    FUN_004168b0(local_30,local_18);
    cVar1 = FUN_00448700(local_30[0],&local_20,PTR_DAT_02004830);
    if (cVar1 == '\0') {
      FUN_00460800(0x80020005,*param_1,5);
    }
    else {
      local_10 = local_20;
    }
  }
  else if (iVar2 != 0) {
    FUN_00460800(iVar2,*param_1,5);
  }
  FUN_00414480(local_30);
  FUN_00414520(&local_18);
  return local_10;
}

