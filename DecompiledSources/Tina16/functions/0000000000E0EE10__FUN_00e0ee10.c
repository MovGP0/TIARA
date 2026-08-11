/* Ghidra address: 00e0ee10 */
/* Ghidra symbol: FUN_00e0ee10 */


undefined1 FUN_00e0ee10(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_50[0] = 0;
  local_58 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_59 = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_30,iVar3);
      iVar2 = FUN_004170c0(*(undefined8 *)PTR_PTR_02001558,local_30[0],1);
      if (iVar2 != 0) {
        FUN_00416dc0(&local_38,local_30[0],1,iVar2 + -1);
        FUN_00416dc0(&local_40,local_30[0],iVar2 + 1,0xff);
        FUN_0043e1a0(local_50,local_38);
        FUN_0043e1a0(&local_58,*param_2);
        iVar2 = FUN_00416db0(local_50[0],local_58);
        if (iVar2 == 0) {
          FUN_00414ad0(param_2,local_40);
          local_59 = 1;
          break;
        }
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_40,3);
  return local_59;
}

