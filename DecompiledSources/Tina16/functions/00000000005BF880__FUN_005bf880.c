/* Ghidra address: 005bf880 */
/* Ghidra symbol: FUN_005bf880 */


undefined8 FUN_005bf880(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_00417580(local_38,&DAT_005bc4e0);
  uVar2 = FUN_005bba20(param_3);
  FUN_005bfa10(param_1,local_38,uVar2);
  cVar1 = FUN_005bff80(param_1,param_3,local_38);
  if ((cVar1 == '\x01') || ((param_4 & cVar1 == '\x02') != 0)) {
    FUN_00414ad0(param_2,local_10);
  }
  else {
    FUN_00414ad0(param_2,local_18);
  }
  FUN_00417740(local_38,&DAT_005bc4e0);
  return param_2;
}

