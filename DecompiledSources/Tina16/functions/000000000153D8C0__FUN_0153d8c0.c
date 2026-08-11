/* Ghidra address: 0153d8c0 */
/* Ghidra symbol: FUN_0153d8c0 */


undefined8 FUN_0153d8c0(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_40;
  int local_2c [2];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_50 = auStack_78;
  local_10 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b6dc0(param_1,0);
  FUN_004b84c0(param_1,local_20,4);
  FUN_004b84c0(param_1,local_24,4);
  FUN_004b84c0(param_1,&local_1c,4);
  if (local_1c != 2) {
    uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,L"AI_GetJPEGRawData");
    FUN_004134c0(uVar1);
  }
  FUN_004b84c0(param_1,local_2c,4);
  lVar2 = FUN_004b6da0(param_1);
  FUN_004b6dc0(param_1,lVar2 + local_2c[0]);
  FUN_004b84c0(param_1,param_2,4);
  local_40 = FUN_00409570((longlong)*param_2);
  FUN_004b84c0(param_1,local_40,(longlong)*param_2);
  FUN_01b23340(param_1,local_10,1);
  FUN_004b6dc0(param_1,0);
  local_18 = local_40;
  FUN_00410f20(local_10);
  return local_18;
}

