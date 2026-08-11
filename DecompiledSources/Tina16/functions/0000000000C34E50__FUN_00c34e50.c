/* Ghidra address: 00c34e50 */
/* Ghidra symbol: FUN_00c34e50 */


longlong * FUN_00c34e50(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  longlong *local_20;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_20 = (longlong *)0x0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00c17678);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_005f6910);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_2,&LAB_00c14270);
      if (cVar1 == '\0') {
        FUN_0041ddd0(&local_38,PTR_PTR_020023d8);
        FUN_00c1a320(local_38);
      }
      else {
        local_20 = (longlong *)FUN_00c28640(&LAB_00c14270,1,param_1);
        (**(code **)(*local_20 + 0x10))(local_20,param_2);
      }
    }
    else {
      local_20 = (longlong *)FUN_00c28640(&LAB_00c14270,1,param_1);
      (**(code **)(*local_20 + 0x10))(local_20,param_2);
    }
  }
  else {
    iVar2 = FUN_00c1aa10();
    local_3c = iVar2 + -1;
    local_24 = 0;
    if (-1 < local_3c) {
      do {
        local_3c = iVar2;
        local_20 = (longlong *)FUN_00c28640(&LAB_00c14270,1,param_1);
        uVar3 = FUN_00c2fce0(*(undefined8 *)(param_2 + 0x50),local_24);
        (**(code **)(*local_20 + 0x10))(local_20,uVar3);
        local_24 = local_24 + 1;
        local_3c = local_3c + -1;
        iVar2 = local_3c;
      } while (local_3c != 0);
    }
  }
  FUN_00c34e10(param_1);
  (**(code **)(*param_1 + 0x20))(param_1,param_1);
  FUN_00414480(&local_38);
  return local_20;
}

