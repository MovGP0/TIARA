/* Ghidra address: 015afe30 */
/* Ghidra symbol: FUN_015afe30 */


void FUN_015afe30(longlong *param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_40 = 0;
  cVar1 = FUN_015adb00(param_1,1);
  if (cVar1 == '\0') {
    FUN_0041ddd0(&local_28,PTR_PTR_020030e8);
    FUN_00410ae0(*param_1,&local_40);
    local_38 = local_40;
    local_30 = 0x11;
    FUN_00442f70(local_20,local_28,&local_38,0);
    FUN_015ad900(3,local_20[0]);
  }
  if (param_2 != '\x03') {
    if (param_2 == '\x04') {
      uVar2 = FUN_015abce0();
      FUN_015abc70(uVar2,param_1[0xc],*(undefined4 *)((longlong)param_1 + 0x44));
    }
    else {
      (**(code **)(*param_1 + 0x70))(param_1);
    }
  }
  FUN_015a93a0(param_1,param_2);
  FUN_00414480(&local_40);
  FUN_00414560(&local_28,2);
  return;
}

