/* Ghidra address: 00cb55f0 */
/* Ghidra symbol: FUN_00cb55f0 */


void FUN_00cb55f0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined2 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00cb52d0(param_1,param_2,param_3,param_4,1);
  (**(code **)(*param_2 + 0x188))(param_2,local_20,8,0);
  cVar1 = *(char *)(local_20[0] + 1);
  if (cVar1 != 'Z') {
    if (cVar1 == '[') {
      FUN_0041ddd0(local_30,PTR_PTR_02003740);
      uVar2 = FUN_0086dfd0(&PTR_FUN_00ca71d8,1,local_30[0]);
      FUN_004134c0(uVar2);
    }
    else if (cVar1 == '\\') {
      FUN_0041ddd0(&local_38,PTR_PTR_02001e20);
      uVar2 = FUN_0086dfd0(&PTR_FUN_00ca7328,1,local_38);
      FUN_004134c0(uVar2);
    }
    else if (cVar1 == ']') {
      FUN_0041ddd0(&local_40,PTR_PTR_02004148);
      uVar2 = FUN_0086dfd0(&PTR_FUN_00ca7480,1,local_40);
      FUN_004134c0(uVar2);
    }
    else {
      FUN_0041ddd0(&local_48,PTR_PTR_02004140);
      uVar2 = FUN_0086dfd0(&PTR_FUN_00ca75d8,1,local_48);
      FUN_004134c0(uVar2);
    }
  }
  FUN_00414560(&local_48,4);
  FUN_00419430(local_20,&DAT_0086e978);
  return;
}

