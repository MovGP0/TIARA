/* Ghidra address: 0195c480 */
/* Ghidra symbol: FUN_0195c480 */


short * FUN_0195c480(longlong param_1,short *param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  undefined8 local_res18 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_01970cf0(*(undefined8 *)(param_1 + 0xe8),param_2,local_res18[0],0);
  sVar1 = *param_2;
  if ((((sVar1 == 0x100) || (sVar1 == 8)) || (sVar1 == 0x102)) &&
     (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x208) + 8) != '\0')) {
    iVar2 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 600),L"PascalScript");
    if (iVar2 == 0) {
      FUN_00467e90(&local_18,param_2);
      FUN_0043ebb0(&local_10,local_18);
      FUN_00468a10(param_2,local_10);
    }
    else {
      FUN_00467e90(&local_30,param_2);
      FUN_00450070(&local_28,local_30,&DAT_0195c664,&DAT_0195c674,1);
      FUN_00416cd0(&local_20,3,&DAT_0195c664,local_28,&DAT_0195c664);
      FUN_00468a10(param_2,local_20);
    }
  }
  FUN_00414560(&local_30,5);
  FUN_00414480(local_res18);
  return param_2;
}

