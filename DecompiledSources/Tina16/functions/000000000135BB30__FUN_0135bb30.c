/* Ghidra address: 0135bb30 */
/* Ghidra symbol: FUN_0135bb30 */


undefined8
FUN_0135bb30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5,int *param_6,int *param_7)

{
  char cVar1;
  int iVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined4 local_c;
  
  local_28 = 0;
  local_20[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414480(param_2);
  FUN_00414480(param_5);
  *param_6 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))
                    (*(longlong **)(param_1 + 8),local_res18,&local_c);
  if (cVar1 != '\0') {
    FUN_004b5390(*(undefined8 *)(param_1 + 8),local_20,local_c);
    FUN_00414ad0(param_5,local_20[0]);
    FUN_00416ba0(&local_28,local_res20,&DAT_0135bcdc);
    iVar2 = FUN_004170c0(local_28,*param_5,1);
    *param_6 = iVar2;
    if (0 < *param_6) {
      iVar2 = FUN_004170c0(&DAT_0135bcec,*param_5,*param_6);
      *param_7 = (iVar2 - *param_6) + 1;
      FUN_00416dc0(param_2,*param_5,*param_6,*param_7);
    }
  }
  FUN_00414560(&local_28,2);
  FUN_00414560(&local_res18,2);
  return param_2;
}

