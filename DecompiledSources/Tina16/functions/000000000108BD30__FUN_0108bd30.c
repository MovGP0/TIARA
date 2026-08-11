/* Ghidra address: 0108bd30 */
/* Ghidra symbol: FUN_0108bd30 */


void FUN_0108bd30(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  if (param_3 == '\0') {
    FUN_00416ba0(local_40,*(undefined8 *)(param_1 + 0xb40),L"\\c1.bat");
    (**(code **)(*param_2 + 0x100))(param_2,local_40[0]);
    FUN_00416cd0(&local_48,3,*(undefined8 *)(param_1 + 0xb40),&DAT_0108bee4,L"c1.bat");
    FUN_01057000(local_48,*(undefined8 *)(param_1 + 0xb40),0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xb60) + 0x90))(*(longlong **)(param_1 + 0xb60));
    iVar1 = (**(code **)(*param_2 + 0x28))();
    iVar2 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*param_2 + 0x18))(param_2,local_30,iVar2);
        FUN_01056150(*(undefined8 *)(param_1 + 0xb60),local_30[0],*(undefined8 *)(param_1 + 0xb40),1
                    );
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_0107b180(param_1);
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  return;
}

