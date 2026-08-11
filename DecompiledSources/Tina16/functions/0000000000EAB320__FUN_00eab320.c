/* Ghidra address: 00eab320 */
/* Ghidra symbol: FUN_00eab320 */


short FUN_00eab320(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_res10 [3];
  short local_72;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_72 = 6;
  cVar1 = (**(code **)(*param_1 + 0xd0))(param_1,local_res10[0],*param_3);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*param_1 + 0x90))(param_1,local_res10[0],plVar3);
    FUN_004b67b0(plVar3,1);
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 1;
      FUN_0043f750(&local_38,iVar5);
      FUN_00416cd0(local_30,3,*param_3,&DAT_00eab578,local_38);
      iVar2 = (**(code **)(*plVar3 + 0xb0))(plVar3,local_30[0]);
    } while (-1 < iVar2);
    FUN_0043f750(&local_40,iVar5);
    FUN_00416cd0(&local_20,3,*param_3,&DAT_00eab578,local_40);
    FUN_00410f20(plVar3);
    uVar4 = FUN_00b89270();
    FUN_00b8e520(uVar4,&local_50,0x847);
    local_70 = *param_3;
    local_68 = 0x11;
    local_60 = local_20;
    local_58 = 0x11;
    FUN_00442f70(&local_48,local_50,&local_70,1);
    local_72 = FUN_0072d440(local_48,3,0xb,0);
    if (local_72 == 6) {
      FUN_00414ad0(param_3,local_20);
    }
  }
  FUN_00414560(&local_50,5);
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return local_72;
}

