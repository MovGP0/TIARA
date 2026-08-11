/* Ghidra address: 01a32b20 */
/* Ghidra symbol: FUN_01a32b20 */


undefined8 FUN_01a32b20(longlong *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_30 = 0;
  uVar3 = FUN_00f33100(&LAB_00f256b8,1);
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      if (param_2 == '\0') {
        (**(code **)(*param_1 + 0x18))(param_1,&local_38,iVar4);
        FUN_00f33630(uVar3,local_38);
      }
      else {
        (**(code **)(*param_1 + 0x18))(param_1,&local_30,iVar4);
        uVar2 = FUN_0043fc00(local_30);
        FUN_00f33660(uVar3,uVar2);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_38,2);
  return uVar3;
}

