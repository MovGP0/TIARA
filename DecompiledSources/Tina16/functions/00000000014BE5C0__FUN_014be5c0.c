/* Ghidra address: 014be5c0 */
/* Ghidra symbol: FUN_014be5c0 */


bool FUN_014be5c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  ulonglong uVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_48 = 0;
  local_40 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_006efe10(*(undefined8 *)(*(longlong *)(param_1 + 0x6e8) + 0x4e0));
  uVar2 = FUN_014c0b50();
  FUN_014c1750(uVar2,&local_30);
  uVar2 = FUN_014c0b50();
  FUN_00416ba0(&local_40,L"EXAMPLESROOT|",local_res10[0]);
  FUN_014c1460(uVar2,&local_38,local_40);
  FUN_00416880(&local_48,local_38);
  uVar3 = 0;
  FUN_00416cd0(local_20,5,local_30,L"ajaxfuncsgwt.php?",L"func=getFolderFiles&folder=",local_48,
               L"&format=xml");
  uVar2 = FUN_014c0b50();
  cVar1 = FUN_014c1800(uVar2,local_20[0],&local_28,1,uVar3 & 0xffffffff00000000);
  if (cVar1 != '\0') {
    FUN_014be850(param_1,local_28);
    FUN_00742010(*(undefined8 *)(param_1 + 0x718),0);
  }
  FUN_00414560(&local_48,2);
  FUN_004144d0(&local_38);
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res10);
  return cVar1 != '\0';
}

