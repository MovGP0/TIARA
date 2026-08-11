/* Ghidra address: 019ac320 */
/* Ghidra symbol: FUN_019ac320 */


bool FUN_019ac320(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  bool local_19;
  longlong local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_19 = false;
  FUN_00414b50(&local_18,*(undefined8 *)(param_1 + 0x68));
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x118))(param_2);
    if (cVar1 != '\0') {
      FUN_017ff4f0(param_2,&local_10);
      iVar2 = FUN_00416db0(local_10,local_18);
      local_19 = iVar2 == 0;
      if (!local_19) {
        cVar1 = FUN_0198a580(param_2);
        if (cVar1 == '\x05') {
          iVar2 = FUN_004170c0(L"Wire_",local_18,1);
          if (iVar2 == 1) {
            uVar3 = 0;
            if (local_18 != 0) {
              uVar3 = *(undefined4 *)(local_18 + -4);
            }
            FUN_00416dc0(&local_18,local_18,6,uVar3);
          }
        }
        else {
          iVar2 = FUN_004170c0(&LAB_019ac4f0,local_18,1);
          if (iVar2 == 1) {
            uVar3 = 0;
            if (local_18 != 0) {
              uVar3 = *(undefined4 *)(local_18 + -4);
            }
            FUN_00416dc0(&local_18,local_18,3,uVar3);
          }
          iVar2 = FUN_004170c0(&LAB_019ac4f0,local_10,1);
          if (iVar2 == 1) {
            uVar3 = 0;
            if (local_10 != 0) {
              uVar3 = *(undefined4 *)(local_10 + -4);
            }
            FUN_00416dc0(&local_10,local_10,3,uVar3);
          }
        }
        iVar2 = FUN_00416db0(local_10,local_18);
        local_19 = iVar2 == 0;
      }
    }
  }
  FUN_00414560(&local_18,2);
  return local_19;
}

