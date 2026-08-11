/* Ghidra address: 01cfaa80 */
/* Ghidra symbol: FUN_01cfaa80 */


undefined8 FUN_01cfaa80(longlong *param_1,undefined8 param_2)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 local_10;
  
  local_10 = 0;
  sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (sVar1 == 0x39) {
    iVar3 = (**(code **)(**(longlong **)PTR_DAT_02002da8 + 0xb8))
                      (*(longlong **)PTR_DAT_02002da8,*(undefined8 *)(param_1[0x35] + 0x38));
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
    FUN_0043f750(&local_10,uVar2);
    iVar3 = (**(code **)(**(longlong **)PTR_DAT_02002da8 + 0xb8))
                      (*(longlong **)PTR_DAT_02002da8,local_10);
  }
  if (iVar3 < 0) {
    FUN_00414ad0(param_2,L"Dummy");
  }
  else {
    FUN_004b5390(*(undefined8 *)PTR_DAT_02002da8,param_2,iVar3);
  }
  FUN_00414480(&local_10);
  return param_2;
}

