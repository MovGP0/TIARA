/* Ghidra address: 01574d70 */
/* Ghidra symbol: FUN_01574d70 */


undefined1 FUN_01574d70(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0043e1a0(&local_10,*(undefined8 *)(param_1 + 0x40));
  FUN_00414ad0(param_2,local_10);
  iVar2 = FUN_00416db0(*param_2,&DAT_01574e34);
  if (iVar2 != 0) {
    iVar2 = FUN_00416db0(*param_2,L"std_logic");
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(*param_2,L"std_ulogic");
      if (iVar2 != 0) {
        uVar1 = 0;
        goto LAB_01574df2;
      }
    }
  }
  uVar1 = 1;
LAB_01574df2:
  FUN_00414480(&local_10);
  return uVar1;
}

