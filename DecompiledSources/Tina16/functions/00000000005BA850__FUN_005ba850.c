/* Ghidra address: 005ba850 */
/* Ghidra symbol: FUN_005ba850 */


undefined8 FUN_005ba850(double param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  double dVar4;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  cVar1 = FUN_00526f10(param_1);
  if (cVar1 != '\0') {
    FUN_0041ddd0(local_20,PTR_PTR_02002258);
    uVar2 = FUN_0044d490(&PTR_FUN_00433ec0,1,local_20[0]);
    FUN_004134c0(uVar2);
  }
  if (param_1 < 0.0) {
    dVar4 = param_1 * (double)param_2 - 0.5;
  }
  else {
    dVar4 = param_1 * (double)param_2 + 0.5;
  }
  if ((922337203685477.0 < dVar4) || (dVar4 < -922337203685477.0)) {
    FUN_0041ddd0(&local_28,PTR_PTR_02001750);
    uVar2 = FUN_0044d490(&PTR_FUN_00434000,1,local_28);
    FUN_004134c0(uVar2);
  }
  lVar3 = FUN_0040c840();
  FUN_005ba1c0(&local_10,lVar3 * 10000);
  FUN_00414560(&local_28,2);
  return local_10;
}

