/* Ghidra address: 00b13190 */
/* Ghidra symbol: FUN_00b13190 */


longlong FUN_00b13190(longlong *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  if ((iVar2 < 1) || (param_1[0xf] == 0)) {
    local_38 = 0;
  }
  else {
    cVar1 = FUN_0046c350(param_2);
    if (cVar1 == '\0') {
      FUN_00467e90(local_20,param_2);
      iVar2 = (**(code **)(*param_1 + 0xb8))(param_1,local_20[0]);
      if ((param_3 != '\0') && (iVar2 == -1)) {
        local_28 = 0xd;
        local_30 = param_2;
        uVar3 = FUN_0044d8d0(&PTR_FUN_004334c0,1,PTR_PTR_02003f28,&local_30,0);
        FUN_004134c0(uVar3);
      }
    }
    else {
      iVar2 = FUN_00462650(param_2);
    }
    local_38 = *(longlong *)(param_1[0xf] + (longlong)iVar2 * 8);
    if ((param_3 != '\0') && (local_38 == 0)) {
      local_38 = FUN_00b13610(&PTR_FUN_00b10080,1,param_1[0x10]);
      *(longlong *)(param_1[0xf] + (longlong)iVar2 * 8) = local_38;
    }
  }
  FUN_00414480(local_20);
  return local_38;
}

