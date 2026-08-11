/* Ghidra address: 0185e020 */
/* Ghidra symbol: FUN_0185e020 */


void FUN_0185e020(longlong param_1,char *param_2)

{
  char cVar1;
  undefined8 local_38;
  undefined8 local_30 [2];
  char local_1d;
  uint local_1c [3];
  
  local_30[0] = 0;
  local_38 = 0;
  local_1d = *param_2;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),&local_1d,1);
  cVar1 = *param_2;
  if (cVar1 == DAT_01fae667) {
    FUN_0185e6a0(param_1,1,param_2 + 8);
    local_1c[0] = (*(uint *)(param_2 + 0xc) & 7) * 4;
    if (param_2[0x10] != '\0') {
      local_1c[0] = local_1c[0] | 2;
    }
    if (param_2[0x11] != '\0') {
      local_1c[0] = local_1c[0] | 1;
    }
    FUN_0185e6a0(param_1,1,local_1c);
    FUN_0185e6a0(param_1,2,param_2 + 0x14);
    FUN_0185e6a0(param_1,1,param_2 + 0x18);
    local_1c[0] = 0;
    FUN_0185e6a0(param_1,1,local_1c);
  }
  else if (cVar1 == DAT_01fae668) {
    FUN_0185df70(param_1,*(undefined8 *)(param_2 + 8));
  }
  else if (cVar1 == DAT_01fae669) {
    FUN_0185e6a0(param_1,1,param_2 + 8);
    FUN_0185e6a0(param_1,2,param_2 + 0xc);
    FUN_0185e6a0(param_1,2,param_2 + 0x10);
    FUN_0185e6a0(param_1,2,param_2 + 0x14);
    FUN_0185e6a0(param_1,2,param_2 + 0x18);
    FUN_0185e6a0(param_1,1,param_2 + 0x1c);
    FUN_0185e6a0(param_1,1,param_2 + 0x20);
    FUN_0185e6a0(param_1,1,param_2 + 0x24);
    FUN_0185e6a0(param_1,1,param_2 + 0x28);
    FUN_0185df70(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  else if (cVar1 == DAT_01fae66a) {
    FUN_0185e6a0(param_1,1,param_2 + 8);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_2 + 0xc,8);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_2 + 0x14,3)
    ;
    FUN_0185df70(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  else {
    FUN_0043fba0(&local_38,cVar1,4);
    FUN_00416ba0(local_30,L"unknown extension: ",local_38);
    FUN_01860c30(local_30[0]);
  }
  FUN_00414560(&local_38,2);
  return;
}

