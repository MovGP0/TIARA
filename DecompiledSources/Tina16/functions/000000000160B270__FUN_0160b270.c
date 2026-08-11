/* Ghidra address: 0160b270 */
/* Ghidra symbol: FUN_0160b270 */


undefined8 FUN_0160b270(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  bVar2 = false;
  bVar1 = false;
  FUN_00441a10(&local_38,local_res10[0]);
  FUN_0043e130(local_30,local_38);
  iVar3 = FUN_00416db0(local_30[0],L".DLL");
  if (iVar3 != 0) {
    FUN_00441a10(&local_48,local_res10[0]);
    FUN_0043e130(&local_40,local_48);
    iVar3 = FUN_00416db0(local_40,L".TFLITE");
    if (iVar3 != 0) {
      FUN_00441a10(&local_58,local_res10[0]);
      FUN_0043e130(&local_50,local_58);
      iVar3 = FUN_00416db0(local_50,&DAT_0160b4dc);
      if (iVar3 == 0) {
        bVar2 = true;
      }
      else {
        bVar1 = false;
      }
      goto LAB_0160b38b;
    }
  }
  bVar1 = true;
  bVar2 = false;
LAB_0160b38b:
  FUN_00414b50(&local_20,local_res10[0]);
  if (bVar1) {
    FUN_004414c0(&local_20,local_res10[0],L".VHD");
  }
  else if (bVar2) {
    FUN_015fca00(&local_60,0,0);
    FUN_00441920(&local_70,local_res10[0]);
    FUN_004414c0(&local_68,local_70,L".VHD");
    FUN_00416cd0(&local_20,3,local_60,&LAB_0160b508,local_68);
  }
  FUN_00414ad0(param_1,local_20);
  FUN_00414560(&local_70,9);
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return param_1;
}

