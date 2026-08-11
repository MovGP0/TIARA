/* Ghidra address: 00bc0fa0 */
/* Ghidra symbol: FUN_00bc0fa0 */


undefined1 FUN_00bc0fa0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*param_2 + 0x90))(param_2,*(undefined8 *)(param_1 + 0x20),local_20);
  iVar1 = (**(code **)(*local_20 + 0x28))(local_20);
  if (iVar1 < 1) {
    local_21 = 0;
  }
  else {
    iVar1 = (**(code **)(*local_20 + 0xb0))(local_20,L"Background");
    if (iVar1 != -1) {
      uVar2 = (**(code **)(*param_2 + 0x20))
                        (param_2,*(undefined8 *)(param_1 + 0x20),L"Background",
                         *(undefined4 *)(param_1 + 8));
      FUN_00bc0b80(param_1,uVar2);
    }
    iVar1 = (**(code **)(*local_20 + 0xb0))(local_20,L"Foreground");
    if (iVar1 != -1) {
      uVar2 = (**(code **)(*param_2 + 0x20))
                        (param_2,*(undefined8 *)(param_1 + 0x20),L"Foreground",
                         *(undefined4 *)(param_1 + 0x10));
      FUN_00bc0bd0(param_1,uVar2);
    }
    iVar1 = (**(code **)(*local_20 + 0xb0))(local_20,L"Style");
    if (iVar1 != -1) {
      uVar2 = FUN_00bc1260(param_1);
      uVar2 = (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x20),L"Style",uVar2)
      ;
      FUN_00bc12a0(param_1,uVar2);
    }
    local_21 = 1;
  }
  FUN_00410f20(local_20);
  return local_21;
}

