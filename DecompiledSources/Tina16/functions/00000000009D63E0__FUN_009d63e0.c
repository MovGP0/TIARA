/* Ghidra address: 009d63e0 */
/* Ghidra symbol: FUN_009d63e0 */


undefined4 FUN_009d63e0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *local_38;
  undefined4 local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_38 = auStack_68;
  local_48 = 0;
  local_40 = 0;
  *param_3 = 0;
  FUN_0041b800(param_3);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
    local_20 = *(longlong **)(*(longlong *)(lVar1 + 0x68) + 0x40);
    (**(code **)(*local_20 + 0x88))(local_20,*(undefined8 *)(param_1 + 0x18));
    (**(code **)(*local_20 + 0x90))(local_20,param_2);
    FUN_009d2fd0(param_1);
    cVar2 = (**(code **)(*local_20 + 0x98))(local_20);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*local_20 + 0xa0))(local_20);
      if (cVar2 == '\0') {
        cVar2 = FUN_004113d0(local_20[0x15],&PTR_FUN_00926660);
        if (cVar2 == '\0') {
          local_28 = (longlong *)FUN_009530f0(&PTR_FUN_0090b468,1,0);
          (**(code **)(*local_20 + 200))(local_20,&local_48);
          (**(code **)(*local_28 + 0x2c0))(local_28,local_48);
          FUN_009d3370(param_3,local_28,0,1);
        }
        else {
          FUN_0041b800(param_3);
        }
      }
      else {
        FUN_009d3640(&local_40,local_20,*(undefined8 *)(param_1 + 0x20));
        FUN_0041b840(param_1 + 0x48,local_40);
        FUN_0041b800(param_3);
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))
                          (*(longlong **)(param_1 + 0x48),0,param_3);
        FUN_0041d630(uVar3);
      }
    }
    FUN_009d31d0(param_1);
  }
  local_30 = 0;
  FUN_00414520(&local_48);
  FUN_0041b800(&local_40);
  return local_30;
}

