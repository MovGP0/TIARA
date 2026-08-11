/* Ghidra address: 01c6d750 */
/* Ghidra symbol: FUN_01c6d750 */


void FUN_01c6d750(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *local_38;
  undefined8 local_30 [2];
  undefined4 local_20;
  uint local_1c;
  
  local_30[0] = 0;
  cVar1 = FUN_01c8cee0(param_1);
  if (cVar1 == '\0') {
    plVar2 = (longlong *)FUN_0149d160(0,&PTR_FUN_0149cf30);
    uVar3 = FUN_0198d430(param_1[0x4f5]);
    cVar1 = (**(code **)(*plVar2 + 0x100))(plVar2,uVar3);
    if (cVar1 == '\0') {
      uVar3 = (**(code **)*plVar2)(plVar2);
      FUN_00418590(uVar3,&DAT_0149d108);
      FUN_01c6cf20(param_1);
    }
    else {
      FUN_0041ddd0(local_30,PTR_PTR_020032e0);
      local_38 = plVar2;
      uVar3 = FUN_017baf50(&local_38,0);
      FUN_017baeb0(&PTR_FUN_017ba4c0,local_30[0],param_1[0x4f5],uVar3);
      (**(code **)(*(longlong *)param_1[0x4f5] + 0x20))((longlong *)param_1[0x4f5],plVar2);
      FUN_01994230(param_1[0x4f5]);
      uVar3 = FUN_0198d430(param_1[0x4f5]);
      FUN_01a9a4e0(uVar3,&local_1c,&local_20);
      uVar3 = FUN_0198d430(param_1[0x4f5]);
      (**(code **)(*plVar2 + 0xe8))(plVar2,uVar3,local_1c,local_20);
      FUN_01993f30(param_1[0x4f5],plVar2,1,0);
      uVar3 = FUN_0198d430(param_1[0x4f5]);
      (**(code **)(*plVar2 + 0xa0))(plVar2,uVar3);
      (**(code **)(*param_1 + 0x2f8))(param_1,local_1c,local_20,0,0,0);
      FUN_01c6d670(param_1,param_1[0x177]);
    }
  }
  FUN_00414480(local_30);
  return;
}

