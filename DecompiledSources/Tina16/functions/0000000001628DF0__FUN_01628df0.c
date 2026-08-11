/* Ghidra address: 01628df0 */
/* Ghidra symbol: FUN_01628df0 */


undefined8 FUN_01628df0(longlong param_1,int param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  if ((param_2 == 0) || (param_2 == 1)) {
    FUN_01627000(param_1,*(undefined8 *)(param_3 + 8),&local_28,&local_30,1);
    local_50 = FUN_0161ab10(&DAT_0161a258,1,param_2,local_28,local_30);
  }
  else if (param_2 == 2) {
    lVar2 = FUN_01612bc0(param_1,1);
    FUN_0043f750(&local_28,*(undefined4 *)(lVar2 + 0xc));
    FUN_00414b50(&local_30,&LAB_01629078);
    uVar3 = FUN_01612bc0(param_1,1);
    cVar1 = FUN_0161c560(uVar3,param_3);
    if (cVar1 == '\0') {
      local_50 = FUN_0161ab10(&DAT_0161a258,1,5,local_28,local_30);
    }
    else {
      local_50 = 0;
    }
  }
  else if (param_2 == 3) {
    lVar2 = FUN_01612bc0(param_1,2);
    FUN_0043f750(&local_28,*(undefined4 *)(lVar2 + 0xc));
    FUN_00414b50(&local_30,&LAB_01629078);
    uVar3 = FUN_01612bc0(param_1,2);
    cVar1 = FUN_0161c560(uVar3,param_3);
    if (cVar1 == '\0') {
      local_50 = FUN_0161ab10(&DAT_0161a258,1,5,local_28,local_30);
    }
    else {
      local_50 = 0;
    }
  }
  else if (param_2 == 4) {
    FUN_0043f750(&local_28,*(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0xc));
    FUN_00414b50(&local_30,&LAB_01629078);
    cVar1 = FUN_0161c560(*(undefined8 *)(param_1 + 0x58),param_3);
    if (cVar1 == '\0') {
      local_50 = FUN_0161ab10(&DAT_0161a258,1,5,local_28,local_30);
    }
    else {
      local_50 = 0;
    }
  }
  FUN_00414560(&local_30,5);
  return local_50;
}

