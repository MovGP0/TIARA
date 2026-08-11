/* Ghidra address: 0096ebe0 */
/* Ghidra symbol: FUN_0096ebe0 */


undefined1 FUN_0096ebe0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_30 = auStack_68;
  local_38 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb8))
                    (*(longlong **)(param_1 + 0x10),param_2);
  if (iVar1 == -1) {
    local_48 = param_3;
    local_20 = (longlong *)FUN_0096f150(&PTR_FUN_00919bf0,1,param_1,param_2);
    local_21 = 1;
    (**(code **)(*local_20 + 0xe8))(local_20,&local_38);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))
              (*(longlong **)(param_1 + 0x10),local_38,local_20);
  }
  else {
    local_21 = 0;
  }
  FUN_00414520(&local_38);
  return local_21;
}

