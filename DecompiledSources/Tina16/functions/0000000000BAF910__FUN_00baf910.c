/* Ghidra address: 00baf910 */
/* Ghidra symbol: FUN_00baf910 */


undefined8 FUN_00baf910(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = (longlong *)0x0;
  FUN_00414480(param_2);
  cVar1 = FUN_00baeff0(param_1);
  if (cVar1 != '\0') {
    iVar3 = 0;
    while( true ) {
      iVar2 = (**(code **)(*(longlong *)param_1[6] + 0x18))((longlong *)param_1[6]);
      if (iVar2 <= iVar3) break;
      (**(code **)(*(longlong *)param_1[6] + 0x20))((longlong *)param_1[6],&local_28,iVar3);
      (**(code **)(*local_28 + 0xb8))(local_28,&local_20);
      FUN_00416ad0(param_2,local_20);
      iVar3 = iVar3 + 1;
    }
  }
  cVar1 = FUN_00bb32b0(param_1[3]);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 8))(param_1,&local_40);
    FUN_00bad1a0(&local_38,local_40);
    FUN_00416ad0(param_2,local_38);
  }
  else {
    (**(code **)(*param_1 + 8))(param_1,&local_30);
    FUN_00416ad0(param_2,local_30);
  }
  FUN_00414560(&local_40,3);
  FUN_0041b800(&local_28);
  FUN_00414480(&local_20);
  return param_2;
}

