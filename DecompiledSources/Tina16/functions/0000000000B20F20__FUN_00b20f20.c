/* Ghidra address: 00b20f20 */
/* Ghidra symbol: FUN_00b20f20 */


undefined8 FUN_00b20f20(undefined8 param_1,ushort *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  FUN_004144d0(param_1);
  bVar1 = (byte)param_2[2];
  bVar2 = *(byte *)((longlong)param_2 + 5);
  if (bVar1 <= bVar2) {
    if ((param_2[3] & 1) != 0) {
      FUN_004155b0(param_1,&DAT_00b21154);
    }
    FUN_00b20e40(&local_30,bVar1);
    FUN_004155b0(param_1,local_30);
  }
  uVar3 = *param_2;
  uVar4 = param_2[1];
  if (uVar3 <= uVar4) {
    if ((param_2[3] & 2) != 0) {
      FUN_004155b0(param_1,&DAT_00b21154);
    }
    FUN_0043f750(&local_38,uVar3 + 1);
    FUN_00415dd0(&local_40,local_38,0);
    FUN_004155b0(param_1,local_40);
  }
  FUN_004155b0(param_1,&LAB_00b21164);
  if (bVar1 <= bVar2) {
    if ((param_2[3] & 4) != 0) {
      FUN_004155b0(param_1,&DAT_00b21154);
    }
    FUN_00b20e40(&local_48,bVar2);
    FUN_004155b0(param_1,local_48);
  }
  if (uVar3 <= uVar4) {
    if ((param_2[3] & 8) != 0) {
      FUN_004155b0(param_1,&DAT_00b21154);
    }
    FUN_0043f750(&local_50,uVar4 + 1);
    FUN_00415dd0(&local_58,local_50,0);
    FUN_004155b0(param_1,local_58);
  }
  FUN_004144d0(&local_58);
  FUN_00414480(&local_50);
  FUN_00414590(&local_48,2);
  FUN_00414480(&local_38);
  FUN_004144d0(&local_30);
  return param_1;
}

